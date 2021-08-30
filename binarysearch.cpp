#include <iostream>
using namespace std;
#include <climits>
int binarysearch(int n, int key, int arr[])
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            cout << "key is present";
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // BINARY SEARCH(searching an element in sorted array)

    int n;
    int key;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key: ";
    cin >> key;
    cout << binarysearch(n, key, arr);
    return 0;
}