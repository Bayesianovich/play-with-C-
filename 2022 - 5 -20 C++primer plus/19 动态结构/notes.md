**动态结构**
运行时通过new申请一个动态的结构变量

**申请动态结构**
结构指针 = new 结构类型;
```c++
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
inflatable *ptr;
ptr = new inflatable;
```

释放动态结构
delete 结构指针;
`delete ptr;`

访问动态结构
(\*指针)成员
如:`(*ptr).name`
指针->成员
如: `ptr->name`
![[Pasted image 20220526083502.png]]