#include <iostream>


using namespace std;


//模板函数（泛型）
/*
void myswap(int& a,int& b){
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

void myswap(char& a, char& b){
	char tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}
*/

/*
//发现：这两个函数业务逻辑一样，数据类型不一样
template <typename T>
void myswap(T& a, T& b){
	T tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

void main(){
	//根据实际类型，自动推导
	int a = 10, b = 20;
	myswap<int>(a,b);
	cout << a << "," << b << endl;

	char x = 'v', y = 'w';
	myswap(x, y);
	cout << x << "," << y << endl;

	system("pause");
}
*/

//模板类
template<class T>
class A{
public:
	A(T a){
		this->a = a;
	}
protected:
	T a;
};

//普通类继承模板类
class B : public A<int>{
public:
	B(int a,int b) : A<int>(a){
		this->b = b;
	}
private:
	int b;
};

//模板类继承模板类
template <class T>
class C : public A<T>{
public:
	C(T c, T a) : A<T>(a){
		this->c = c;
	}
protected:
	T c;
};

void main(){
	//实例化模板类对象
	//List<String> list;
	A<int> a(6);
	system("pause");
}


//C++ 异常处理，根据抛出的异常数据类型，进入到相应的catch块中
/*
void main(){
	try{
		int age = 300;
		if (age > 200){
			throw 9.8;
		}
	}
	catch (int a){
		cout << "int异常" << endl;
	}
	catch (char* b){
		cout << b << endl;
	}
	catch (...){
		cout << "未知异常" << endl;
	}
	system("pause");
}
*/

//throw 抛出函数外
/*
void mydiv(int a, int b){
	if (b == 0){
		throw "除数为零";
	}
}

void func(){
	try{
		mydiv(8, 0);
	}
	catch (char* a){
		throw a;
	}
}

void main(){
	try{
		func();
	}
	catch (char* a){
		cout << a << endl;
	}
	system("pause");
}
*/

//抛出对象
//异常类
/*
class MyException{
	
};

void mydiv(int a, int b){
	if (b == 0){
		throw MyException();
		//throw new MyException; //不要抛出异常指针		
	}
}

void main(){
	try{
		mydiv(8,0);
	}
	catch (MyException& e2){
		cout << "MyException引用" << endl;
	}
	//会产生对象的副本
	//catch (MyException e){
	//	cout << "MyException" << endl;
	//}
	catch (MyException* e1){
		cout << "MyException指针" << endl;		
		delete e1;
	}
	
	system("pause");
}
*/

//throw 声明函数会抛出的异常类型
/*
void mydiv(int a, int b) throw (char*, int) {
	if (b == 0){
		throw "除数为零";	
	}
}
*/

/*
//标准异常（类似于JavaNullPointerException）
class NullPointerException : public exception{
public:
	NullPointerException(char* msg) : exception(msg){

	}
};

void mydiv(int a, int b){
	if (b > 10){
		throw out_of_range("超出范围");		
	}	
	else if (b == NULL){
		throw NullPointerException("为空");
	}
	else if (b == 0){
		throw invalid_argument("参数不合法");
	}
}

void main(){
	try{
		mydiv(8,NULL);
	}
	catch (out_of_range e1){
		cout << e1.what() << endl;
	}
	catch (NullPointerException& e2){
		cout << e2.what() << endl;
	}
	catch (...){

	}

	system("pause");
}

*/

//外部类异常
/*
class Err{
public:
	class MyException{
		public:MyException(){

		}
	};
};

void mydiv(int a, int b){
	if (b > 10){
		throw Err::MyException();
	}
	
}
*/