#include<stdio.h>
int main()
{
  int digit,i=0,remainder,cube,num,q,j=0,d;
  int sum=0;
  scanf("%d",&digit);
  scanf("%d",&q);
  num=digit;
  d=num;
  for(i=digit;i<q;i++)
  {
    while(j < d)
    {
      remainder=d%10;
      cube=remainder*remainder*remainder;
      sum=sum+cube;
      d=d/10;
      j++;
      
    }
    if(i == sum)
    {
      printf("%d\t",num);
    }
    num++;
    d=num;
   }
  return 0;
 }
