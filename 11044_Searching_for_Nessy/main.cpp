//
//  main.cpp
//  UVA11044 - Searching for Nessy
//
//  Created by Arridson Biraphath VERNEUS on 2025/11/27.
//

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    while (n--) {
        int R, C;
        cin >> R >> C;
        cout << (R/3) * (C/3) << "\n";
    }
    return EXIT_SUCCESS;
}
