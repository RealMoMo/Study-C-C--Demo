#include <iostream>

using namespace std;


////��Ԫ����
//class A{
//
//	//��Ԫ���� ��һ��д����������棩
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
////��Ԫ������ʵ�֣�����Ԫ�����п��Է���˽�е�����
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


//��Ԫ��
class A{
	//B�����Ԫ����Է���A����κγ�Ա
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
