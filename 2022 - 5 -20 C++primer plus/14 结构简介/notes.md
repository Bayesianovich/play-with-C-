**结构**

将描述一个复杂对象的`多个部分`组合成`一个整体`

**结构的使用**
- 建立结构的声明
- 声明结构变量
- 访问结构变量
描述结构的组成，如
```c++
struct book{
	char title{MAXTITLE};
	char title{MAXAUTL};
	float value;
};
```
**定义结构变量、数组**
`book book1， bookarray[10];`

**结构变量赋初值**
book book1 = {“C Primer Plus”, "Stephen Prata", 89.0};
book bookarray[2] = {{"C Primer Plus", "Stephen Prata", 89.0},{"C++Primer Plus""Stephen Prata",99.0}};

结构变量赋值
同类变量直接赋值。如: `bookarray[0] = bookarray[1]`
对每个成员赋值

成员的表示：结构变量名.成员名
如:book1.author
	`bookarray[2].title`
	![[Pasted image 20220524143706.png]]


结构中的位字段：

	![[Pasted image 20220524143900.png]]
