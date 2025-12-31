//
//  main.cpp
//  UVa 10642 Can you solve it
//
//  Created by Arridson Biraphath VERNEUS on 2025/4/23.
//
#include <iostream>

using namespace std;

long long indexMapping(long long x, long long y)
{
    long long d = x + y;
    return d * (d + 1 )/ 2 + x;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long index1 = indexMapping(x1, y1);
        long long index2 = indexMapping(x2, y2);
        long long steps = index1 > index2 ? index1 - index2 : index2 - index1;
        
        cout << "Case " << t << ": " << steps << "\n";
    }
    return 0;
}
