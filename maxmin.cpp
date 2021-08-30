#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int max = INT_MIN;
    int min = INT_MAX;
    int n;
    cin >> n;
    int array[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << min << " " << max;

    return 0;
}