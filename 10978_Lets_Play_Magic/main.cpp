//
//  main.cpp
//  UVa 10978 - Let's Play Magic
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/18.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n; // Declare a variable to store the number of pairs
    
    // Loop to continuously take input until we get a value of 0 for n
    while(scanf("%d", &n) == 1 && n)
    {
        // Create an array of strings with size n to store the results
        string ret[n];
        string s, foo; // Declare strings to store each pair of components
        int i, idx = 0, len; // Declare indices and length variable
        
        // Loop to process each of the n input pairs
        for (i = 0; i < n; i++)
        {
            // Read the two strings into
            cin >> s >> foo;
            
            len = foo.length(); // Get the length of the second string (foo)
            
            // Loop to handle the assignment of strings to ret array
            while(len)
            {
                // if the current index position in ret is empty, reduce the length
                if(ret[idx] == "")
                    len--;
                
                // move to the next index
                idx++;
                
                // If the index exceeds n, reset it to 0
                if(idx >= n)
                    idx = 0;
            }
            
            // After determining the correct index, assign the string s to that index
            ret[(idx - 1 + n) % n] = s;
        }
        
        // Output the final result: the strings in the ret array
        for(i = 0; i < n; i++)
        {
            // Print a space between elements except before the first one
            if(i)
                putchar(' ');
            
            cout << ret[i]; // Print the string at index i
        }
        
        puts(""); // Print a newline after result
    }
    
    return 0; // Return 0 to indicate successful completion
}
