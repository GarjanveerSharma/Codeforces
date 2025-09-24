#include<bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    
    string goodmap; 
    cin >> goodmap; 
    
    int k;
    cin >> k;
    
    int n = s.size(); 
    set<string> substring; 
    
    for(int i=0; i<n; i++){
        int badcount = 0; 
        string sub = "";
        for(int j=i; j<n; j++){
            sub += s[j]; 
            
            if(goodmap[s[j] - 'a'] == 0){
                badcount++; 
            }
            
            if(badcount > k) break;
            
            substring.insert(sub); 
        }
    }
    cout << substring.size() << "\n"; 
    return 0; 
}
