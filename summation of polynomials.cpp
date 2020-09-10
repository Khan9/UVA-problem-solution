#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,i,sum=0,tc;
    cin >>tc;
    for(j=1;j<=tc;j++)
    {
        cin >>n;
        for(i=1;i<=n;i++)
        {
            sum=sum+pow(i,3);
        }
        cout <<sum <<endl;
        sum=0;

    }

}
