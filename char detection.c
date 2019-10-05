#include<stdio.h>
#include<stdlib.h>
int main()
{
char x;
scanf("%c",&x);
if(x>='0'&& x<='9')
   {
//int a=(int)x;
//printf("value of a%d\n",a);
//printf("value of x%c\n",x);
   printf("the enter character is a digit\n");
   if((x%2=='0')|| (x%5=='0'))
      {

     printf("divisible by either 2 or 5%d\n",x);
      }
    }
else if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
   {
   printf("the entered character is an alphabet\n");
   if(x>='a'&&x<='z')
       {
      printf("character is in lower case");
   	if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
      		printf("character is lower case vowel");
       }
   if(x>='A'&&x<='Z')
      {
       printf("character is in upper case");
       if((x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'))
           printf("character is upper case vowel");
      }
   }
return 0;
}
