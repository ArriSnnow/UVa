//
//  main.cpp
//  UVa 01368 - DNA consensus String
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/27.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

pair <string, int > findConsensusAndError(int m, int n, const vector <string>& sequences)
{
    string consensus = "";
    int consensusError = 0;
    
    for (int i = 0; i < n; ++i)
    {
        map <char, int> count;
        count['A'] = 0;
        count['C'] = 0;
        count['G'] = 0;
        count['T'] = 0;
        
        for (int j = 0; j < m; ++j)
        {
            count[sequences[j][i]]++;
        }
        
        char bestChar = 'A';
        int maxFreq = 0;
        
        for (const auto& [nucleotide, freq ] : count)
        {
            if ( freq > maxFreq || ( freq == maxFreq && nucleotide < bestChar))
            {
                maxFreq = freq;
                bestChar = nucleotide;
            }
        }
        
        consensus += bestChar;
        consensusError += (m - maxFreq);
    }
    
    return {consensus, consensusError};
}

int main()
{
    int T;
    int m, n;
    
    cin >> T;
    
    for (int i = 0; i < T; ++T)
    {
        cin >> m >> n;
        
        vector<string> sequences(m);
        
        for (int i = 0; i < m; ++i)
        {
            cin >> sequences[i];
        }
        
        auto [consensus, error] = findConsensusAndError(m, n, sequences);
        
        cout << consensus << endl;
        cout << error << endl;
    }
    return 0;
}
