//
//  main.cpp
//  UVA11192 - Group Reverse
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/1.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int G;
    string s;
    
    while(cin >> G && G > 0){
        cin >> s;
        
        int k = s.length() / G;
        
        for (int i = 0; i < s.length(); i += k) {
            reverse(s.begin() + i, s.begin() + i + k);
        }
        cout << s << endl;
    }
    return 0;
}
