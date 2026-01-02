//
//  main.cpp
//  UVa 00902 - Password Search
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/30.
//
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int N;
    string message;
    
    while (cin >> N >> message )
    {
        unordered_map<string, int> frequency;
        int max_freq = 0;
        string password;
        
        for (int i = 0; i <= message.length() - N; ++i)
        {
            string substring = message.substr(i, N);
            frequency[substring]++;
            
            if (frequency[substring] > max_freq)
            {
                max_freq = frequency[substring];
                password = substring;
            }
        }
        
        cout << password << endl;
    }
    return 0;
}
