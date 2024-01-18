#include <iostream>
using namespace std;

int main()
{
    char input_char {};
    do {
        cout << "Enter a character: ";
        cin >> input_char;
        cout << "You entered: " << input_char << endl;
    } while (input_char != 'q' && input_char != 'Q');
}