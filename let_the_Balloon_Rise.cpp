#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
 
int t;
char map[10001][20];//存储气球的颜色；
int sum[10001];
 
int main()
{
    while(~scanf("%d",&t)&&t)
    {
        memset(sum,0,sizeof sum);
        int i,j;
        for(i=0;i<t;i++)
        {
            scanf("%s",map[i]);
            for(j=0;j<i-1;j++)
            {
                if(strcmp(map[i],map[j])==0)//把这个气球的颜色和以前出现过的气球进行比较，如果颜色相同就加1；
                    sum[i]=sum[i]+1;//前面的没出现一个颜色相同的，这个颜色的气球个数就加1；
            }
        }
        int s=0;
        for(i=0;i<t;i++)//进行遍历，找出出现次数最多的颜色；
        {
            if(sum[i]>s)
            {
                s=i;//标记出现次数最多的颜色是第几个气球；
            }
        }
        printf("%s\n",map[s]);//输出这个气球的颜色；
    }
    return 0;
}