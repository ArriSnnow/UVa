//
//  main.cpp
//  UVA11498 - Division of Nlogonia
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/6.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int r, c;
        cin >> r >> c;
        
        while (n--) {
            int x, y;
            cin >> x >> y;
            
            if ( x == r || y == c) cout << "divisa" << "\n";
            else if ( x < r && y > c) cout << "NO" << "\n";
            else if ( x > r && y > c) cout << "NE" << "\n";
            else if ( x < r && y < c) cout << "SO" << "\n";
            else cout << "SE" << "\n";
        }
    }
    return 0;
}
