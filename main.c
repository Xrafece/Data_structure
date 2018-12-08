#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[1001][1001], v[1001];
int k;
void dfs(int s)
{
    int i;
    for(i = 0; i < k; i++ )
    {
        if(a[s][i] == 1 && v[i] == 0)
        {
            printf(" %d", i);
            v[i] = 1;
            dfs(i);
        }
    }
}
int main()
{
    int x, y, m, n, s, i;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &k, &m);
        memset(a, 0, sizeof(a));
        memset(v, 0, sizeof(v));
        for(i = 0; i < m; i++ )
        {
            scanf("%d %d", &x, &y);
            a[x][y] = 1;
            a[y][x] = 1;
            if(i == 0)
            {
                s = x;
            }
        }
        v[s] = 1;
        printf("%d", s);
        dfs(s);
        printf("\n");
    }
    return 0;
}
