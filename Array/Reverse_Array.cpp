#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of Array:: ";
    cin >> n;

    vector<int> array(n); //  safe dynamic array

    cout << "Enter the Elements in the Array:: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Array elements are after the reversing ::" << endl;
    for (int i = n-1; i >=0; i--) {
        cout << array[i] << endl;
    }

    return 0;
}
