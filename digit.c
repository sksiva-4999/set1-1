#include<stdio.h>
int main()
{
  int digit,i=0,remainder;
  int sum=0;
  scanf("%d",&digit);
  while(i < digit)
  {
    remainder=digit%10;
    digit=digit/10;
    i++;
  }
  printf("%d",i);
  return 0;
 }
    
