#### C风格的字符串
**字符串**
“programming”
以'\0'结束的一串字符
‘\0'称为空字符

**存储**
采用字符数组，以'\0”作为结束符
如：char str[ ]={'s','t',r','i','n','g','\0'};
char str[ ]="string”;
char str1[10]  = "string";



![[Pasted image 20220523213144.png]]
行为

逐个输出字符串的字符，直到遇到 ’\0‘
如
`cout << "hello,world";`
`cout << str;`

**输入一个单词**

cin>>字符数组名； 以空白字符作为输入结束标记
cin >>str;

**输入一行**
cin.getline(字符数组名，数组规摸);
cin.get(字符数组名，数组规模);

此`写法可以读空格` 而`cin >>` 不行
以回车字符或到达数组规模为止
区别：`getline`将换行符丢弃
			`get`将换行符留给下一次输入
		![[Pasted image 20220523214633.png]]
		![[Pasted image 20220523214754.png]]
		![[Pasted image 20220523215008.png]]
- 解决办法再cin>>year后面加入cin.get();把回车读掉。
		