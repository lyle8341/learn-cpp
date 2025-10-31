# learn c++



### g++手动编译流程


+ 编译
  + 1.预处理
    + 处理源代码中的预处理指令，如宏展开、条件编译指令、包含头文件
      > g++ -E xxx.cpp -o xxx.i
  + 2.编译
    + 将预处理后的代码转换为汇编语言
      > g++ -S xxx.i -o xxx.s
  + 3.汇编
    + 将汇编代码，转换为机器码（二进制）
      > g++ -c xxx.s -o xxx.o
  + 4.链接
    + 将机器码文件和所需的其他库链接得到程序
      > g++ xxx.o -o xxx

  + 5.一步到位
    > g++ xxx.cpp -o xxx.exe


+ 多文件编译
  + a.cpp中 include了 b.h时
    > g++ a.cpp b.cpp










+ 1.程序运行前
  > 在程序编译后，生成了exe可执行文件，未执行该程序前分为两个区域
	+ 代码区
		- 存放CPU执行的机器指令
		- 代码区是共享的
		- 代码区是只读的
	+ 全局区
		- 全局变量和静态变量存放在此
		- 全局区还包含了常量区，字符串常量和其他常量
		- 该区域数据在程序结束后由操作系统释放
	+ 栈区
		- 编译器生成的代码在运行时管理栈内存
	+ 堆区
		- 由程序员分配释放，若程序员不释放，程序结束时由操作系统回收



+ cannot open file
  > taskkill /f /im "内存四区.exe"




+ 跳过Avast扫描
	+ 菜单-设置-特例-添加跳过目录



# CLion

> CLion基于工程管理代码，一个工程内默认只允许一个程序入口
>> 新建文件时 “取消勾选” Add to targets 就可以多个main共存，互不影响

+ 控制台乱码
  + 方式一 引入windows.h, main方法中加 SetConsoleOutputCP(CP_UTF8);
  + 方式二 main方法中加 system("chcp 65001");


+ cin中文乱码(该方案可同时解决cout和cin乱码问题)
	+ 1.`ctrl+shift+alt+/` 选择Registry
	+ 2.取消勾选`run.processes.with.pty`
	+ 该方案可同时解决cout和cin乱码问题
	









[C++一套通关系列课程](https://www.yuque.com/embheima/newcpp)





# C语言


+ 隐式转换两条规则
  + 1.取值范围小的和取值范围大的计算，小的会自动提升为大的，再进行计算
    + char < short < int < long < long long < float < double
  + 2.short char类型的数据在运算的时候，先提升为int，再进行计算
    + short a加 short b 结果是 int