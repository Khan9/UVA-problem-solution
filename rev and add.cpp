#include<bits/stdc++.h>
using namespace std;
double rev(long long int n)
{
    double sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum=(sum+r)*10;
        n=n/10;
    }
    sum=sum/10;
    return sum;
}

int main()
{
    int i,tc;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {



    long long int n,result,i,r;
    cin >>n;


    for(i=1; i<=1000; i++)
    {
        result=rev(n);
       //9 cout << "rev" <<result << endl;

        n=n+result;             //adding two numbers
        result=rev(n);          //reversing the summation
        if(result==n)           //checking for palindrome
        {
            cout <<i <<" "<<result <<endl;
            break;
        }

    }
    }
}
