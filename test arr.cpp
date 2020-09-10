#include<bits/stdc++.h>
using namespace std;

int main()
{
    ////char c[10],temp;
    int i,k;
   // gets(c);
    int len=strlen(c);
    //cout <<len <<endl;
    //printf("%d",len);
    for(i=len;i>=1;i--)
    {
        k=i-1;
        c[i]=c[j];
    }
    //cout << len <<endl;
    c[len+1]='\0';
    for(i=0;i<len;i++)
    {
        if(c[i]=='"')
        {
            c[i]='4';
        }
    }
    cout << c;

}
