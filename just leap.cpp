#include<bits/stdc++.h>
using namespace std;
int leap(int n)
{
    int l1=0;
    if(n%4==0 && n%100!=0)
    {
        cout << "This is leap year." <<endl;
        l1=1;
    }
    else if(n%4==0 && n%100==0)
    {
        if(n%400==0)
        {
            cout << "This is leap year." <<endl;
            l1=1;

        }

    }
    return l1;

}
int is_hulu (int n)
{
    int l2;
    if(n%15==0)
    {
        cout << "This is huluculu festival year." <<endl;
        l2=1;
    }
    return l2;
}

int main()
{
    int n;
    while((scanf("%d",&n)==1))
    {
        int lr,hr,br;
        lr=leap(n);
        hr=is_hulu(n);
        if(lr==1 && n%55==0)//because,cant use the flag values in other function
        {
            cout << "This is Bulukulu festival year."<<endl;
        }
        else if(lr=1 && hr==1)
        {

        }
        else
        {
            cout << "This is an ordinary year." <<endl;
        }
    }

}
