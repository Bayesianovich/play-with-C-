**数组的替代品**
- vector
- array


**vector**
类模板vector
动态数组
可以自动调整长度

用法
包含头文件vector
定义时，需要指出数据类型和规模
规模可以是变量

如: 
   ```
vector<int>v1;//规模为0
//or
int n;
cin >>n;
vector<double>v2(n);//与数组不同的是:规模用圆括号

```

array效率比vector高的数组,规模固定
C++11新增的类型


用法
包含头文件array
定义时需要指出类型和规模
规模是常量


如:array<int , 5>a1;
array <double,4> a2 = {1.0,2.3,2.1,4.2};
![[Pasted image 20220526085609.png]]
