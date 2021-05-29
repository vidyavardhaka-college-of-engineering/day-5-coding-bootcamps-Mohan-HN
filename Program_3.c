//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],temp;
  int i=0,j=0;
  printf("Enter the string : ");
	scanf("%s", str);
  j=strlen(str)-1;
  while(i<j)
  {
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  i++;
  j--;
  }
  if(strcmp(str[i]==str[j]))
   printf("yes");
  else
   printf("No");
	//Write your code here
	
	return 0;
}
