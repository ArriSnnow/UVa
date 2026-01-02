//
//  main.cpp
//  UVa 12356 - Army Buddies
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/14.
//

#include <iostream>
#include <utility> // Provide utilities for working with pairs, tuples, and other generic functions like std::move

using namespace std;

// Array to keep track of the left and right neighbors for each element
int toLeft[100000];
int toRight[100000];

// Constant to represent the end of the list (no neighbor)
const int End = -1;

// Function that updates the links between neighbors when an element (or range) is removed
pair<int, int> Update(int firstDead, int lastDead)
{
    // Get the leftmost element that remains (before 'firstDead')
    int leftMost = toLeft[firstDead];
    // Get the rigthmost element that remains (after 'lastDead')
    int rightMost = toRight[lastDead];
    
    // If leftMost is valid (not the end), update its right neighbor
    if (leftMost != End)
    {
        toRight[leftMost] = rightMost;
    }
    // If rightMost is valid (not the end), update its left neighbor
    if (rightMost != End)
    {
        toLeft[rightMost] = leftMost;
    }
    
    // Return the new neighbors as a pair (leftMost, rightMost)
    return make_pair(leftMost, rightMost);
}

int main()
{
    int N, B;
    // Read the number of elements (N) and the number of operations (B)
    while (cin >> N >> B, N)
    {
        // Initialize the left and right arrays for the list
        // Each element initially points to its left and right neighbors
        for (int i = 0; i < N; ++i)
        {
            toLeft[i] = i - 1;  // Element i points to the element on the left (i - 1)
            toRight[i] = i + 1; // Element i points to the element on the right (i + 1)
        }
        
        // Set boundaries for the leftmost and rightmost elements
        toLeft[0] = toRight[N - 1] = End;   // The first and last elements have no neighbors
        
        // Perform B operations where each operation removes a range of elements
        while (B--)
        {
            int l, r;
            // Read the range of elements to remove (l or r)
            cin >> l >> r;
            // Convert to zero-based indexing (adjust by substracting 1)
            --l; --r;
            
            // Update the neighbors for the elements around the removed range
            pair<int, int> new_ends = Update(l, r);
            
            // If the leftmost element is at the boundary (End), print "*"
            if (new_ends.first ==  End) cout << "* ";
            else cout << (new_ends.first + 1) << " "; // Print the 1-based index of the leftmost neighbor
                
            // If the rightmost element is at the boundary (End), print "*"
            if (new_ends.second == End) cout << "*\n";
            else cout << (new_ends.second + 1) << "\n"; // Print the 1-based index of the rightmost neighbor

        }
        
        // Print a separator for each test case
        cout << "-\n";
    }
}
