//
//  main.cpp
//  UVa 10409 Die Game
//
//  Created by Arridson Biraphath VERNEUS on 2025/4/19.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nCommands;
    while(cin >> nCommands && nCommands)
    {
        int top = 1, bottom = 6, north = 2, south = 5, east = 4, west = 3;
        string command;
        while(nCommands--)
        {
            cin >> command;
            if(command == "north")
            {
                int temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            }
            else if(command == "south")
            {
                int temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            }
            else if(command == "east")
            {
                int temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
            else if(command == "west")
            {
                int temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
        }
        cout << top << "\n";
    }
    return 0;
}
