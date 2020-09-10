#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,tc,sum=0,a,b;
    cin >> tc;
    for(j=1;j<=tc;j++)
    {
        cin >>a >>b;
        if(a%2==0){a++;}
        if(b%2==0){b--;}

        for(i=a; i<=b;i=i+2)
        {
            sum=sum+i;

        }
        printf("Case %d: %d\n",j,sum);
        sum=0;

    }

}
