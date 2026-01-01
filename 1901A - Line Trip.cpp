#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while(t--){
        long long n , x; 
        cin >> n >> x; 

        vector<long long> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i]; 
        }
        
        long long maxi = p[0]; 
        
        for(int i = 1; i < n; i++){
            maxi = max(maxi, p[i] - p[i-1]); 
        }

        maxi = max(maxi , 2 * (x - p[n-1]));

        cout << maxi << "\n"; 
    }
    return 0; 
}
