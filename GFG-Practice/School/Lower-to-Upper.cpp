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
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
    }
    cout<<s<<endl;
    
}
return 0;
}