#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100];
    cin >>c;

  int i,k,COMMA=0;
  for(i=0;i<strlen(c);i++)
  {
      if(c[i]=='"')
{


      COMMA++;
}
  }
    int len=strlen(c);
    for(i=len; i>2; i--)
    {
        k=i-1;
        c[i]=c[k];
    }
    c[len+1]='\0';

    for(i=0; i<len; i++)
    {
        if(c[i]=='"')
        {
           // COMMA++;
            c[i]='!';

        }
    }
    cout <<c<<endl;
    cout <<COMMA;
}
