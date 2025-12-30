//
//  main.cpp
//  UVa 674 - Coin Change
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/27.
//

#include <iostream>

using namespace std;

long long ways[7500] = {0};
int coins[] = {1, 5, 10, 25, 50};

void precompute() {
    ways[0] = 1;
    
    for (int i = 0; i < 5; i++) {
        int coin = coins[i];
        
        for (int j = coin; j < 7500; j++) {
            ways[j] += ways[j - coin];
        }
    }
}

int main() {
    int n;
    precompute();
    
    while (cin >> n) {
        
        cout << ways[n] << "\n";
    }
    return 0;
}
