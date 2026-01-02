//
//  main.cpp
//  UVa 00514 - Rails
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/20.
//

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, target[1000]; // 'n' is the number of coaches, 'target' stores the desired order of coaches
    int i;
    
    while (true)
    {
        cin >> n; // Read the number of coaches.
        if (n == 0) // If input is 0, terminate the program
            break;
        
        while (true) {
            cin >> target[0]; // Read the first value of the target permutation.
            if (target[0] == 0)
            {   // If the first value is 0, break out of the inner loop.
                cout << endl;
                break;
            }
            
            // Read the rest of the target permutation.
            for (i = 1; i < n; i++)
            {
                cin >> target[i];
            }
            
            int currCoach = 1, targetIndex = 0; // tracks the incoming coach, tracks the target order.
            stack<int> station; // Hold the coaches
            
            while (currCoach <= n )
            {   // process all incoming coaches from 1 to n
                station.push(currCoach); // Push the current coach in the station
                
                // Check if the top of the stack matches the current target order.
                while (!station.empty() && station.top() == target[targetIndex])
                {
                    station.pop(); // Remove the coach from the station.
                    targetIndex++; // Move to the next target coach.
                    if (targetIndex >= n) break; // Stop if all target coaches are processed.
                }
                
                currCoach++; // Move to the next incoming coach.
            }
            
            // If the station is empty, it means the target order was achieved.
            if (station.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    
    return 0; //
}
