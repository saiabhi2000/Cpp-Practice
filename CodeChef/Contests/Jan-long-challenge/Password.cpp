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
        string s;
        cin>>s;
        int upper = 0,lower = 0,special = 0,number = 0;
	    int l = s.length();
	    if(s.length()<10 )
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    if((s[0] >= 'a' && s[0] <= 'z') ||(s[l-1] >= 'a' && s[l-1] <= 'z') )
	        lower++;
	    
	    for (int i = 1; i < l-1; i++) 
        { 
            if (s[i] >= 'A' && s[i] <= 'Z') 
                upper++; 
            else if (s[i] >= 'a' && s[i] <= 'z') 
                lower++; 
            else if (s[i]>= '0' && s[i]<= '9') 
                number++; 
            else if(s[i]>= '#' || s[i]<= '@' ||s[i]>= '?' || s[i]<= '%' ||s[i]>= '&' )
                special++; 
        }
	    if(upper && lower && number && special)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	        
	}
	return 0;
}

    