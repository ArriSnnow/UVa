//
//  main.cpp
//  Uva 12571 - Brother & Sisters
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/16.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Array to store the input elements
int a[100005];

// Memorization array to store precomputed results for certain queries
int memo[240];

// A helper function to return the maximum of two numbers
int max(int p, int q)
{
    if (p > q)
        return p;
    return q;
}

int main()
{
    int t, i, n, x, mx, q;
    
    // Read the number of test cases
    scanf("%d", &t);
    
    while (t--)
    {
        // Loop through each test case
        memset(memo, -1, sizeof memo);
        
        // Read the number of elements (n) and number of queries (q)
        scanf("%d %d", &n, &q);
        
        // Read the n elements into the array 'a'
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        while (q--)
        {
            // Loop through each query
            // Read the query value x
            scanf("%d", &x);
            
            // If the result for this x hasn't been computed before
            if (memo[x] == -1)
            {
                mx = 0;
                
                // For each element in the array 'a', find the maximum of (a[i] & x)
                if (x != 0)
                {
                    for (i = 0; i < n; i++)
                        mx = max(mx, (a[i] & x));
                }
                
                // Store the result in the memo array for future reference
                memo[x] = mx;
                
                // Output the result for this query
                printf("%d\n", memo[x]);
            }
            else
            {
                // If the result for x was already computed, just print it
                printf("%d\n", memo[x]);
            }
        }
    }
    
    return 0;
}
