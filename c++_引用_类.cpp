#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <stdarg.h>

//标准命名空间(包含很多标准的定义)
//standard
using namespace std;
//命名空间类似于Java中包（归类）

/*
//自定义命名空间
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
	//命名空间嵌套
	namespace NSP_C{
		int c = 90;		
	}
}

void main(){
	//运算符重载
	//std::cout << "this is c plus plus" << std::endl;
	cout << "this is c plus plus" << endl;
	//使用命名空间
	//::访问修饰符
	cout << NSP_A::a << endl;
	cout << NSP_B::a << endl;

	cout << NSP_B::NSP_C::c << endl;

	//使用命名空间中的结构体
	using NSP_A::Student;
	Student t;
	t.age = 90;

	system("pause");
}
*/

/*
#define PI 3.14
//圆
class MyCircle{
//属性（共用权限访问修饰符）
private:
	double r;
	double s;
public:
	void setR(double r){
		this->r = r;
	}
	//获取面积
	double getS(){
		return PI * r * r;
	}
};

void main(){
	MyCircle c1;
	c1.setR(4);

	cout << "圆的面积：" << c1.getS() << endl;

	system("pause");
}
*/
//结构体
/*
struct MyTeacher{
public:
	char name[20];
	int age;
public:
	void say(){
		cout << this->age << "岁" << endl;
	}
};
void main(){
	MyTeacher t1;
	t1.age = 10;
	t1.say();
	system("pause");
}
*/

//布尔类型
/*
void main(){
	//bool isSingle = true;
	bool isSingle = 17;
	//false -17

	if (isSingle){
		cout << "单身" << endl;
		cout << sizeof(bool) << endl;
	}
	else{
		cout << "有对象" << endl;
	}

	int a = 10, b = 20;
	((a > b) ? a : b) = 30;
	cout << b << endl;

	system("pause");
}
*/

//引用
/*
void main(){
	//变量名-门牌号(内存空间0x00001的别名，可不可以有多个名字？)
	int a = 10;
	//b就这个内存空间另外一个别名\
	//& C++中的引用
	int &b = a;	
	cout << b << endl;

	system("pause");
}
*/

/*
//指针值交换
void swap_1(int *a, int *b){
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

//引用值交换
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
	//a成了x的别名
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

//引用的主要功能：作为函数的参数或返回值
void main(){
	Teacher t;
	t.name = "Jason";
	t.age = 20;
	myprint(t);

	myprint2(&t);

	system("pause");
}
*/

//指针的引用，代替二级指针
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

//指针的引用，代替二级指针
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

//指针常量与常量指针
/*
void main(){
	//指针常量，指针的常量，不改变地址的指针，但是可以修改它指向的内容
	int a = 2, b = 3;
	int *const p1 = &a;
	//p1 = &b;  //NO
	*p1 = 4;

	//常量指针，指向常量的指针，内容不能修改
	const int *p2 = &a;
	p2 = &b;
	//*p2 = 9;  //NO
}
*/

//1.单纯给变量取别名没有任何意义，作为函数参数传递，能保证参数传递过程中不产生副本
//2.引用可以直接操作变量，指针要通过取值(*p)，间接操作变量，指针的可读性差

/*
//常引用类似于java中final
void myprintf(const int &a){
	cout << a << endl;	
}

void main(){	
	//const int a;
	//引用必须要有值，不能为空
	//int &a = NULL;

	//常引用
	int a = 10, b = 9;
	const int &c = a;

	//字面量
	const int &d = 70;

	//c = b;
	myprintf(c);
	
	system("pause");
}
*/


//引用的大小
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
	//报错，防止不报错，进行非空判断
	myprint(p);

	//引用不能为空，没法传进去
	Teacher &t2 = NULL;
	myprint2(t2);

	system("pause");
}
*/


//函数默认参数
/*
void myprint(int x, int y = 9, int z = 8){
	cout << x << endl;
}
//重载
void myprint(int x,bool ret){
	cout << x << endl;
}

void main(){
	myprint(20);

	system("pause");
}
*/

//可变参数
//int...
/*
void func(int i,...)
{
	//可变参数指针
	va_list args_p;
	//开始读取可变参数，i是最后一个固定参数
	va_start(args_p,i);
	int a = va_arg(args_p,int);
	char b = va_arg(args_p, char);
	int c = va_arg(args_p, int);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	//结束
	va_end(args_p);
}


void main(){
	func(9,20,'b',30);

	system("pause");
}
*/

//循环读取
/*
void func(int i,...)
{
	//可变参数指针
	va_list args_p;
	//开始读取可变参数，i是最后一个固定参数
	va_start(args_p,i);
	int value;
	while (1){
		value = va_arg(args_p,int);
		if (value <= 0){
			break;
		}
		cout << value << endl;
	}

	//结束
	va_end(args_p);
}

void main(){
	func(9, 20, 40, 30);

	system("pause");
}
*/

//C++类的普遍写法
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

//构造函数、析构函数、拷贝构造函数
/*
class Teacher{
private:
	char *name;
	int age;
public:
	//无参构造函数（写了，就会覆盖默认的无参构造函数）
	Teacher(){
		cout << "无参构造函数" << endl;
	}
	//有参构造函数会覆盖默认的构造函数
	Teacher(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "有参构造函数" << endl;
	}	
};


void main(){
	//Teacher t1;
	Teacher t2("yuehan",20);

	//另外一种调用方式
	Teacher t3 = Teacher("jack",21);

	system("pause");
}
*/

/*
//析构函数
class Teacher{
private:
	char *name;
	int age;
public:
	//无参构造函数赋默认值
	Teacher(){
		this->name = (char*)malloc(100);
		strcpy(name,"jack walson");
		age = 20;
		cout << "无参构造函数" << endl;
	}
	//析构函数
	//当对象要被系统释放时，析构函数被调用
	//作用：善后处理
	~Teacher(){
		cout << "析构" << endl;
		//释放内存
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

//拷贝构造函数
/*
class Teacher{
private:
	char *name;
	int age;
public:
	Teacher(char *name, int age){
		this->name = name;
		this->age = age;
		cout << "有参构造函数" << endl;
	}
	//拷贝构造函数（值拷贝）
	//默认拷贝构造函数，就是值拷贝
	Teacher(const Teacher &obj){
		this->name = obj.name;
		this->age = obj.age;
		cout << "拷贝构造函数" << endl;
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

	//拷贝构造函数被调用的场景
	//1.声明时赋值
	//Teacher t2 = t1;
	//t2.myprint();
	//2.作为参数传入，实参给形参赋值
	func1(t1);
	//3.作为函数返回值返回，给变量初始化赋值
	//Teacher t3 = func1(t1);

	//这里不会被调用
	//Teacher t1 ;
	//Teacher t2;
	//t1 = t2;

	system("pause");
}
*/

//浅拷贝（值拷贝）问题
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
		cout << "有参构造函数" << endl;
	}	
	~Teacher(){
		cout << "析构" << endl;
		//释放内存
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

//深拷贝
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
		cout << "有参构造函数" << endl;
	}
	~Teacher(){
		cout << "析构" << endl;
		//释放内存
		free(this->name);
	}
	//深拷贝
	Teacher(const Teacher &obj){
		//复制name属性
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


