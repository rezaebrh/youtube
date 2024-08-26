#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int maxN = 1e5;

int main()
{
    int n, array[maxN], s = 0, currentNegative = 0, maximum = 0;
    unsigned int startIndex = 0, endIndex = 0, currentNegativeIndex = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
        s += array[i];
        if (array[i] < currentNegative)
        {
            currentNegative = array[i];
            currentNegativeIndex = i;
        }
        if ((s - currentNegative) > maximum)
        {
            maximum = (s - currentNegative);
            endIndex = i;
            startIndex = currentNegativeIndex + 1;
        }
    }
    cout << "Maximum sum = " << maximum << " within indices (" << startIndex << ", " << endIndex << ")" << endl;
}