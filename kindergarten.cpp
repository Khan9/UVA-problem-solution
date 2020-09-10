#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i,c=0;
    gets(a);


    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
        {
           for(i=i+1;i<=strlen(a);i++)
           {
               if(a[i]==' ')
               {
                   c++;

               }
                 break;
           }

        }
    }
    cout << c;






}
