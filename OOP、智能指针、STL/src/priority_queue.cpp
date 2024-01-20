#include <iostream>
#include <queue>

using namespace std;

// priority_queue 是一个优先队列，
//它的默认行为是按照元素的值从大到小进行排序，
// 即最大的元素会被放在队首。
int main(){
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(2);
    q.push(4);
    q.push(16);

    // 访问队首元素
    cout << q.top() << endl;
    // 弹出队首元素
    q.pop();
    cout << q.top() << endl;
    // 判断队列是否为空
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}