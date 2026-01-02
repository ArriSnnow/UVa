//
//  main.cpp
//  UVa 11222 - Only I did it
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/18.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int t, Case = 0;
    int i, j;
    // Read the number of test cases
    scanf("%d", &t);
    
    // Process each test case
    while(t--)
    {
        printf("Case #%d:\n", ++Case);
        
        int A[3], B[3][1000]; // A: holds the count of problems solved by each friend
        int mark[10001] = {}; // mark: tracks how many times each problem is solved
        
        // Read the problems solved by each of the 3 friends
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &A[i]); // Read the number of problems solved by friend i
            for(j = 0; j < A[i]; j++)
            {
                scanf("%d", &B[i][j]); // Read each problem solved by friend i
                mark[B[i][j]]++; // Mark the problem as solved
            }
            // Sort the problems for friend i (though it's only used in the final output)
            sort(B[i], B[i] + A[i]);
        }
        
        int max = 0, solve[3];
        
        // Calculate how many problems each friend solved exclusively (i.e., not solved by the others
        for (i = 0; i < 3; i++)
        {
            int tmp = 0;
            for (j = 0; j < A[i]; j++)
            {
                // A problem is considered solved exclusively if it was solved exactly once (only by the current friend)
                if (mark[B[i][j]] == 1)
                {
                    tmp++;
                }
            }
            if (tmp > max)
            {
                max = tmp; // Update the max number of unique problems solved
            }
            solve[i] = tmp; // Store the count of exclusive problems for each friend
        }
        
        // Output the friend(s) with the most exclusive problems solved
        for(i = 0; i < 3; i++)
        {
            if (solve[i] == max)
            {
                // Print the friend's number (1-based index) and the count of exclusive problems
                printf("%d %d", i+1, solve[i]);
                
                // Print the list of exclusive problems solved by this friend
                for(j = 0; j < A[i]; j++)
                {
                    if(mark[B[i][j]] == 1)
                    {   // Only print problems that were solved exclusively by this friend
                        printf(" %d", B[i][j]);
                    }
                }
                puts(""); // Move to the next line for the next output
            }
        }
    }
    return 0;
}
