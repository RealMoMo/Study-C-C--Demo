#include <iostream>

using namespace std;

//C++����ת��
//static_cast  �ձ����
//const_cast	ȥ����
//dynamic_cast ��������ת����
//reinterpret_cast  ����ָ��ת�ͣ����߱���ֲ�ԣ������ã�

//ԭʼ����ת�����ɶ��Բ��ߣ��п�����Ǳ�ڵķ���


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

	//c++ ��ͼ����
	func2(static_cast<char*>(func(2)));
	//c
	func2((char*)func(2));

	

	system("pause");
}
*/


/*
void func(const char c[]){
	//c[1] = 'a';  //const ����ֱ���޸ĸ�ֵ
	
	//ͨ��ָ���Ӹ�ֵ
	//c �����˲���֪�������ת����Ϊ��ȥ�������ʡ�
	//char* c_p = (char*)c;
	//c_p[1] = 'a';

	//c++д��
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
		cout << "��" << endl;
	}
};


class Man :public Person{
public:
	void print(){
		cout << "����" << endl;
	}


	void chasing(){
		cout << "����" << endl;
	}
};


class Woman :public Person{
public:
	void print(){
		cout << "Ů��" << endl;
	}

	void cooking(){
		cout << "��" << endl;
	}
};


void func(Person* obj){
	//obj->print();

	//������������к�����תΪʵ������
	//����� ��Ů�ˡ� ��ʵ�ʲ�֪��ת��ʧ�ܡ�
	//Man* m = (Man*)obj;
	//m->print();

	//��ת��ʧ�ܣ�����ΪNULL �������´����ֱ��crash����
	//Man* m = dynamic_cast<Man*>(obj);
	//m->print();

	//��������=========
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
	//����ָ������
	f_p f_array[6];
	//��ֵ
	f_array[0] = func1;

	//c��ʽ
	f_array[1] = (f_p)func2;
	//c++��ʽ
	f_array[1] = reinterpret_cast<f_p>(func2);

	system("pause");
}