//
//  main.cpp
//  UVa 00417 - Word Index
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/28.
//
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate all combinations of letters and assign positions
void generateWordPosition(map<string, int>& wordPosition)
{
    int position = 1;
    
    // Generate combinations for word lengths from 1 to 5
    for (int length = 1; length <= 5; ++length)
    {
        vector<char> letters;
        
        // Fill with first 'length' letters (used for combination generation)
        for (char c = 'a'; c <= 'z'; ++c)
        {
            letters.push_back(c);
        }
        
        // Generate combinations of 'length'
        vector<bool> selector(letters.size(), false);
        fill(selector.begin(), selector.begin() + length, true );
        
        // Use 'prev_permutation' to generate all combinations of the given length
        do
        {
            string word;
            for (size_t i = 0; i < letters.size(); ++i)
            {
                if (selector[i])
                {
                    word += letters[i];
                }
            }
            
            // Assign position and increment
            wordPosition[word] = position++;
        }
        while (prev_permutation(selector.begin(), selector.end())); // Reverse iterate through all valid combinations
    }
}
