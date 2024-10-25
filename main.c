#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("enter three integer :\n ");
   scanf("%d%d%d",&a,&b,&c);
   printf("the sum is = %d\n",a+b+c);
   printf("the product is = %d\n",a*b*c);
   printf("the average is = %d\n",(a+b+c)/3);
   if(a>b&&a>c){
    printf("the largest is = %d\n",a);
   }else if(b>c&&b>a){
   printf("the largest is = %d\n",b);
   }
   else if(b<c&&c>a){
   printf("the largest is = %d\n",c);
   }
   if(a<b&&a<c){
    printf("the smallest is = %d\n",a);
   }else if(a>b&&c>b){
    printf("the smallest is = %d\n",b);
   } else if(a>c&&c<b){
    printf("the smallest is = %d\n",c);
   }
   else
    printf("these number are Equal");
    return 0;
}
