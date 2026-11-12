#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) 
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        {
        	if (arr[i] == x)
            return i;
		}
		return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
    cout<<"\n----------------------------\n";

    int result2= linearSearch(arr, n, x);
    (result2== -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
    return 0;
}
