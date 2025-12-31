//
//  main.cpp
//  UVa 10415 Eb Alto Saxophone Player
//
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); //
    
    map<char, vector<int>> fingerMap;
    fingerMap['c'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    fingerMap['d'] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    fingerMap['e'] = {0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    fingerMap['f'] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    fingerMap['g'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    fingerMap['a'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['b'] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['C'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['D'] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 0}; 
    fingerMap['E'] = {1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    fingerMap['F'] = {1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    fingerMap['G'] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    fingerMap['A'] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['B'] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    
    while (t--) {
        string song;
        getline(cin, song);
        
        vector<int> fingerCount(10, 0);
        vector<int> currentState(10, 0); // Current state ( 0 = released, 1 = preseed)
        
        for ( char note : song ) {
            if (fingerMap.find(note) != fingerMap.end()) {
                vector<int> targetState = fingerMap[note];
                
                // For each finger, check if we need to press it
                for (int i = 0; i < 10; i++) {
                    if (targetState[i] == 1 && currentState[i] == 0) {
                        // Need to press this finger (it wasn't pressed before)
                        fingerCount[i]++;
                        currentState[i] = 1;
                    }
                    else if (targetState[i] == 0) {
                        // Release this finger
                        currentState[i] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < 10; i++) {
            if (i > 0 ) cout << " ";
            cout << fingerCount[i];
        }
        cout << "\n";
    }
    return 0;
}
