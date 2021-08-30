//searching in array
// how to find a key and its index.
#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number you want to search: ";
    cin >> key;
    int i;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << key << "is present at index" << i << endl;
            break;
        }
        }
    if (i == n)
    {
        cout << "key is not present";
    }

    return 0;
}