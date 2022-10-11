#include<stdio.h>

int main ()
{
	char c;
	printf("enter any charctor:");
	scanf("%c",&c);
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("your charactoris vowel");
		
	}
	else
	{
		printf("your charactois consonant");
	}
	return 0;
}