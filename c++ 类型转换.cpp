#include <iostream>

using namespace std;

//C++类型转换
//static_cast  普遍情况
//const_cast	去常量
//dynamic_cast 父类类型转类型
//reinterpret_cast  函数指针转型，不具备移植性（不常用）

//原始类型转换，可读性不高，有可能有潜在的风险


/*
void* func(int type){
	switch (type)
	{
	case 1:{
			   int i = 10;
			   return &i;
	}
		
	case 2:{
			   char a = 'A';
			   return &a;
	}
		
	}
	
	return NULL;
}


void func2(char* c_p){
	cout << *c_p << endl;
}



void main(){
	//char* c_p = (char*)func(2);	
	//char* c_p = static_cast<char*>(func(2));
	//cout << *c_p << endl;

	//c++ 意图明显
	func2(static_cast<char*>(func(2)));
	//c
	func2((char*)func(2));

	

	system("pause");
}
*/


/*
void func(const char c[]){
	//c[1] = 'a';  //const 不能直接修改赋值
	
	//通过指针间接赋值
	//c 其他人并不知道，这次转型是为了去常量性质。
	//char* c_p = (char*)c;
	//c_p[1] = 'a';

	//c++写法
	char* c_p = const_cast<char*>(c);
	c_p[1] = 'a';

	cout << c << endl;

}


void main(){

	char c[] = "hello";
	func(c);

	system("pause");
}
*/

/*
class Person{
public:
	virtual void print(){
		cout << "人" << endl;
	}
};


class Man :public Person{
public:
	void print(){
		cout << "男人" << endl;
	}


	void chasing(){
		cout << "把妹" << endl;
	}
};


class Woman :public Person{
public:
	void print(){
		cout << "女人" << endl;
	}

	void cooking(){
		cout << "煮饭" << endl;
	}
};


void func(Person* obj){
	//obj->print();

	//调用子类的特有函数，转为实际类型
	//输出是 ‘女人’ 但实际不知道转型失败。
	//Man* m = (Man*)obj;
	//m->print();

	//若转型失败，返回为NULL 所以以下代码会直接crash程序
	//Man* m = dynamic_cast<Man*>(obj);
	//m->print();

	//完整做法=========
	Man* m = dynamic_cast<Man*>(obj);
	if (m != NULL){
		m->print();
	}

	Woman* wm = dynamic_cast<Woman*>(obj);
	if (wm != NULL){
		wm->print();
	}
	//============


	
}


void main(){
	Woman w1;
	Person *p1 = &w1;
	func(p1);

	system("pause");
}
*/

void func1(){
	
}

char* func2(){
	return "abc";
}

typedef void(*f_p)();

void main(){
	//函数指针数组
	f_p f_array[6];
	//赋值
	f_array[0] = func1;

	//c方式
	f_array[1] = (f_p)func2;
	//c++方式
	f_array[1] = reinterpret_cast<f_p>(func2);

	system("pause");
}