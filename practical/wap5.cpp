// 5. Binary Search in a Sorted Array

#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            return 0;
        }
        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Not found" << endl;
    return 0;
}
