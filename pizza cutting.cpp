
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0,i;
    while(scanf("%ld", &a)==1)
    {


        if(a>0)
        {
            for(i=a; i>0; i--)
            {
                sum=sum+i;
            }
            cout <<sum+1 <<endl;
            sum=0;
        }


        else if (a==0)

        {
            cout << sum <<endl;
        }
        else
        {
            return 0;
        }
    }

    return 0;

}
