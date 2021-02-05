#include<iostream>
#include<string>

using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int i;
    if(s[0]<=90 && s[0]>=65)
    {
        for(i=0;i<s.size();i++)
        {
            cout<<(char)toupper(s[i]);
        }
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            cout<<(char)tolower(s[i]);
        }
    }
    cout<<endl;
}
return 0;
}