//
//  main.cpp
//  UVA11727 - Cost Cutting
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/3.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        vector<int> employees(3);
        
        for (int i = 0; i < 3; i++) {
            cin >> employees[i];
        }
        
        sort(employees.begin(), employees.end());
        
        cout << "Case " << i << ": " << employees[1] << "\n";
        
    }
    
    return 0;
}
