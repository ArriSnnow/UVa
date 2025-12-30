//
//  main.cpp
//  UVa10633 - Rare Easy Problem
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/17.
//

#include <iostream>

using namespace std;

int main() {
    unsigned long long x;
    
    while(cin >> x && x != 0) {
        
        bool first = true;
        
        for (int k = 9; k >= 0; k--) {
            
            if ((x - k) % 9 == 0) {
                unsigned long long M = (x - k) / 9;
                unsigned long long N = 10 * M + k;
                
                if (!first) cout << " ";
                
                
                cout << N ;
                
                first = false;
            }
        }
        cout << "\n";
    }
    
    return 0;
}
