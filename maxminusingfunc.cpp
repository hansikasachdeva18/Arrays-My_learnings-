#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int min1 = INT_MAX;
    int max1 = INT_MIN;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        max1 = max(a[i], max1);
        min1 = min(a[i], min1);
    }

    cout << min1 << " " << max1;

    return 0;
}
