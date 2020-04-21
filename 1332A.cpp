#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r,d,u,x,y,x1,x2,y1,y2;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>d>>u;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(((r+l!=0) && (x1==x2) )||((d+u!=0) && (y1==y2)))
        {
           cout<<"No"<<endl;
        }
        else{
           int X=x+r-l;
            int Y=y+u-d;
            if((x1<=X && X<=x2) && (y1<=Y && Y<=y2))
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
