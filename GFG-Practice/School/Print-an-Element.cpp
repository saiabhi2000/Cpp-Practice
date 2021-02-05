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
    cin>>b;
    int d[a];
    for(int i=0;i<a;i++)
    {
        cin>>d[i];
    }
    cout<<d[b]<<endl;
}
return 0;
}