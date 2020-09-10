#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        int sum=0,r;
        if(n>0)
        {


        while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+r;
        }
            if(sum<=9)
            {
                cout<< sum<<endl;
            }
            else{
            while(sum>9)
            {
                r=sum%10;
                sum=sum/10;
                sum=sum+r;

            }

        cout <<sum<<endl;

            }
        }
        else{break;}

               /* else
       /* {
            break;
        }*/
    }



}
