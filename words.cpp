#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1002];
    int i,j,length,is_word_started=0,word=0;
    gets(s);
    cout <<s<<endl;
    length = strlen(s);
    for(i=0; i<length; i++)
    {
        if(is_word_started==0)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                is_word_started=1;
                i++;
                break;
            }
        }

    }
    //cout <<i<<endl;
    if(is_word_started=1)
    {
        for(i=i; i<length; i++)
        {
            //cout <<"dfd"<<endl;
            if(s[i]>=97 && s[i]<=122)
            {
                word++;
                is_word_started=0;
                break;
            }
        }
    }
    cout <<word <<endl;


}
