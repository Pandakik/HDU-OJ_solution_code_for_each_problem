#include<iostream>
using namespace std;
int main(){
    int n,m,cont=0,num=0;
    int T;
    cin>>T;
    while(T--)
    {
    while(cin>>n>>m&&n!=0)   //之前我这里错了，误加上m！=0了~~其实对第二个数字没啥要求
    {        
        int a,b;
        for(a=1;a<100;++a){
        for(b=a+1;b<n;++b){
            if((a*a+b*b+m)%(a*b)==0)
            cont++;
        }
    }
    cout<<"Case "<<++num<<": "<<cont<<endl;
    cont=0;
    }
    num=0;
    if(T)
    cout<<endl;
    }
}