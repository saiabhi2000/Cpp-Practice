#include<iostream>
#include<string>

using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int a;
    cin>>a;
    int longest = 0;
    int index;
    string b[a];
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
        if(b[i].length()>longest)
        {
            longest = b[i].length();
            index = i;
        }
    }
    cout<<b[index]<<endl;
}
return 0;
}
