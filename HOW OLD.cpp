#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc,dp,mp,yp,db,mb,yb,a;   //dp=present date , db =birth date
    cin >> tc;

    for(i=1; i<=tc; i++)
    {
        scanf("%d/%d/%d",&dp,&mp,&yp);
        scanf("%d/%d/%d",&db,&mb,&yb);

        if(dp<db){mb++;}
        if(mp<mb){yb++;}
        a=yp-yb;

        if(a<0)
        {
              printf("Case #%d: Invalid birth date\n",i);
        }
        else if (a>130)
        {
            printf("Case #%d: Check birth date\n",i);
        }
        else
        {
            printf("Case #%d: %d\n",i,a);
        }


    }
}
