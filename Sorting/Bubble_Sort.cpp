#include<iostream>
using namespace std;

int main()
{
    int array[20], n, passCount = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Bubble Sort starts here
    for(int i = 0; i < n-1; i++)
    {
        int flag = 0;  // To check if any swapping happened
        passCount++;   // Count this pass

        for(int j = 0; j < n-1-i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = 1;
            }
        }

        // If no swaps occurred, array is already sorted
        if (flag == 0)
            break;
    }

    // Print the sorted array
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << "\nTotal passes required: " << passCount << endl;

    return 0;
}
