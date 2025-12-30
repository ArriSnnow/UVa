//
//  main.cpp
//  UVA10107 - Median
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/2.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int n;
    
    while (cin >> n) {
        v.push_back(n);
        
        sort(v.begin(), v.end());
        
        int size = v.size();
        
        if (size % 2 == 1)
            cout << v[size/2] << "\n";
        else
            cout << (v[size/2] + v[size/2 - 1])/2 << "\n";
    }
    
    return 0;
}
