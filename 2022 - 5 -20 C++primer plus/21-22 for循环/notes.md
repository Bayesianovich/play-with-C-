for(计数器赋初值；检查是否达到指定次数；修正计数器值)
	重复部分

![[Pasted image 20220527161431.png]]
**范围for循环(C++11的扩展)**
for循环中,循环变量有规律地变化
**循环变量变化无规律时，可采用范围for**

**格式**

for(循环变量:数组或列表)
for(int x : {1,6,3,9,0})
cout << x << '\t';


double darray[4] = {2.1, 3.1, 2.4, 2.3};
	for (double x : darray)
			cout << x << '\t';

递增(++)/递减(--)运算符
循环变量的修改通常都是加1或减1


++ 一元运算符，将运算对象加1
\--  一元运算符，将运算对象减1
**用法**

前缀: ++k     --k
后缀: k++     k--


**前后缀的区别: 表达式的结果值不同**
前缀：运算对象本身
后缀：修改前的运算对象值
![[Pasted image 20220527162738.png]]

修正变量值
变量 op= 表达式 `x+=5；y*=2;`

**复合语句**
用途：循环体由多个语句组成 将多个语句看成一个语句
格式{一组语句}
![[Pasted image 20220527163140.png]]

逗号表达式
用途
**在只允许出现一个表达式的地方可以放多个表达式**
格式
表达式1，表达式2，......，表达式n
```c++
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter a word:";
	string word;
	cin >> word;

	char temp;
	int i,j;

	for(j = 0, i = word.size()-1; j<i; --i,++j)
	{
	temp =word[i];
	word[i] = word[j];
	word[j] = temp;
	}
	cout << word << "\nDone\n";
	return 0;
}
```

字符串比较
![[Pasted image 20220527164740.png]]

