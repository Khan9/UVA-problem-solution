#include<bits/stdc++.h>
using namespace std;
int rev(double n)
{
    double r,sum=0;
    while (n>0)
    {
        r=n % 10;
        n=n/10;
        sum=(sum+r)*10;
    }
    return sum/10;

}
int main()
{
    double n,r,res,sum=0;
    while(scanf("%lf",&n)==1)
    {
        if(n<0)
        {
            break;
        }
        else
        {
           // r=n/3;
            while (n>0)
            {
                res=n%3;
                n=n/3;
                sum=(sum+res)*10;
            }
              sum=sum/10;
        cout <<rev(sum) <<endl;
        sum=0;
        }


    }
}
