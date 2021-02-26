#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <set>
#include <map>
#include <cmath>
using namespace std;
const int maxn = 1001;
int ta, m, len,vis[maxn],num[maxn];
char s[maxn],ch[maxn],m_ch[maxn];
map<char,int>mm;
void fun(){
    char c = 'A';
    for(int i=1;i<=26;i++)
        mm[c++] = i;
}
int is(int v,int w,int x,int y,int z,int tar){
    if(v - w*w + x*x*x - y*y*y*y + z*z*z*z*z == tar) return 1;
    else return 0;
}
void sear(){
    for(int a=0; a<len; a++){
        for(int b=0; b<len; b++){
            if(a==b) continue;
            for(int c=0; c<len; c++){
                if(c==b)continue;
                for(int d=0; d<len;d++){
                    if(c==d)continue;
                    for(int e=0; e<len; e++){
                        if( is(mm[s[a]],mm[s[b]],mm[s[c]],mm[s[d]],mm[s[e]],ta)){
                            ch[0] = s[a],ch[1] = s[b];
                            ch[2] = s[c],ch[3] = s[d];
                            ch[4] = s[e],ch[5] = '\0';
                            if(strcmp(ch,m_ch)>0) strcpy(m_ch,ch);
                        }
                    }
                }
            }
        }
    }
}
int main(){
    fun();
    while(~scanf("%d %s",&ta,s)&&(ta||strcmp(s,"END"))){
        memset(ch,'\0',sizeof(ch));
        memset(m_ch,'\0',sizeof(m_ch));
        len = strlen(s);
        sort(s,s+len);
        sear();
        if(strlen(m_ch)==0) printf("no solution\n");
        else printf("%s\n",m_ch);
    }
    return 0;
}