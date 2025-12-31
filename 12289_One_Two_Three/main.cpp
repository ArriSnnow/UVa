//
//  main.cpp
//  UVA12289 One-Two-Three
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/2.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--) {
        string s;
        cin >> s;
        
        if (s.length() == 5) {
            cout << 3 << "\n";
        }
        else {
            int match = 0;
            
            if (s[0] == 'o') match++;
            if (s[1] == 'n') match++;
            if (s[2] == 'e') match++;
            
            if (match >= 2) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    
    return 0;
}
