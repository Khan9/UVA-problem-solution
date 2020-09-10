#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        long long int a_rem,b_rem;
        int add=0;
        int count=0;
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            while (a>0 && b>0)
            {
                a_rem=a%10;
                b_rem=b%10;
                a=a/10;
                b=b/10;
                if((a_rem+b_rem+add)>9)
                {
                    count++;
                    add=1;
                }
                else
                {
                    add=0;
                }
            }
            if(count==0)
            {
                cout << "No carry operation.\n"<<endl ;
            }
            else if(count==1)
            {
                printf("%d carry operation.\n",count);
            }
            else
            {
                printf("%d carry operations.\n",count);
            }
        }
    }

}
