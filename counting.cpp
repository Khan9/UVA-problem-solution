#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    while(scanf("%d%d",&i,&j)==2)
    {
        int s,max=0,temp;
        if(j<i)
        {
            //swap
            cout <<i <<j <<endl;

        }


        for(s=i; s<=j; s++)
        {
            int n,c=0;
            n=s;

            while(n>1)    //implementing algo;
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else
                {
                    n=(3*n)+1;
                }

                c++;
            }

            if(c>=max)
            {
                max=c;
            }

        }
        printf("%d %d %d\n",i,j,max+1);
    }

    return 0;
}
