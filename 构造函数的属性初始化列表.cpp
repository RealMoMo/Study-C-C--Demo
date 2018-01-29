#include <iostream>

using namespace std;

//构造函数的属性初始化列表
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

class Student{
private:
	int id;
	//属性对象
	Teacher t1;
public:
	Student(int id, char* name) :t1(name){   //<-重点
		this->id = id;
		cout << "Student 有参构造函数" << endl;
	}

	void myPrint(){
		cout << id << "," << t1.name << endl;
	}

	~Student(){
		cout << "Student 析构函数" << endl;
	}
};



void func(){
	Student s1(1, "realmo");
	Student s2(1, "momo");

	s1.myPrint();
	s2.myPrint();
}



int main(){
	
	/*Student s1(1,"realmo");
	Student s2(1, "momo");

	s1.myPrint();
	s2.myPrint();*/

	func();


	system("pause");

	return 0;
}