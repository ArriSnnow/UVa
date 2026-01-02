//
//  main.cpp
//  UVa 10260 - Soundex
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/26.
//
#include <iostream> // For input/output operations
#include <string>   // For using the string class

using namespace std;

int main()
{
    // Mapping of Soundex codes to letters grouped by digits 1-6
    string soundex[6] = {   "BFPV",
                            "CGJKQSXZ",
                            "DT",
                            "L",
                            "MN",
                            "R" };
    
    // Size of the soundex array for looping through groups
    size_t soundexSize = sizeof(soundex) / sizeof(soundex[0]);
    
    string word;
    // Read input words one at a time until the input stream ends.
    while (cin >> word)
    {
        string code;    // To store the resulting soundex code
        size_t prevIndex = soundexSize; // Track the last group index to avoid repeating the same digit
        
        // Loop through each character in the input word.
        for (size_t i = 0; i < word.size(); ++i)
        {
            size_t j = 0;
            // Check which Soundex group the current character belongs to.
            for ( ; j < soundexSize; ++j)
            {
                if (soundex[j].find(word[i]) != string::npos)
                {
                    if ( j != prevIndex )
                        code.push_back(static_cast<char>('0' + j + 1 ));
                    prevIndex = j;
                    break;
                }
            }
            if ( j == soundexSize )
                prevIndex = soundexSize;
        }
        
        cout << code << endl;
    }
    return 0;
}
