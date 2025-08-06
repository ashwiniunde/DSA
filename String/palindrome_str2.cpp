#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) 
        {
            // Skip non-alphanumeric from the left
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }
            // Skip non-alphanumeric from the right
            while (left < right && !isalnum(s[right])) 
            {
                right--;
            }

            // Compare lowercase versions
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string to check if it's a valid palindrome:\n";
    getline(cin, input);  // Read full line including spaces

    if (sol.isPalindrome(input)) 
    {
        cout << "A Valid palindrome!" << endl;
    } 
    else
    {
        cout << " Not a valid palindrome." << endl;
    }

    return 0;
}
