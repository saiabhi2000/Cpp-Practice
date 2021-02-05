#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int sum=0;
        fl(i,0,4){
            cin>>n;
            sum = sum + n;
        }
        if(sum == 0)
            cout << "Beginner" << endl;
        else if(sum == 1)
            cout << "Junior Developer" <<endl;
        else if(sum == 2)
            cout << "Middle Developer" <<endl;
        else if(sum == 3)
            cout<<"Senior Developer"<<endl;
        else if(sum == 4)
            cout<<"Hacker"<<endl;
        else if(sum == 5)
            cout<<"Jeff Dean"<<endl;
    }
    return 0;
}