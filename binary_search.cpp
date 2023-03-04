#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, mid;
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cout << "Enter element to be searched" << endl;
    cin >> x;
    int low = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int high = n;
    while (low < high)
    {

        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            cout << mid;
            break;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
