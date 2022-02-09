#include <bits/stdc++.h>
#define N 300010
using namespace std;
 
struct Edge{
    int from, to, next;
} edge[N];
 
int head[N], tot;
 
inline void addedge(int u, int v){
    edge[++tot] = (Edge){u, v, head[u]}, head[u] = tot;
}
 
int f[N][26], n, m, d[N];
char s[N];
queue<int> Q;
 
int main(){
    scanf("%d%d", &n, &m);
    scanf("%s", s + 1);
    for (int i = 1; i <= m; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        addedge(x, y);
        d[y] ++;
    }
    
    for (int i = 1; i <= n; i++){
        if (!d[i]){
            Q.push(i);
            f[i][s[i] - 'a'] = 1;
        }
    }
    
    int rem = n;
    while (!Q.empty()){
        int now = Q.front();
        Q.pop();
        rem --;
        for (int i = head[now]; i; i = edge[i].next){
            Edge e = edge[i];
            for (int j = 0; j < 26; j++){
                f[e.to][j] = max(f[e.to][j], f[now][j] + (s[e.to] - 'a' == j));
            }
            d[e.to] --;
            if (!d[e.to]) Q.push(e.to);
        }
    }
    
    if (rem) return puts("-1"), 0;
    
    int ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < 26; j++){
            ans = max(ans, f[i][j]);
        }
    }
    
    printf("%d\n", ans);
    return 0;
}