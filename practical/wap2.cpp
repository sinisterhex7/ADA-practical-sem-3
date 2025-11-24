// 2. Find Min & Max Using Divide and Conquer
#include <iostream>
using namespace std;

pair<int, int> getMinMax(int arr[], int low, int high) {
    if (low == high)
        return {arr[low], arr[low]};
    if (low + 1 == high)
        return {min(arr[low], arr[high]), max(arr[low], arr[high])};

    int mid = (low + high) / 2;
    auto left = getMinMax(arr, low, mid);
    auto right = getMinMax(arr, mid + 1, high);

    return {min(left.first, right.first), max(left.second, right.second)};
}

