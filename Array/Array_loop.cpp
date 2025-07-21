#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of Array:: ";
    cin >> n;

   int array[20]; 

    cout << "Enter the Elements in the Array:: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Array elements are::" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }

    return 0;
}
