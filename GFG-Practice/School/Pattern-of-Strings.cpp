#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int test;
    cin>>test;
    cin.ignore();
    while(test--)
    {
       string str;
       
       getline(cin,str);
       int len = str.length();
       
       for(int i=0; i<len; i++)
       {
         for(int j=0; j<len-i; j++)
         {   
             cout<<str[j];
                          
         }
         
         cout<<endl;
       }    
    }
	return 0;
}