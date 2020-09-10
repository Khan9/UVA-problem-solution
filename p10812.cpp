#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc;
    cin >> tc;
    for(i=1; i<=tc; i++)
    {
        int sum,diff,x,y;
        cin >>sum >>diff;
        if(sum<=diff)
        {
            cout <<"impossible" <<endl;
        }
        else
        {
            x=(sum+diff)/2;
            y=sum-x;
            cout << x << " " << y << endl;
        }


    }
}
