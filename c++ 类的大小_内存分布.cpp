#include <iostream>

using namespace std;

class A{
public:
	int i;
	int j;
	int k;
	static int z;  //静态变量。存在全局区内，不作为类的大小。

};


class B{
public:
	int i;
	int j;
	int k;

	void myPrintf(){    //函数存在与代码区里面，也不作为类的大小内计算。
		cout << "打印" << endl;

	}


};

//类的大小

int main(){

	cout << sizeof(A) << endl;   // 12
	cout << sizeof(B) << endl;	 // 12

	// c/c++内存分区：堆、栈、全局（静态、全局）、常量区（字符串）、程序代码区
	//普通属性与结构体相同的内存布局


	system("pause");
	return 0;
}
