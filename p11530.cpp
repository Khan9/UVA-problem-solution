#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc;
    cin >>tc;
    getchar();
    for(i=1;i<=tc;i++)
    {
        char c[110];
        fgets(c,110,stdin);
        int j,count=0;
        //gets(c);
        //cout <<c<<endl;
        for(j=0;j<strlen(c);j++)
        {
            if(c[j]==' ' || c[j]=='a' || c[j]=='d' || c[j]=='g' || c[j]=='j' || c[j]=='m' || c[j]=='p' ||c[j]=='t' || c[j]=='w')
            {
                count++;
            }
            if(c[j]=='b' || c[j]=='e' || c[j]=='h' || c[j]=='k' || c[j]=='n' || c[j]=='q' || c[j]=='u' || c[j]=='x')
            {
                count=count + 2;
            }
            if(c[j]=='c'|| c[j]=='f' || c[j]=='i' || c[j]=='l' || c[j]=='o' || c[j]=='r' || c[j]=='v' || c[j]=='y')
            {
                count = count + 3;
            }
            if(c[j]=='s' || c[j]=='z')
            {
                count = count +4;
            }


        }
        printf("Case #%d: %d\n",i,count);

    }
}
