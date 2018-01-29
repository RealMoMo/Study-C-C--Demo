#include <iostream>

using namespace std;

class Teacher{
public:
	char* name;
	//计数器
	static int total;
public:
	Teacher(char* name){
		this->name = name;
		cout << "Teacher 有参构造函数" << endl;
	}
	~Teacher(){   //析构函数必须无参
		cout << "Teacher 析构函数" << endl;
	}

	//计数  静态函数
	static void count(){
		total++;
	}
};



//学习static关键字

//静态属性初始化赋值 （要在全局时，赋值）
int Teacher::total = 666;

int main(){

	cout << Teacher::total << endl;

	//可以通过类名访问
	Teacher::count;

	//也可以通过对象名访问
	Teacher t1("realmo");
	t1.count();

	system("pause");
	return 0;
}
