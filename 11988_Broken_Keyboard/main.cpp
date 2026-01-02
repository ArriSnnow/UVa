//
//  main.cpp
//  UVa 11988 - Broken Keyboard
//
//  Created by Arridson Biraphath VERNEUS on 2025/1/20.
//

#include <iostream>
#include <string>
#include <list>
#include <iterator> // For std::ostream_iterator

using namespace std;

int main()
{
    string line; // Variable to store each line of input
    while (getline(cin, line))
    {   // Read input until EOF
        list<char> beiju; // Doubly linked list to store the final text
        list<char>::iterator iter(beiju.begin()); // Iterator to track insertion position in the list
        
        for (size_t i = 0; i < line.size(); ++i)
        {   // Loop through each character in the input line
            if (line[i] == '[')
            {   // "Home" key: Move the iterator to the beginning of the list
                iter = beiju.begin();
            } else  if (line[i] == ']')
            {   // "End" key: Move the iterator to the end of the list
                iter = beiju.end();
            } else
            {   // Insert the character at the current iterator position
                beiju.insert(iter, line[i]);
            }
        }
        
        // Copy the contents of the list to the output stream
        copy(beiju.begin(), beiju.end(), ostream_iterator<char> (cout, ""));
        cout << endl; // Print a newline after each test case
    }
    return 0;
}
