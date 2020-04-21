#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, index[100001];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
       cin>>a;
        index[a] = i;
    }

    int m, b;
    cin>>m;
    long long Vasya=0, Petya=0;
    while (m--)
    {
       cin>>b;
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    printf("%I64d %I64d\n", Vasya, Petya);
    return 0;
}
