//
//  main.cpp
//  UVa 11150 Cola
//
//  Created by Arridson Biraphath VERNEUS on 2025/4/16.
//
#include <iostream>

using namespace std;

int main()
{
    int N;
    while(cin >> N)
    {
        int total = N;
        int empties = N;
        
        while(empties >= 3)
        {
            int exchange = empties / 3;
            total += exchange;
            empties = exchange + (empties % 3);
        }
        
        if(empties == 2) total++;
        
        cout << total << "\n";
    }
    return 0;
}
