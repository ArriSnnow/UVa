//
//  main.cpp
//  UVa 10887 - Concatenation of Languages
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/27.
//
#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t)
    {
        int M, N;
        cin >> M >> N;
        
        vector<string> A(M);
        vector<string> B(N);
        
        for (int i = 0; i < M; ++i)
        {
            cin >> A[i];
        }
        
        for (int i = 0; i < N; ++i)
        {
            cin >> B[i];
        }
        
        unordered_set<string> uniqueStrings;
        
        for (const auto& a : A)
        {
            for (const auto& b : B)
            {
                uniqueStrings.insert(a + b);
            }
        }
        
        cout << "Case " << t << ": " << uniqueStrings.size() << endl;
    }
    
    return 0;
}
