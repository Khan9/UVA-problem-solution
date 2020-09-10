#include<bits/stdc++.h>
using namespace std;
int is_hulu(string a)
{
    int len,i,v=0,hf=0;
    len=a.size();
    for(i=0; i<len; i++)
    {
        v*=10;
        v+=a[i]-'0';
        if(v>=15)
        {
            v=v%15;
        }

    }
    if(v==0)
    {
        cout <<"This is huluculu festival year."<<endl;
        hf++;
    }
    return  hf;

}
int leap(string s)
{
    int len,i,v=0,lf1=0;
    len=s.size();           ///checking number is divisible by 4 or not
    for(i=0; i<len; i++)
    {
        v*=10;
        v+=s[i]-'0';
        if(v>=4)
        {
            v=v%4;
        }

    }
    if(v==0)
    {
        lf1=1;
    }
    v=0;    ///so 'v' doesnt counterfeiting with previous value
    int lf2=0;
    for(i=0; i<len; i++)
    {
        v*=10;
        v+=s[i]-'0';
        if(v>=100)
        {
            v=v%100;           ///checking the number is divisible by 100 or not.
        }

    }
    if(v==0)
    {
        lf2=1;
    }
    v=0;    ///so 'v' doesnt counterfeiting with previous value


    int lf3=0;
    for(i=0; i<len; i++)
    {
        v*=10;
        v+=s[i]-'0';
        if(v>=400)
        {
            v=v%400;           ///checking the number is divisible by 400 or not.
        }

    }
    if(v==0)
    {
        lf3=1;
    }

    //cout <<s <<endl;
    int lp=0;
    if(lf1==1 && lf2==0)
    {
        cout <<"This is leap year."<<endl;
        lp=1;
    }

    else if(lf1==1 && lf2==1)
    {
        if(lf3==1)
        {
            cout <<"This is leap year."<<endl;
            lp=1;
        }
    }
    return lp;
}
int is_bulu(string s)
{
     int len,i,v=0,bf=0;
    len=s.size();
    for(i=0; i<len; i++)
    {
        v*=10;
        v+=s[i]-'0';
        if(v>=55)
        {
            v=v%55;
        }

    }
    if(v==0)
    {
        bf++;
    }
    return  bf;
}


int main()
{
    string s;
    while (getline(cin,s))
    {
        int by,hy,ly;
        ly=leap(s);
        hy=is_hulu(s);
        by=is_bulu(s);
        if(ly==1 && by==1)
        {
            cout <<"This is bulukulu festival year."<<endl;
        }
        else if(ly==1 || hy==1)
        {

        }
        else
        {
            cout <<"This is an ordinary year."<<endl;
        }

    }

}
