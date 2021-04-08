#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;

    while (true)
    {
        // Get a 5-digit number
        int number;
        cout << "Please enter one 5-digit number: ";
        cin >> number; // 12345
        if (!((number / 10000 < 10) && (number / 10000 > 0) && (number % 10 < 10) && (number % 10 > 0))) continue; // Re-prompt if a number has a number of digits that is not 5

        // Reverse number to overcome problems with reversed output
        int digit, rev = 0;
        while (number > 0)
        {
            digit = number % 10;
            rev *= 10;
            rev += digit;
            number /= 10;
        }

        // Display reversed number in reverse order, since the reverse of a reverse is an upright
        for (; rev > 0;)
        {
            cout << rev % 10 << "  ";
            rev /= 10;
        }
        cout << endl;
    }

    return 0;
}
