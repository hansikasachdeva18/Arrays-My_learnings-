#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[1000];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int iteration = 1;

    while (iteration < n)
    {
        for (i = 0; i < n - iteration; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        iteration++;
    }

    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}