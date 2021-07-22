#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void consonants(char *str)
{
    //Type your code here 
    int len = strlen(str);

    for(int i = 0; i<len; i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            cout<<str[i];
        }
    }
}

int main()
{
    char str[100];
    scanf("%s",str);
    consonants(str);
    return 0;
}