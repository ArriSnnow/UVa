//
//  main.cpp
//  UVa 12150 - Pole Position
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/14.
//

#include <stdio.h>

int main()
{
    int n;
    // Loop until we get a valid input and n is non-zero
    while(scanf("%d", &n) == 1 && n)
    {
        int rank[10005] = {}, err = 0;
        int x, v, i;
        
        // Process each input pair (x, v) for n entries
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &v);
            
            // Check if the calculated index (i+v) is out of bounds (less than 0 or greater than n-1)
            if(i+v < 0)     err = 1;
            if(i+v >= n)    err = 1;
            
            // Check if the position i+v has already been occupied by another value
            if(!err && rank[i+v])   err = 1;
            
            // If any error condition was triggered, skip this iteration
            if(err) continue;
            rank[i+v] = x;
        }
        
        // If any error occurred, print -1 and continue with the next test case
        if(err)
        {
            puts("-1");
            continue;
        }
        
        // Print the result, i.e., the rank array
        printf("%d", rank[0]);
        for(i = 1; i < n; i++)
            printf(" %d", rank[i]);
        puts("");
    }
    return 0;
}
