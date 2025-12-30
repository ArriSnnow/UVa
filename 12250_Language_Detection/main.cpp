//
//  main.cpp
//  12250 - Language Detection
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/16.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int num = 1;
    
    while(getline(cin, s)) {
        if (s == "#") break;
        
        string ans = "UNKNOWN";
        
        if (s == "HELLO") ans = "ENGLISH";
        else if (s == "HOLA") ans = "SPANISH";
        else if (s == "HALLO") ans = "GERMAN";
        else if (s == "BONJOUR") ans = "FRENCH";
        else if (s == "CIAO") ans = "ITALIAN";
        else if (s == "ZDRAVSTVUJTE") ans = "RUSSIAN";
        
        cout << "Case " << num++ << ": " << ans << "\n";
    }
    return 0;
}
