//
//  main.cpp
//  UVa10079 - Pizza Cutting
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/12.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    while (cin >> n && n >= 0) {
        long long result = (n * (n+1)/2) + 1;
        
        cout << result << "\n";
    }
    
    return 0;
}
