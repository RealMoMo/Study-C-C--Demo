#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>

//��׼�����ռ�(�����ܶ��׼�Ķ���)
//standard
using namespace std;
//�����ռ�������Java�а������ࣩ

/*
//�Զ��������ռ�
namespace NSP_A{
	int a = 9;
	struct Teacher{
		char name[20];
		int age;
	};
	struct Student{
		char name[20];
		int age;
	};
	
}

namespace NSP_B{
	int a = 12;
	//�����ռ�Ƕ��
	namespace NSP_C{
		int c = 90;		
	}
}

void main(){
	//���������
	//std::cout << "this is c plus plus" << std::endl;
	cout << "this is c plus plus" << endl;
	//ʹ�������ռ�
	//::�������η�
	cout << NSP_A::a << endl;
	cout << NSP_B::a << endl;

	cout << NSP_B::NSP_C::c << endl;

	//ʹ�������ռ��еĽṹ��
	using NSP_A::Student;
	Student t;
	t.age = 90;

	system("pause");
}
*/

/*
#define PI 3.14
//Բ
class MyCircle{
//���ԣ�����Ȩ�޷������η���
private:
	double r;
	double s;
public:
	void setR(double r){
		this->r = r;
	}
	//��ȡ���
	double getS(){
		return PI * r * r;
	}
};

void main(){
	MyCircle c1;
	c1.setR(4);

	cout << "Բ�������" << c1.getS() << endl;

	system("pause");
}
*/
//�ṹ��
/*
struct MyTeacher{
public:
	char name[20];
	int age;
public:
	void say(){
		cout << this->age << "��" << endl;
	}
};
void main(){
	MyTeacher t1;
	t1.age = 10;
	t1.say();
	system("pause");
}
*/

//��������
/*
void main(){
	//bool isSingle = true;
	bool isSingle = 17;
	//false -17

	if (isSingle){
		cout << "����" << endl;
		cout << sizeof(bool) << endl;
	}
	else{
		cout << "�ж���" << endl;
	}

	int a = 10, b = 20;
	((a > b) ? a : b) = 30;
	cout << b << endl;

	system("pause");
}
*/

//����
/*
void main(){
	//������-���ƺ�(�ڴ�ռ�0x00001�ı������ɲ������ж�����֣�)
	int a = 10;
	//b������ڴ�ռ�����һ������\
	//& C++�е�����
	int &b = a;	
	cout << b << endl;

	system("pause");
}
*/

/*
//ָ��ֵ����
void swap_1(int *a, int *b){
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

//����ֵ����
void swap_2(int &a, int &b){
	int c = 0;
	c = a;
	a = b;
	b = c;
}

void main(){
	int x = 10;
	int y = 20;
	
	printf("%d,%d\n",x,y);
	//swap_1(&x, &y);
	//a����x�ı���
	swap_2(x,y);
	printf("%d,%d\n", x, y);

	system("pause");
}
*/

/*
struct Teacher{
	char* name;
	int age;
};

void myprint(Teacher &t){
	cout << t.name << "," << t.age << endl;
	t.age = 21;
}

void myprint2(Teacher *t){
	cout << t->name << "," << t->age << endl;	
	//(*t).name 
}

//���õ���Ҫ���ܣ���Ϊ�����Ĳ����򷵻�ֵ
void main(){
	Teacher t;
	t.name = "Jason";
	t.age = 20;
	myprint(t);

	myprint2(&t);

	system("pause");
}
*/

//ָ������ã��������ָ��
/*
struct Teacher{
	char* name;
	int age;
};

void getTeacher(Teacher **p){
	Teacher *tmp = (Teacher*)malloc(sizeof(Teacher));
	tmp->age = 20;
	*p = tmp;
}

//ָ������ã��������ָ��
//Teacher* &p = (Teacher * *p)
void getTeacher(Teacher* &p){
	p = (Teacher*)malloc(sizeof(Teacher));
	p->age = 20;
}

void main(){
	Teacher *t = NULL;

	getTeacher(&t);

	system("pause");
}
*/

//ָ�볣���볣��ָ��
/*
void main(){
	//ָ�볣����ָ��ĳ��������ı��ַ��ָ�룬���ǿ����޸���ָ�������
	int a = 2, b = 3;
	int *const p1 = &a;
	//p1 = &b;  //NO
	*p1 = 4;

	//����ָ�룬ָ������ָ�룬���ݲ����޸�
	const int *p2 = &a;
	p2 = &b;
	//*p2 = 9;  //NO
}
*/

//1.����������ȡ����û���κ����壬��Ϊ�����������ݣ��ܱ�֤�������ݹ����в���������
//2.���ÿ���ֱ�Ӳ���������ָ��Ҫͨ��ȡֵ(*p)����Ӳ���������ָ��Ŀɶ��Բ�

/*
//������������java��final
void myprintf(const int &a){
	cout << a << endl;	
}

void main(){	
	//const int a;
	//���ñ���Ҫ��ֵ������Ϊ��
	//int &a = NULL;

	//������
	int a = 10, b = 9;
	const int &c = a;

	//������
	const int &d = 70;

	//c = b;
	myprintf(c);
	
	system("pause");
}
*/


//���õĴ�С
/*
struct Teacher{
	char name[20];
	int age;
};

void main(){
	Teacher t;

	Teacher &t1 = t;
	Teacher *p = &t;

	cout << sizeof(t1) << endl;
	cout << sizeof(p) << endl;
	system("pause");
}
*/

