#include<bits/stdc++.h>
using namespace std;
int _I(){int x; scanf("%d",&x); return x;}
int main ()
{
    //freopen("in.txt","r",stdin);
    int k,tc;
     cin >>tc;
        for(k=1;k<=tc;k++) {

       // cout<<"k = "<<k<<endl;
    //while(k--){
            int  f,i,j=0;
            double temp=0,sum=0;
            f = _I();
            double a[3*f];
            double b[f];
            for(i=0;i<3*f;i++)
            {
                cin>>a[i];

            }
            for(i=0;i<3*f;i++)
            {


                temp=a[i]/a[++i];
                temp=temp*a[++i];
                temp=temp*a[--i];
                i++;
                b[j]=temp;
                j++;

            }
           for(j=0;j<f;j++){
                sum=sum + b[j];
            }
            cout << sum <<'\n';

    }



    return 0;
}
