//
//  main.cpp
//  UVa 01203 - Argus
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/25.
//
#include <cstdio>
#include <queue>
#include <utility> // For std:pair
#include <cstring> // For strcmp
#include <iostream>
#include <functional> // For greater comparator in priority queue

using namespace std;

int main()
{
    char s[20]; // To store commands
    int qnum, p, n; // queury number, period, number of outputs required
    
    // int Priority queue to store queries
    // Pair structure: {next_execution_time, {query_number, period}}
    priority_queue<pair<int, pair<int, int>>,
                    vector<pair<int, pair<int, int>>>,
                    greater<pair<int, pair<int, int>>>> pq;
    
    // Input regustration commands until '#' is encountered
    while (scanf("%s", s), strcmp("#", s))
    {
        // Read query number and period
        scanf("%d %d", &qnum, &p);
        // Push the query into the priority queue with its first execution time
        pq.push(pair<int, pair<int, int>>(p, pair<int, int>(qnum, p)));
    }
    
    // Number of outputs required
    scanf("%d", &n);
    
    // Retrieve and print the first 'n' queries to return results
    while (n--)
    {
        pair<int, pair<int, int>> pr = pq.top(); // Get the query with the earliest execution time
        pq.pop(); // Remove it from the queue
        
        printf("%d\n", pr.second.first); // Output the query number
        
        // Update the execution time and reinsert the query into the queue
        pr.first += pr.second.second;
        pq.push(pr);
    }
    
    return 0;
}
