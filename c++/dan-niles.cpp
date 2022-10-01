// Program to reverse order of words with five or more letters
// Input the number of words (n) followed by the words to be processed in the
// next n lines

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to reverse a string
string reverse_str(string str)
{
    string output;

    for (int i = str.length() - 1; i < str.length(); i--)
    {
        output += str[i];
    }

    return output;
}

int main()
{
    int n; // No. of words
    cout << "Enter the no. of strings to be processed: " << endl;
    cin >> n;

    vector<string> str_vec(n);
    cout << "Enter strings to be reversed: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str_vec[i]; // Get word input from user
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str_vec[i].length() >= 5)
        { // Check if words have 5 letters or more
            cout << reverse_str(str_vec[i]) << endl;
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No strings found with five letters or more." << endl;
    }

    return 0;
}