/*
struct Teacher{
	char name[20];
	int age;
};

void myprint(Teacher *t){
	cout << t->name << "," << t->age << endl;
}

void myprint2(Teacher &t){
	cout << t.name << "," << t.age << endl;
	t.age = 21;
}

void main(){
	Teacher t;

	Teacher *p = NULL;
	//������ֹ���������зǿ��ж�
	myprint(p);

	//���ò���Ϊ�գ�û������ȥ
	Teacher &t2 = NULL;
	myprint2(t2);

	system("pause");
}
*/


//����Ĭ�ϲ���
/*
void myprint(int x, int y = 9, int z = 8){
	cout << x << endl;
}
//����
void myprint(int x,bool ret){
	cout << x << endl;
}

void main(){
	myprint(20);

	system("pause");
}
*/

//�ɱ����
//int...
/*
void func(int i,...)
{
	//�ɱ����ָ��
	va_list args_p;
	//��ʼ��ȡ�ɱ������i�����һ���̶�����
	va_start(args_p,i);
	int a = va_arg(args_p,int);
	char b = va_arg(args_p, char);
	int c = va_arg(args_p, int);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	//����
	va_end(args_p);
}


void main(){
	func(9,20,'b',30);

	system("pause");
}
*/

//ѭ����ȡ
/*
void func(int i,...)
{
	//�ɱ����ָ��
	va_list args_p;
	//��ʼ��ȡ�ɱ������i�����һ���̶�����
	va_start(args_p,i);
	int value;
	while (1){
		value = va_arg(args_p,int);
		if (value <= 0){
			break;
		}
		cout << value << endl;
	}

	//����
	va_end(args_p);
}

void main(){
	func(9, 20, 40, 30);

	system("pause");
}
*/

//C++����ձ�д��
/*
#include "MyTeacher.h"

void main(){
	MyTeacher t1;
	t1.name = "Jack";
	t1.age = 20;

	cout << t1.getName() << endl;

	system("pause");
}
*/

//���캯���������������������캯��
/*
class Teacher{
private:
	char *name;
	int age;
public:
	//�޲ι��캯����д�ˣ��ͻḲ��Ĭ�ϵ��޲ι��캯����
	Teacher(){
		cout << "�޲ι��캯��" << endl;
	}
	//�вι��캯���Ḳ��Ĭ�ϵĹ��캯��
	Teacher(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "�вι��캯��" << endl;
	}	
};


void main(){
	//Teacher t1;
	Teacher t2("yuehan",20);

	//����һ�ֵ��÷�ʽ
	Teacher t3 = Teacher("jack",21);

	system("pause");
}
*/

/*
//��������
class Teacher{
private:
	char *name;
	int age;
public:
	//�޲ι��캯����Ĭ��ֵ
	Teacher(){
		this->name = (char*)malloc(100);
		strcpy(name,"jack walson");
		age = 20;
		cout << "�޲ι��캯��" << endl;
	}
	//��������
	//������Ҫ��ϵͳ�ͷ�ʱ����������������
	//���ã��ƺ���
	~Teacher(){
		cout << "����" << endl;
		//�ͷ��ڴ�
		free(this->name);
	}
};

void func(){
	Teacher t1;
}

void main(){
	func();
	
	system("pause");
}
*/

//�������캯��
/*
class Teacher{
private:
	char *name;
	int age;
public:
	Teacher(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "�вι��캯��" << endl;
	}
	//�������캯����ֵ������
	//Ĭ�Ͽ������캯��������ֵ����
	Teacher(const Teacher &obj){
		this->name = obj.name;
		this->age = obj.age;
		cout << "�������캯��" << endl;
	}
	void myprint(){
		cout << name << "," << age << endl;
	}
};

Teacher func1(Teacher t){
	t.myprint();
	return t;
}

void main(){
	Teacher t1("rose",20);

	//�������캯�������õĳ���
	//1.����ʱ��ֵ
	//Teacher t2 = t1;
	//t2.myprint();
	//2.��Ϊ�������룬ʵ�θ��βθ�ֵ
	func1(t1);
	//3.��Ϊ��������ֵ���أ���������ʼ����ֵ
	//Teacher t3 = func1(t1);

	//���ﲻ�ᱻ����
	//Teacher t1 ;
	//Teacher t2;
	//t1 = t2;

	system("pause");
}
*/

//ǳ������ֵ����������
/*
class Teacher{
private:
	char *name;
	int age;
public:
	Teacher(char *name, int age){
		this->name = (char*)malloc(100);
		strcpy(this->name,name);
		this->age = age;
		cout << "�вι��캯��" << endl;
	}	
	~Teacher(){
		cout << "����" << endl;
		//�ͷ��ڴ�
		free(this->name);
	}
	void myprint(){
		cout << name << "," << age << endl;
	}
};

void func(){
	Teacher t1("rose", 20);

	Teacher t2 = t1;
	t2.myprint();
}

void main(){
	func();

	system("pause");
}
*/

//���
/*
class Teacher{
private:
	char *name;
	int age;
public:
	Teacher(char *name, int age){
		int len = strlen(name);
		this->name = (char*)malloc(len+1);
		strcpy(this->name, name);
		this->age = age;
		cout << "�вι��캯��" << endl;
	}
	~Teacher(){
		cout << "����" << endl;
		//�ͷ��ڴ�
		free(this->name);
	}
	//���
	Teacher(const Teacher &obj){
		//����name����
		int len = strlen(obj.name);
		this->name = (char*)malloc(len+1);
		strcpy(this->name,obj.name);
		this->age = obj.age;
	}
	void myprint(){
		cout << name << "," << age << endl;
	}
};

void func(){
	Teacher t1("rose", 20);

	Teacher t2 = t1;
	t2.myprint();
}

void main(){
	func();

	system("pause");
}
*/


