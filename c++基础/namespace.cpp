#include <iostream>
using namespace std;

namespace First {
    int value() {
        return 5;
    }
}

namespace Second {
    const double x = 100;
    double value() {
        return 2 * x;
    }
}

// 在main函数中，我们调用了First::value和Second::value函数，
// 并打印了它们的返回值
int  main () {
    cout << First::value() << endl;
    cout << Second::value() << endl;
    cout << Second::x << endl;
    return 0;
}