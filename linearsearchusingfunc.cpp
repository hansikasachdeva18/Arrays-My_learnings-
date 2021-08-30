#include <iostream>
using namespace std;

int linear(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int array[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cin >> key;
    cout << linear(array, n, key);

    return 0;
}