#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //cin >>tc;
    while (scanf("%d",&n)!=EOF)
    {
        int money,i,j,sum,dif,p,r;

        int a[n];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        cin >> money;
        int min_dif=9999;
        for(i=0; i<n-1; i++)
        {

            for(j=i+1; j<n; j++)
            {

                sum=a[i]+a[j];
                if(sum==money)
                {
                    //cout << "12";
                    dif=a[i]-a[j];
                    if(dif < 0)
                    {
                        dif=-dif;
                        cout <<dif <<endl;
                    }
                    else if(dif < min_dif)
                    {

                        min_dif=dif;
                        p=a[i];
                        r=a[j];

                    }
                }
            }
        }
        cout <<"Peter should buy books whose prices are " << p <<" and " << r <<"." <<endl;
        cout <<endl;

    }
    return 0;
}
