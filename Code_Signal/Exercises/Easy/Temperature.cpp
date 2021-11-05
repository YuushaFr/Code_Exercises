#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    int lowest = 5;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();


        if (i == 0)
        {
            lowest = t;
        }
        else
        {
            if (abs(t) < abs(lowest))
            {
                lowest = t;
            }
            else if (abs(t) == abs(lowest))
            {
                if (t > 0)
                {
                    lowest = t;
                }
            }
        }

    }
    if (n == 0)
        {
            lowest = 0;
        }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << lowest << endl;
}
