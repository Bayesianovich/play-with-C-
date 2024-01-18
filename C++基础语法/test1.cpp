#include <iostream>
using namespace std;

// Function to calculate Fibonacci series
void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    fibonacci(n);
    return 0;
}
