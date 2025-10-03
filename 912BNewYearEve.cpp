#include <bits/stdc++.h>
using namespace std; 

int main() {
    long long n, k; 
    cin >> n >> k; 
    
    if(k == 1) cout << n << "\n"; 
    else { 
        long long result = 1; 
        while(result <= n) result <<= 1; 
        cout << (result - 1) << "\n"; 
    }
    return 0; 
}
