//
//  main.cpp
//  UVA11172 - Relational Operator
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/6.
//

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    while(n--) {
        long long a, b;
        
        cin >> a >> b;
        if (a > b) cout << ">" << "\n";
        else if (a < b) cout << "<" << "\n";
        else cout << "=" << "\n";
    }
    return EXIT_SUCCESS;
}
