//
//  main.cpp
//  Uva 13181 - Sleeping in the hostels
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/16.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <tuple>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void)
{
    string input;
    
    // Continually read inout lines
    while ( getline(cin, input))
    {
        vector<int> len; // To store the length of dot sequrnces
        int counter = 0; // Counter to track the length of consecutive dots
        int start = 0;; // Marks the start of the current sequence
        
        // Loop through each character in the input string
        for (int i = 0; i < input.size(); i++)
        {
            // If a dot is encountered, increase the counter
            if (input[i] == '.')
            {
                counter++;
            }
            else
            {
                // If a non-dot character is found and we're in a sequence of dots
                if (start == 0)
                {
                    len.push_back(counter); // Store the length of the previous dot sequence
                }
                else
                {
                    if (counter > 0)
                    {
                        len.push_back(counter); // Store the length of the dot sequence
                    }
                }
                counter = 0;    // Reset the counter for the next sequence
                start = i;      // Update the start index for the next sequence
            }
        }
        len.push_back(counter); // Push the length of the last dot sequence
        
        // Calculate the maximum length of consecutive dots, considering special cases
        int result = max(0, max(len[0] - 1, len[len.size() - 1] - 1));
        
        // for the middle sequence, find the maximum possible length of dots
        for (int i = 1; i < len.size() - 1; i++)
        {
            result = max(result, (len[i] - 1) / 2); // Use (len[i] - 1) / 2 to check the middle part
        }
        
        // Output the result, which is the maximum length of consecutive dots
        cout << result << endl;
    }
    
    return 0;
}
