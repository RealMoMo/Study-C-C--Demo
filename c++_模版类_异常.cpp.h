#include <iostream>


using namespace std;


//ģ�庯�������ͣ�
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
//���֣�����������ҵ���߼�һ�����������Ͳ�һ��
template <typename T>
void myswap(T& a, T& b){
	T tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

void main(){
	//����ʵ�����ͣ��Զ��Ƶ�
	int a = 10, b = 20;
	myswap<int>(a,b);
	cout << a << "," << b << endl;

	char x = 'v', y = 'w';
	myswap(x, y);
	cout << x << "," << y << endl;

	system("pause");
}
*/

//ģ����
template<class T>
class A{
public:
	A(T a){
		this->a = a;
	}
protected:
	T a;
};

//��ͨ��̳�ģ����
class B : public A<int>{
public:
	B(int a,int b) : A<int>(a){
		this->b = b;
	}
private:
	int b;
};

//ģ����̳�ģ����
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
	//ʵ����ģ�������
	//List<String> list;
	A<int> a(6);
	system("pause");
}


//C++ �쳣���������׳����쳣�������ͣ����뵽��Ӧ��catch����
/*
void main(){
	try{
		int age = 300;
		if (age > 200){
			throw 9.8;
		}
	}
	catch (int a){
		cout << "int�쳣" << endl;
	}
	catch (char* b){
		cout << b << endl;
	}
	catch (...){
		cout << "δ֪�쳣" << endl;
	}
	system("pause");
}
*/

//throw �׳�������
/*
void mydiv(int a, int b){
	if (b == 0){
		throw "����Ϊ��";
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

//�׳�����
//�쳣��
/*
class MyException{
	
};

void mydiv(int a, int b){
	if (b == 0){
		throw MyException();
		//throw new MyException; //��Ҫ�׳��쳣ָ��		
	}
}

void main(){
	try{
		mydiv(8,0);
	}
	catch (MyException& e2){
		cout << "MyException����" << endl;
	}
	//���������ĸ���
	//catch (MyException e){
	//	cout << "MyException" << endl;
	//}
	catch (MyException* e1){
		cout << "MyExceptionָ��" << endl;		
		delete e1;
	}
	
	system("pause");
}
*/

//throw �����������׳����쳣����
/*
void mydiv(int a, int b) throw (char*, int) {
	if (b == 0){
		throw "����Ϊ��";	
	}
}
*/

/*
//��׼�쳣��������JavaNullPointerException��
class NullPointerException : public exception{
public:
	NullPointerException(char* msg) : exception(msg){

	}
};

void mydiv(int a, int b){
	if (b > 10){
		throw out_of_range("������Χ");		
	}	
	else if (b == NULL){
		throw NullPointerException("Ϊ��");
	}
	else if (b == 0){
		throw invalid_argument("�������Ϸ�");
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

//�ⲿ���쳣
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