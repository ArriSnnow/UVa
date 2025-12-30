//
//  main.cpp
//  UVA10300 - Ecological Premium
//
//  Created by Arridson Biraphath VERNEUS on 2025/11/27.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--) {
        int f;
        cin >> f;
        int result = 0;
        
        while (f--) {
            int s, a, e;
            
            cin >> s >> a >> e;
            result += s*e;
        }
        
        cout << result << "\n";
    }
    return 0;
}
