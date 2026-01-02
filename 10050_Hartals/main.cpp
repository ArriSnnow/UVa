//
//  main.cpp
//  Hartals Uva 10050
//
//  Created by Arridson Biraphath VERNEUS on 2025/3/10.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Case;
    cin >> Case;
    
    while(Case--)
    {
        int N, P;
        cin >> N >> P;
        
        vector<bool> hartal(N+1, false);
        
        for (int i = 0; i < P; i++)
        {
            int h;
            cin >> h;
            
            for (int day = h; day <= N; day += h)
            {
                int d = day % 7;
                if (d == 6 || d == 0)
                    continue;
                
                hartal[day] = true;
            }
        }
        
        int count = 0;
        
        for (int day = 1; day <= N; day++)
        {
            if (hartal[day])
                count += 1;
        }
        cout << count << "\n";
    }
    return 0;
}
