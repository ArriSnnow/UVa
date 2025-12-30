//
//  main.cpp
//  UVA382 - Perfection
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/16.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    
    cout << "PERFECTION OUTPUT" << "\n";
    
    while(cin >> n && n != 0) {
        
        
        int total = 0;
        
        for (int i = 1; i <=  n/2; i++) {
            if (n % i == 0)
            total += i;
        }
        
        
        if (total < n)
            cout << setw(5) << n <<"  DEFICIENT" << "\n";
        else if (total > n)
            cout << setw(5) << n <<"  ABUNDANT" << "\n";
        else
            cout << setw(5) << n <<"  PERFECT" << "\n";
    }
    cout << "END OF OUTPUT" << "\n";
    return 0;
}
