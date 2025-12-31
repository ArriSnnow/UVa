//
//  main.cpp
//  UVa 10221 Satellites
//
//  Created by Arridson Biraphath VERNEUS on 2025/4/23.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double s, a;
    string unit;
    
    while(cin >> s >> a >> unit)
    {
        double r =  6440 + s;
        double theta = 0.0;
        
        if (unit == "deg")
        {
            theta = a * M_PI/ 180;
        }
        else if (unit == "min")
        {
            theta = (a / 60) * M_PI/ 180;
        }
        
        double arc = r * theta;
        double chord = 2 * r * sin (theta /2);
        
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
    return 0;
}
