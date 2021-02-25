   #include<stdio.h>
      int f(int j)
      {
          int i,sum=1;
     
          for(i=1;i<=j;i++)
          sum*=i;
          return sum;
      }  
      int main()
      {
          int n,i,j;
          double num=2.5;
        double  e;
          printf("n e\n");
          printf("- -----------\n");
          printf("0 1\n1 2\n2 2.5\n");
          for(i=3;i<=9;i++)
          {
          e= 1.0*1/f(i);
            num+=e;
         printf("%d %.9lf\n",i,num);
        }
          return 0;
      }
