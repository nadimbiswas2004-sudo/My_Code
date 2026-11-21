#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - 1-i; j++) 
		{
            if (arr[j] > arr[j + 1])
			{
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {22,27,24,4,6,7,28,16,10,11,20,13,25,14,2,15,8,17,18,19,30,21,1,23,3,9,26,5,29,12};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array (ascending order):" << endl;
    printArray(arr, N);
    return 0;
}
