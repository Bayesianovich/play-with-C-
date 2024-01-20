#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(2);
    s.push(4);
    s.push(16);
 
    // 访问栈顶元素
    cout << s.top() << endl;
    // 弹出栈顶元素
    s.pop();
    cout << s.top() << endl;
    // 判断栈是否为空
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}