#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
#define N 51
using namespace std;

int adj[N][N];
int parent[N];
int flow[N]; 
int n;
int BFS(int s, int t)
{
    memset(parent, 0, sizeof parent);
    memset(flow, 0, sizeof flow);

    queue<int> Q;
    Q.push(s);
    parent[s] = s;
    flow[s] = 1e9;

    while (!Q.empty())
    {
        int now = Q.front();
        Q.pop();
        for (int i = 1; i <= n; ++i)
        {
            if (adj[now][i] > 0 && !parent[i])
            {
                parent[i] = now;

                flow[i] = min(adj[now][i], flow[now]);
                if (i == t)
                    return flow[i];

                Q.push(i);
            }
        }
    }

    return 0; 
}
int main()
{
    int m;
    int capacity[N][N] = {};
    while (scanf("%d%d", &n, &m) && (n || m))
    {
        int u, v, c, f;
        for (int i = 0; i < m; ++i)
        {
            scanf("%d%d%d", &u, &v, &c);
            capacity[u][v] = capacity[v][u] = adj[v][u] = adj[u][v] = c;
        }

       
        while ((f = BFS(1, 2)) != 0)
        {
            for (int from = parent[2], to = 2; from != to; from = parent[to = from])
            {
                adj[from][to] -= f;
                adj[to][from] += f;
            }
        }

        for (int i = 1; i <= n; ++i) 
            if (flow[i] > 0)
                for (int j = 1; j <= n; ++j)        
                    if (!flow[j] && capacity[i][j]) 
                        printf("%d %d\n", i, j);

        putchar('\n');

        //init
        for (int i = 1; i <= n; ++i)
        {
            memset(adj[i], 0, sizeof adj[i]);
            memset(capacity[i], 0, sizeof capacity[i]);
        }
    }

    return 0;
}
