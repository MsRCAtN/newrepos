#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define rep(i, l, r) for (int i = l; i <= r; i++)
#define clr(x, y) memset(x, y, sizeof(x))
#define travel(x) for (Edge *p = last[x]; p; p = p->pre)
using namespace std;
const int INF = 0x7fffffff;
const int maxn = 50010;
int n, m, a[maxn], mn = INF, mx = -INF, l, r, k, pos, opt;
struct Node
{
    Node *ch[2];
    int s, w, v, rnd;
    inline void maintain() { s = ch[0]->s + ch[1]->s + w; }
};
Node TREAP[1200000], *pt = TREAP, *null = pt++;
inline Node *newnode(int x)
{
    pt->s = pt->w = 1;
    pt->v = x;
    pt->rnd = rand();
    pt->ch[0] = pt->ch[1] = null;
    return pt++;
}
inline void rotate(Node *&o, int d)
{
    Node *k = o->ch[d ^ 1];
    o->ch[d ^ 1] = k->ch[d];
    k->ch[d] = o;
    o->maintain();
    k->maintain();
    o = k;
}
struct Treap
{
    Node *root;
    Treap() { root = null; }
    void ins(int x, Node *&p)
    {
        if (p == null)
        {
            p = newnode(x);
            return;
        }
        p->s++;
        if (x == p->v)
            p->w++;
        else
        {
            int d = x > p->v;
            ins(x, p->ch[d]);
            if (p->ch[d]->rnd < p->rnd)
                rotate(p, d ^ 1);
        }
    }
    void del(int x, Node *&p)
    {
        if (p == null)
            return;
        if (p->v == x)
        {
            if (p->w > 1)
            {
                p->s--;
                p->w--;
                return;
            }
            if (p->ch[0] != null && p->ch[1] != null)
            {
                int d = p->ch[0]->rnd > p->ch[1]->rnd;
                rotate(p, d);
                del(x, p->ch[d]);
            }
            else
                p = p->ch[0] == null ? p->ch[1] : p->ch[0];
        }
        else
        {
            int d = x > p->v;
            p->s--;
            del(x, p->ch[d]);
        }
        if (p != null)
            p->maintain();
    }
    int getrank(int x, Node *p)
    {
        int ans = 0;
        for (Node *p = root; p != null;)
        {
            int d = p->v == x ? -1 : x > p->v;
            if (d == -1)
            {
                ans += p->ch[0]->s;
                break;
            }
            else if (!d)
                p = p->ch[0];
            else
                ans += p->ch[0]->s + p->w, p = p->ch[1];
        }
        return ans;
    }
    int getpre(int x)
    {
        int ans = -INF;
        for (Node *p = root; p != null;)
        {
            if (x > p->v)
                ans = max(ans, p->v), p = p->ch[1];
            else
                p = p->ch[0];
        }
        return ans;
    }
    int getnxt(int x)
    {
        int ans = INF;
        for (Node *p = root; p != null;)
        {
            if (x < p->v)
                ans = min(ans, p->v), p = p->ch[0];
            else
                p = p->ch[1];
        }
        return ans;
    }
} treap[maxn << 2];
struct Node2
{
    int l, r;
} t[maxn << 2];
void build(int u, int v, int w)
{
    t[w].l = u;
    t[w].r = v;
    rep(i, u, v) treap[w].ins(a[i], treap[w].root);
    if (u == v)
        return;
    int mid = (u + v) >> 1;
    build(u, mid, w << 1);
    build(mid + 1, v, w << 1 | 1);
}
int getrank(int u, int v, int w)
{
    if (t[w].l == u && t[w].r == v)
        return treap[w].getrank(k, treap[w].root);
    int mid = (t[w].l + t[w].r) >> 1;
    if (v <= mid)
        return getrank(u, v, w << 1);
    else if (u > mid)
        return getrank(u, v, w << 1 | 1);
    else
        return getrank(u, mid, w << 1) + getrank(mid + 1, v, w << 1 | 1);
}
int getnum(int u, int v)
{
    int ans, l = mn, r = mx;
    int k2 = k;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        k = mid;
        if (getrank(u, v, 1) < k2)
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }
    return ans;
}
void modify(int u, int w)
{
    treap[w].del(a[u], treap[w].root);
    treap[w].ins(k, treap[w].root);
    if (t[w].l == t[w].r)
        return;
    int mid = (t[w].l + t[w].r) >> 1;
    if (u <= mid)
        modify(u, w << 1);
    else
        modify(u, w << 1 | 1);
}
int getpre(int u, int v, int w)
{
    if (t[w].l == u && t[w].r == v)
        return treap[w].getpre(k);
    int mid = (t[w].l + t[w].r) >> 1;
    if (v <= mid)
        return getpre(u, v, w << 1);
    else if (u > mid)
        return getpre(u, v, w << 1 | 1);
    else
        return max(getpre(u, mid, w << 1), getpre(mid + 1, v, w << 1 | 1));
}
int getnxt(int u, int v, int w)
{
    if (t[w].l == u && t[w].r == v)
        return treap[w].getnxt(k);
    int mid = (t[w].l + t[w].r) >> 1;
    if (v <= mid)
        return getnxt(u, v, w << 1);
    else if (u > mid)
        return getnxt(u, v, w << 1 | 1);
    else
        return min(getnxt(u, mid, w << 1), getnxt(mid + 1, v, w << 1 | 1));
}
inline int read()
{
    int ans = 0, f = 1;
    char c = getchar();
    while (!isdigit(c))
    {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (isdigit(c))
    {
        ans = ans * 10 + c - '0';
        c = getchar();
    }
    return ans * f;
}
int main()
{
    n = read();
    m = read();
    rep(i, 1, n) a[i] = read(), mn = min(mn, a[i]), mx = max(mx, a[i]);
    build(1, n, 1);
    rep(i, 1, m)
    {
        opt = read();
        switch (opt)
        {
        case 1:
            l = read();
            r = read();
            k = read();
            printf("%d\n", getrank(l, r, 1) + 1);
            break;
        case 2:
            l = read();
            r = read();
            k = read();
            printf("%d\n", getnum(l, r));
            break;
        case 3:
            pos = read();
            k = read();
            mn = min(mn, k);
            mx = max(mx, k);
            modify(pos, 1);
            a[pos] = k;
            break;
        case 4:
            l = read();
            r = read();
            k = read();
            printf("%d\n", getpre(l, r, 1));
            break;
        case 5:
            l = read();
            r = read();
            k = read();
            printf("%d\n", getnxt(l, r, 1));
            break;
        }
    }
    return 0;
}