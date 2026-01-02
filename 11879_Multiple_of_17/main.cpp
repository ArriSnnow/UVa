//
//  main.cpp
//  UVa 11879 -Multiple of 17
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/20.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char str[102]; // Array to hold the input number as a string (can handle up to 101 digits + null terminator).
    
    while (fgets(str, sizeof(str), stdin))
    {   //  Safely read input as a string from stdin
        
        // Remove trailing newline character added by fgets, if present.
        str[strcspn(str, "\n")] = '\0';
        // Read input as a string until EOF or if "0" is encountered as input
        if (str[0] == '0' && str[1] == '\0') // Check if input is "0", the termination condition
            break;
        
        int tmp = 0, i; // Variable 'tmp' holds the remainder, 'i' is the loop counter.
        
        for (i = 0; str[i]; i++)
        { // Loop through each character of the input string
            tmp = tmp * 10 + str[i] - '0'; // Convert the character to a digit and include it in 'tmp'.
            tmp %= 17;
        }
        
        printf("%d\n", tmp == 0); // Print 1 if divisible by 17, else print 0.
    }
    return 0; //Program ends.
}
