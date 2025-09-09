#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    
    for(int i=0; i<n; i++){
        int num; 
        cin >> num; 
        if(num == 1){
            cout << "HARD\n"; 
            return 0; 
        }
    }
    cout << "EASY\n"; 
    return 0; 
}
