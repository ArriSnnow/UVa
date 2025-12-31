//
//  main.cpp
//  UVa 118 Mutant Flatworld Explorers
//
//  Created by Arridson Biraphath VERNEUS on 2025/4/17.
//
#include <iostream>
#include <set>
#include <string>
#include <utility>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int maxX, maxY;
    if (!(cin >> maxX >> maxY))
        return 0;

    set<pair<int,int>> scent;

    int x, y;
    char dir;
    string inst;
    // Read each robot: initial x, y, dir, then its instruction string
    while (cin >> x >> y >> dir >> inst) {
        bool lost = false;

        for (char cmd : inst) {
            if (lost) break;

            if (cmd == 'L') {
                // turn left
                if      (dir == 'N') dir = 'W';
                else if (dir == 'W') dir = 'S';
                else if (dir == 'S') dir = 'E';
                else /* E */         dir = 'N';
            }
            else if (cmd == 'R') {
                // turn right
                if      (dir == 'N') dir = 'E';
                else if (dir == 'E') dir = 'S';
                else if (dir == 'S') dir = 'W';
                else /* W */         dir = 'N';
            }
            else if (cmd == 'F') {
                // compute next position
                int nx = x, ny = y;
                if      (dir == 'N') ++ny;
                else if (dir == 'S') --ny;
                else if (dir == 'E') ++nx;
                else /* W */         --nx;

                // if off-grid
                if (nx < 0 || nx > maxX || ny < 0 || ny > maxY) {
                    // no scent here? robot is lost and leaves a scent
                    if (!scent.count({x, y})) {
                        scent.insert({x, y});
                        lost = true;
                    }
                    // otherwise ignore this F
                } else {
                    // valid move
                    x = nx;
                    y = ny;
                }
            }
        }

        // output result
        cout << x << " " << y << " " << dir;
        if (lost) cout << " LOST";
        cout << "\n";
    }

    return 0;
}
