#include<iostream>
#include<string>

using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a;
    int max=0;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        if(b>max)
        {
            max = b;
        }
    }
    cout<<max<<endl;
}
return 0;
}
