// Binary Search
#include<iostream>
using namespace std;

int binarysearch(int array[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == key)
            return mid;
        else if (array[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
            
    }
    return -1; // element not found
}

int main() {
    int array[20], n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the element that you want to search: ";
    cin >> key;

    int result = binarysearch(array, n, key);
    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found!!";

    return 0;
}
