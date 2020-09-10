#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //int h,m,result=0;
    double m,h,result=00;
    while (scanf("%lf:%lf",&h,&m)==2)
    {
        if (h==0 && m==0)
        {
            break;
        }
        else
        {
            m=m/5;
            result=m-h;
            if(result<0)
            {
                result=-result;
            }
            result=result*30;
            /*if(result==180)
            {
                result = result-5;
            }*/
             if(result >180)
            {
                result =360-result;

            }
            printf("%.3f\n",result);



        }
    }
}

