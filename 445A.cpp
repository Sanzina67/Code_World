#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    char str[101][101];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>str[i][j];
            if(str[i][j]=='.')
            {
                if((i+j)%2==0)
                {
                    str[i][j]='W';
                }
                else
                {
                    str[i][j]='B';
                }
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<str[i][j];
        }
        cout<<endl;
    }
}
