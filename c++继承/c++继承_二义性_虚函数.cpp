#include <iostream>

//�̳�
//�����������
using namespace std;

/*
//����
class Human{
public:
	void say(){
		cout << "˵��" << endl;
	}
protected:
	char* name;
	int age;
};

//����
class Man : public Human{
public:
	//���
	void chasing(){
		cout << "���" << endl;		
	}
private:
	//�ֵ�
	char* brother;
};

void work(Human& h){
	h.say();
}

void main(){
	Man m1;
	m1.say();

	//1.�������͵����û�ָ��
	Human* h_p = &m1;
	h_p->say();

	Human &h1 = m1;
	h1.say();

	//��������ʼ���������͵Ķ���
	Human h2 = m1;

	system("pause");
}
*/

//���๹�췽������
//����
/*
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
	}
	void say(){
		cout << "˵��" << endl;
	}
protected:
	char* name;
	int age;
};

//����
class Man : public Human{
public:
	//�����๹�캯�����Σ�ͬʱ�����Զ���ֵ
	Man(char *brother, char *s_name, int s_age, char *h_name, int h_age) : Human(s_name, s_age), h(h_name,h_age){
		this->brother = brother;
	}
	//���
	void chasing(){
		cout << "���" << endl;
	}
private:
	//�ֵ�
	char* brother;
	Human h;
};

void main(){
	Man m1("danny","jack",18,"jason",18);

	system("pause");
}
*/


//���캯���������������õ�˳��
/*
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
		cout << "Human ���캯��" << endl;
	}
	~Human(){
		cout << "Human ��������" << endl;
	}
	void say(){
		cout << "˵��" << endl;
	}
protected:
	char* name;
	int age;
};

//����
class Man : public Human{
public:
	//�����๹�캯�����Σ�ͬʱ�����Զ���ֵ
	Man(char *brother, char *s_name,int s_age) : Human(s_name, s_age){
		this->brother = brother;
		cout << "Man ���캯��" << endl;
	}
	~Man(){
		cout << "Man ��������" << endl;
	}
	//���
	void chasing(){
		cout << "���" << endl;
	}
private:
	//�ֵ�
	char* brother;	
};

void func(){
	//���๹�캯���ȵ���
	//��������������ȵ���
	Man m1("danny", "jack", 18);
}

void main(){
	func();

	system("pause");
}
*/


//���������ø���ĳ�Ա
/*
class Human{
public:
	Human(char* name, int age){
		this->name = name;
		this->age = age;
		cout << "Human ���캯��" << endl;
	}
	~Human(){
		cout << "Human ��������" << endl;
	}
	void say(){
		cout << "˵��" << endl;
	}
public:
	char* name;
	int age;
};

//����
class Man : public Human{
public:
	//�����๹�캯�����Σ�ͬʱ�����Զ���ֵ
	Man(char *brother, char *s_name, int s_age) : Human(s_name, s_age){
		this->brother = brother;
		cout << "Man ���캯��" << endl;
	}
	~Man(){
		cout << "Man ��������" << endl;
	}
	//���
	void chasing(){
		cout << "���" << endl;
	}
	void say(){
		cout << "����ϲ��װ��" << endl;
	}
private:
	//�ֵ�
	char* brother;
};

void main(){
	//�Ǹ��ǣ����Ƕ�̬
	Man m1("alan","john",18);
	m1.say();
	m1.Human::say();

	m1.Human::age = 10;

	system("pause");
}
*/

//��̳�
/*
//��
class Person{

};

//����
class Citizen{

};

//ѧ���������ˣ����ǹ���
class Student : public Person, public Citizen{

};
*/

//�̳еķ�������
//������      �̳з�ʽ             ������
//public     �� public�̳� = > public
//public     �� protected�̳� = > protected
//public     �� private�̳� = > private
//
//protected  �� public�̳� = > protected
//protected  �� protected�̳� = > protected
//protected  �� private�̳� = > private
//
//private    �� public�̳� = > ������Ȩ����
//private    �� protected�̳� = > ������Ȩ����
//private    �� private�̳� = > ������Ȩ����
//����
/*
class Human{
public:
	void say(){
		cout << "˵��" << endl;
	}
private:
	char* name;
	int age;
};

//����
class Man : protected Human{
public:
	//���
	void chasing(){
		cout << "���" << endl;		
	}
private:
	//�ֵ�
	char* brother;
};
*/

//�̳еĶ�����
//��̳У���ͬ·���̳�����ͬ����Աֻ��һ�ݿ������������ȷ������
/*
class A{
public:
	char* name;
};

class A1 : virtual public A{
	
};

class A2 : virtual public A{

};

class B : public A1, public A2{

};

void main(){
	B b;	
	b.name = "jason";
	//ָ��������ʾ����
	//b.A1::name = "jason";
	//b.A2::name = "jason";
	system("pause");
}
*/

/*
//�麯��
//��̬���������չ�ԣ�
//��̬��̬���������й����У�������һ�����������ã���д��
//��̬��̬������

//������̬��������
//1.�̳�
//2.��������û���ָ��ָ������Ķ���
//3.��������д

#include "Plane.h"
#include "Jet.h"
#include "Copter.h"
//ҵ����
void bizPlay(Plane& p){
	p.fly();
	p.land();
}

void main(){
	Plane p1;
	bizPlay(p1);

	//ֱ���ɻ�
	Jet p2;
	bizPlay(p2);

	Copter p3;
	bizPlay(p3);

	system("pause");
}
*/

//���麯��(������)
//1.��һ�������һ�����麯�����������ǳ�����
//2.�����಻��ʵ��������
//3.����̳г����࣬����Ҫʵ�ִ��麯�������û�У�����Ҳ�ǳ�����
//����������ã�Ϊ�˼̳�Լ����������֪��δ����ʵ��
//��״
/*
class Shape{
public:
	//���麯��
	virtual void sayArea() = 0;
	void print(){
		cout << "hi" << endl;
	}
};

//Բ
class Circle : public Shape{
public:
	Circle(int r){
		this->r = r;
	}
	void sayArea(){
		cout << "Բ�������" << (3.14 * r * r) << endl;
	}
private:
	int r;
};

void main(){
	//Shape s;
	Circle c(10);

	system("pause");
}

*/

//�ӿڣ�ֻ���߼��ϵĻ��֣��﷨�ϸ��������д��û������
//���Ե���һ���ӿ�
/*
class Drawble{
	virtual void draw();
};
*/

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


