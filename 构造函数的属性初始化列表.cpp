#include <iostream>

using namespace std;

//���캯�������Գ�ʼ���б�
class Teacher{
public:
	char* name;
public:
	Teacher(char* name){
		this->name = name;
		cout << "Teacher �вι��캯��" << endl;
	}
	~Teacher(){   //�������������޲�
		cout << "Teacher ��������" << endl;
	}
};

class Student{
private:
	int id;
	//���Զ���
	Teacher t1;
public:
	Student(int id, char* name) :t1(name){   //<-�ص�
		this->id = id;
		cout << "Student �вι��캯��" << endl;
	}

	void myPrint(){
		cout << id << "," << t1.name << endl;
	}

	~Student(){
		cout << "Student ��������" << endl;
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