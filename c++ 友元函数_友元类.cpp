#include <iostream>

using namespace std;


////友元函数
//class A{
//
//	//友元函数 （一般写到类的最上面）
//	friend void modify_i(A *p, int a);
//
//private:
//	int i;
//public:
//	A(int i){
//		this->i = i;
//	}
//
//	void myPrint(){
//		cout << i << endl;
//	}
//
//
//};
//
////友元函数的实现，在友元函数中可以访问私有的属性
//void modify_i(A *p, int a){
//	p->i = a;
//}
//
//
//
//int main(){
//
//	A *a = new A(10);
//	a->myPrint();
//
//
//	modify_i(a, 18);
//	a->myPrint();
//
//	system("pause");
//	return 0;
//}


//友元类
class A{
	//B这个友元类可以访问A类的任何成员
	friend class B;
private:
	int i;
public:
	A(int i){
		this->i = i;
	}

	void myPrint(){
		cout << i << endl;
	}
	

};


class B{
public:
	B():a(10){
	}
	void accessAny(){
		a.i = 30;
	}
public:
	A a;
};


void main(){
	
	B b;
	b.a.myPrint();

	b.accessAny();
	
	b.a.myPrint();

	system("pause");
}
