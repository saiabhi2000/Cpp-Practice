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
    int count = 1,b[a];
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    for(int j=0;j<a;j++)
    {
        count = count * b[j];
    }
    cout<<count<<endl;
}
return 0;

}