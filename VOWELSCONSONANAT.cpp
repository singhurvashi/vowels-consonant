#include<iostream>
using namespace std;
int main()
{
	char ch;
	int isLowercaseVowel,isUppercaseVowel;
	cout<<" Enter alphabet";
	cin>>ch;
	isLowercaseVowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	isUppercaseVowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(isLowercaseVowel  || isUppercaseVowel)
	{
		cout<<ch <<" is a vowels";
		
	}
	else
	{
		cout<<ch<<" is a consonant";
	}
}
