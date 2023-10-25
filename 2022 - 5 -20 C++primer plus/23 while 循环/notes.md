没有初始化和更新部分的for循环

格式
while(测试条件)
	循环体
![[Pasted image 20220528102850.png]]

![[Pasted image 20220528103038.png]]

**解决方案:用get函数**
可以读入空格、回车

**格式**
cin.get(char)
![[Pasted image 20220528103234.png]]
缺点:
用#作为结束符！！！
如果输入文本中包含#怎么办？？？

### 解决方案:用文件结束符EOF作为结束标记
EOF是一个符号常量，表示文件结束
C++将控制台也看成文件

get函数读到EOF时,fail函数返回true
```c++
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
	cout << ch;
	++count;
	cin.get(ch);
	}
	cout << endl << count << "characters read\n";

	return 0;
}
```
