#include<iostream>
using namespace std;

char* encrypt(int n,char* string,int shift)
{
	int i;
	char* output=new char[n];

	shift=shift%26;
	for(i=0;i<n;i++)
	{
		if(!((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122)))
			output[i]=string[i];
		else
		{
			if(((string[i]>=65 && string[i]<=90 && string[i]+shift>90) || (string[i]>=97 && string[i]<=122 && string[i]+shift>122)))
				output[i]=string[i]+shift-26;
			else
				output[i]=string[i]+shift;
		}
	}
	output[i]='\0';

	return output;
}

int main()
{
	int shift,n;
	
	cin>>n;
	
	char* input=new char[n];
	cin>>input;
	
	cin>>shift;
	
	char*output=new char[n];
	output=encrypt(n,input,shift);

	cout<<output;

	return 0;
}

