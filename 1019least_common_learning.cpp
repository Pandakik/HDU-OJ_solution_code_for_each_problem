 #include<iostream>
using namespace std;
 
int gcd(int x, int y);
int main(){
    int n, m, x, y, a, b, l;
    cin>>n;
    while(n--){
        cin >> m;
        cin >> a;
        l = a; //当前的最小公倍数
        while(--m){
            cin >> a;
            l = l/gcd(l, a) * a; //这里如果先乘后除的话，可能会出现超出int限制的数。。这里就比较坑
        }
        cout << l << endl;
    }
    return 0;
}
int gcd(int x, int y){
    if(!y)   return x;
    else   return gcd(y, x%y);
}
