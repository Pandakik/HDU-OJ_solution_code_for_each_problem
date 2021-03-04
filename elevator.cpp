#include<iostream>
using namespace std;

int main()
{
    int n,a,b,t;
    cin >> n;
    while(n)
    {
        a=0;
        t = 0;
        while(n--)
        {
            cin >> b;
            if(a>b)
                t+=4*(a-b);
            else
                t+=6*(b-a);
            t+=5;
            a = b; 
        }
        cout << t << endl;
        cin >> n;
    }
    return 0;
}