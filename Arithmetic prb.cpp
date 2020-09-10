#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1,n2,s1,s2,temp1,temp2,i=0,j=0,c=0,sum;
    while (scanf("%lld%lld",&n1,&n2)==2)
    {
        if(n1==0 && n2==0)
        {
            break;
        }
        else
        {

            temp1=n1;
            temp2=n2;
            //cout <<n1;
            while (n1>0)    //counting total digits of n1
            {
                s1=n1%10;
                n1=n1/10;
                i++;
            }

            // cout <<i;
            double  a[i];
            while (n2>0)        //counting total digits of n2
            {
                s2=n2%10;
                n2=n2/10;
                j++;

            }
            //  cout <<j;
            double b[j];           //creating a array for storing the n2 with one extra cell

            for(int z=i; temp1>0; z--)   //putting the number from the last cell of the array to calculate from right side
            {
                s1=temp1%10;
                a[z]=s1;
                temp1=temp1/10;

            }
            a[0]=0;
            //  cout <<a[4]<<endl;
            //cout <<a[5]<<endl;
            for(int z=j; temp2>0; z--)
            {
                s2=temp2%10;
                b[z]=s2;
                temp2=temp2/10;

            }
            // cout <<b[3] <<endl;
            b[0]=0;
            //cout <<i;
            //cout <<j;
            if(i<=j)
            {
                for (int z=i; z>0; z--)           //adding each digit and checking  if they they have carry or not
                {
                    // cout <<a[z] <<b[j] <<endl;

                    sum=a[z]+b[j];
                    j--;
                    if(sum>=10)
                    {
                        c++;
                    }
                }
                cout <<c <<endl;
                c=0;

            }
            else
            {
                for (int z=j; z>0; z--)
                {
                    sum=b[z]+a[i];
                    i--;
                    if(sum>=10)
                    {
                        c++;
                    }
                }
                cout <<c <<endl;
                c=0;
            }
        }



    }
}
