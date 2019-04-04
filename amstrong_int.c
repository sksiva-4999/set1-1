#include<stdio.h>
int main()
{
  int digit,i=0,remainder,cube,num,q;
  int sum=0;
  scanf("%d",&digit);
  scanf("%d",&q);
  for(i=digit+1;i<q;i++)
  {
    num=digit;
    while(i < digit)
    {
      remainder=digit%10;
      cube=remainder*remainder*remainder;
      sum=sum+cube;
      digit=digit/10;
      i++;
    }
    if(num == sum)
    {
      printf("yes");
    }
    else
    {
      printf("No");
    }
    digit++;
   }
  return 0;
 }
