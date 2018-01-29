#include <iostream>

using namespace std;

class Teacher{
public:
	char* name;
public:
	Teacher(char* name){
		this->name = name;
		cout << "Teacher 有参构造函数" << endl;
	}
	~Teacher(){   //析构函数必须无参
		cout << "Teacher 析构函数" << endl;
	}
};

//c++可以通过new delete  动态内存分配

void func(){
	//c++写法  -->会调用构造函数 & 析构函数
	
	Teacher *t1 = new Teacher("realmo");

	//释放
	delete(t1);
	

	//c写法   -->不会调用构造函数 & 析构函数
	Teacher *t2 = (Teacher*)malloc(sizeof(Teacher));
	
	free(t2);


	//数组
	//c
	int *p1 = (int *)malloc(sizeof(int)* 10);
	p1[0] = 6;
	free(p1);

	//c++
	int *p2 = new int[10];
	p2[0] = 6;
	//释放数组 []
	delete[] p2;

	
}

int main(){
	
	func();

	system("pause");
	return 0;
}
