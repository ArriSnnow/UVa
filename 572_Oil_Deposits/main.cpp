//
//  main.cpp
//  UVa 572 - Oil Deposits
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/19.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int m, n;
vector<string> grid;

void dfs (int r, int c) {
    if (r < 0 || r >= m || c < 0 || c >= n) return;
    
    if (grid[r][c] != '@') return;
    
    grid[r][c] = '*';
    
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            if (dr != 0 || dc != 0)
                dfs(r + dr, c + dc);
        }
    }
}

int main() {
    
    
    while (cin >> m >> n && m != 0 && n != 0) {
        grid.assign(m, "");
        
        for (int i  = 0; i < m; i++) {
            cin >> grid[i];
        }
        
        int count = 0;
        
        for (int i  = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '@')
                {
                    count++;
                    dfs(i, j);
                }
            }
        }
        
        cout << count << "\n";
    }
    return 0;
}
