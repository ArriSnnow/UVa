//
//  main.cpp
//  Uva 11933 - Splitting Numbers
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/16.
//

#include <cstdio>

int main()
{
    unsigned int num;
    
    // Read a number until we encounter 0
    while (scanf("%u", &num), num)
    {
        unsigned int a = 0, b = 0; // Variables to hold the two resulting sums
        
        bool addToA = true; // Flag to decide whether to add to a or b
        unsigned int toAdd = 1; // The value to be added (it starts with 1, and doubles with each bit processed)
        
        // Process each bit of the number
        while (num)
        {
            if (num & 1)
            {
                // Check if the current least significant bit is 1
                if (addToA)
                {
                    a += toAdd; // If the flag is true, add to 'a'
                }
                else
                {
                    b += toAdd; // If the flag is false, add to 'b'
                }
                
                // Toggle the flag to alternate between adding to 'a' and 'b'
                addToA = !addToA;
            }
            
            toAdd *= 2; // Double tha value toAdd (this ensures the next bit correspnds to the correct power of 2)
            num /= 2;   // Divide num by 2 to shift the next bit to the least significant position
        }
        
        // Print the results for 'a' and 'b'
        printf("%u %u\n", a, b);
    }
}
