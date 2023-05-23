#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 1000000;

int main()
{
    char number[MAX_SIZE];
    cin >> number;

    char new_number[MAX_SIZE];
    int first_zero = -1, new_number_i = 0;

    for (int i = 0; number[i] != '\0'; i++)
    {
        if (number[i] == '0' && first_zero == -1) 
        {
            first_zero = i;
        }
        else
        {
            new_number[new_number_i++] = number[i];
        }
    }

    int last_digit_position = new_number_i;
    if (first_zero == -1)
        last_digit_position--;

    new_number[last_digit_position] = '\0';

    cout << new_number << endl;
    return 0;
}