#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int i;
    int n;
    cin >> n;
    int arr[1000];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}