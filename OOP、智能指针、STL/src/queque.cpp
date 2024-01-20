#include <iostream>
#include <queue>
// 遵循先进先出（FIFO）原则
int main() {
    std::queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(2);
    q.push(4);
    q.push(16);

    // 访问队首元素
    std::cout << q.front() << std::endl;
    // 弹出队首元素
    q.pop();
    std::cout << q.front() << std::endl;
    // 判断队列是否为空
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
    return 0;
}