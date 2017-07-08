# C-Primer-5th &middot; [![Build Status](https://travis-ci.org/xuyicpp/Cpp_Primer_5th.svg?branch=master)](https://travis-ci.org/xuyicpp/Cpp_Primer_5th) [![license](https://img.shields.io/github/license/mashape/apistatus.svg)](https://opensource.org/licenses/MIT)

## 编译器声明(C++11)
* Linux:g++ 5.0+
```python
g++ some_ex.cpp -std=c++11 -o some_ex
```

## 目录
- 第1章 开始  [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH01) [总结](http://blog.csdn.net/xy_cpp/article/details/73511608)
- 第Ⅰ部分 C++基础
  - 第2章 变量和基本类型 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH02) [总结](http://blog.csdn.net/xy_cpp/article/details/73613234)
  - 第3章 字符串、向量和数组 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH03) [总结](http://blog.csdn.net/xy_cpp/article/details/73826784)
  - 第4章 表达式 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH04) [总结](http://blog.csdn.net/xy_cpp/article/details/73920792)
  - 第5章 语句 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH05) [总结](http://blog.csdn.net/xy_cpp/article/details/74177816)
  - 第6章 函数 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH06) [总结](http://blog.csdn.net/xy_cpp/article/details/74781751)
  - 第7章 类 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH07) [总结]()
- 第Ⅱ部分 C++标准库
  - 第8章 IO库 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH08) [总结]()
  - 第9章 顺序容器 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH09) [总结]()
  - 第10章 泛型算法 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH10) [总结]()
  - 第11章 关联容器 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH11) [总结]()
  - 第12章 动态内存 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH12) [总结]()
- 第Ⅲ部分 类设计者的工具
  - 第13章 拷贝控制 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH13) [总结]()
  - 第14章 重载运算与类型转换 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH14) [总结]()
  - 第15章 面向对象程序设计 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH15) [总结]()
  - 第16章 模板与泛型编程 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH16) [总结]()
- 第Ⅳ部分 高级主题
  - 第17章 标准库特殊设施 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH17) [总结]()
  - 第18章 用于大型程序的工具 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH18) [总结]()
  - 第19章 特殊工具与技术 [源码](https://github.com/xuyicpp/Cpp_Primer_5th/tree/master/CH19) [总结]()

## 常用函数

### cctype系列

|函数名称  |  返回值                                                                                      |
|:---------|:---------------------------------------------------------------------------------------------|
|isalnum()   |如果参数是字母数字，即字母或数字，该函数返回true                                            |           
|isalpha()   |如果参数是字母，该函数返回真                                                                |
|isblank()   |如果参数是空格或水平制表符，该函数返回true                                                  |
|iscntrl()   |如果参数是控制字符，该函数返回true                                                          |
|isdigit()   |如果参数是数字（0～9），该函数返回true                                                      |
|isgraph()   |如果参数是除空格之外的打印字符，该函数返回true                                              |
|islower()   |如果参数是小写字母，该函数返回true                                                          |
|isprint()   |如果参数是打印字符（包括空格），该函数返回true                                              |
|ispunct()   |如果参数是标点符号，该函数返回true                                                          |
|isspace()   |如果参数是标准空白字符，如空格、进纸、换行符、回车、水平制表符或者垂直制表符，该函数返回true|
|isupper()   |如果参数是大写字母，该函数返回true                                                          |
|isxdigit()  |如果参数是十六进制的数字，即0～9、a～f、A～F，该函数返回true                                |
|tolower()   |如果参数是大写字符，则返回其小写，否则返回该参数                                            |  
|toupper()   |如果参数是小写字母，则返回其大写，否则返回该参数                                            |    