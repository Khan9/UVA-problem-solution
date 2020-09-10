#include<bits/stdc++.h>
using namespace std;
void first_quoto(char c[],int j)
{
    int i,k;
    int len=strlen(c);
    cout <<len <<endl;
    for(i=len; i>j; i--)
    {
        k=i-1;
        c[i]=c[k];
    }
    c[len+2]='\0';
    for(i=0; i<len; i++)
    {
        if(c[i]=='"')
        {
            c[i]='`';
        }
    }
    cout << "F" <<strlen(c) <<endl;
}

void end_quoto(char c[],int j)
{
    int i,k;
    int len=strlen(c);
    for(i=len; i>j; i--)
    {
        k=i-1;
        c[i]=c[k];
    }
    c[len+1]='\0';

    for(i=0; i<len; i++)
    {
        if(c[i]=='"')
        {
            c[i]='!';
        }
    }
}

int main()
{
    int Z,tc;
    cin >> tc;
    getchar();
    for(Z=1; Z<=tc; Z++)
    {
        char c[700];
        int j,is_quoto_started=0;
        gets(c);
        for(j=0; j<strlen(c); j++)
        {

            if(is_quoto_started==0)
            {

                if(c[j]=='"')
                {
                    first_quoto(c,j);                    ///calling function to create additional space at 'j and putting desired punctuation
                    is_quoto_started=1;
                    // break;
                }
                // break;
            }
            cout << "num  " <<is_quoto_started <<endl;

           if(is_quoto_started==1)
            {

                if(c[j]=='"')
                {
                    // cout <<"tes"<<endl;
                    end_quoto(c,j);
                    is_quoto_started=0;
                    //klbreak;
                }
            }
        }
        cout <<c<<endl;
    }
}
