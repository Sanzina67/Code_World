#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,arr[205];
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        for(int i = 1; i <= n; i++)
        {
            int x = arr[i];
            int count = 1;
            while (arr[x] != arr[i])
                {
                count += 1;
                x = arr[x];
            }
            cout<<count<<"\t";
        }

    }
}
