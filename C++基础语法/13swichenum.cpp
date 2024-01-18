#include <iostream>
using namespace std;


int main()
{
    enum Traffic_light {green, yellow, red};
    Traffic_light light_color {green};

    switch (light_color){
        case red:
            cout << "red" << endl;
            break;
        case yellow:
            cout << "yellow" << endl;
            break;
        default:
            cout << "green" << endl;
            break;
    }
}