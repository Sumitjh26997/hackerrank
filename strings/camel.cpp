#include<iostream>
using namespace std;

int camelCase(char* string)
{
    int count=1;
    //int flag=0;

    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>=65 && string[i]<=90)
            count++;
    }

    return count++;
}

int main()
{
    char string[100000];
    cin>>string;
    
    int result=camelCase(string);
    cout<<result;
    
    return 0;
}