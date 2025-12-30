//
//  main.cpp
//  UVa673 - Parentheses Balance
//
//  Created by Arridson Biraphath VERNEUS on 2025/12/1.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    
    while(n--) {
        string s;
        getline(cin, s);
        
        stack<char> st;
        bool ok = true;
        
        for (char c : s) {
            if (c == '(' || c == '[') {
                st.push(c);
            } else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    ok = false; break;
                }
                st.pop();
            } else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    ok = false; break;
                }
                st.pop();
            }
        }
        
        if (!st.empty()) ok = false;
        
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}
