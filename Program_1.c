//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[10];
  int i=0,no=0;
  printf("Enter the string: ");
	scanf("%s", str);
	//Write your code here
  while(str[i++]!='\0')
  {
    if(str[i]=='a'||
      str[i]=='e'||
      str[i]=='i'||
      str[i]=='o'||
      str[i]=='u'||
      str[i]=='\0')
      no++;
  }
  printf("No of vowels = %d",no);
	return 0;
}
