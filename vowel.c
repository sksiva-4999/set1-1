#include<stdio.h>
int main()
{
  char c;
  printf("Enter a character\n");
  scanf("%c",c);
  if(c =='A'-'Z' || c=='a'-'z')
  {
    if(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c == 'u')
    {
      printf("given character is vowel");
    }
    else
    {
      printf("Given character is consonant");
    }
  }
  else
  {
    printf("Invalid Input");
  }
  
}
