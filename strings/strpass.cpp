#include<iostream>
#include<cstring>
using namespace std;

int check_strength(char string[100])
{
	int req,lc=0,uc=0,sc=0,nc=0,len=strlen(string),count=0;;

	if(len<6)
	{
		req=6-len;
	}

	for(int i=0;string[i]!='\0';i++)
	{
		if(string[i]>=97 && string[i]<=122)
			lc++;
		else if(string[i]>=65 && string[i]<=90)
			uc++;
		else if(string[i]=='!' || string[i]=='@' || string[i]=='#' || string[i]=='$' || string[i]=='%' || string[i]=='^' || string[i]=='&' || string[i]=='*' || string[i]=='(' || string[i]==')' || string[i]=='-' || string[i]=='+')
			sc++;
		else if(string[i]>=48 && string[i]<=57)
			nc++;
	}

	if(lc==0)
		count++;
	if(uc==0)
		count++;
	if(sc==0)
		count++;
	if(nc==0)
		count++;

	if((len+count)<6)
	{
		while((len+count)<6)
			count++;
	}

	return count;
}

int main()
{
	int n;
	char password[100];
	cin>>n;
	cin>>password;

	int result=check_strength(password);
	cout<<result;

	return 0;
}

