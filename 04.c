#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <Windows.h>

//�ṹ����һ�ֹ�����������
//�Ѳ�ͬ��������������������Ϊһ���Զ������������
/*
struct Man{
	//��Ա
	char name[20];
	int age;
	//int(*func)();
};

void main(){
	//��ʼ���ṹ��ı���
	//1.
	//struct Man m1 = {"Jack", 21};
	//2.
	struct Man m1;
	m1.age = 23;
	//m1.name = "Rose";
	strcpy(m1.name,"rose");
	sprintf(m1.name,"Jason");

	//����JavaScript��������ֵ��ֻ���ڱ�������ʱ��ֵ
	//m1 = {};
	struct Man m2 = m1;

	printf("%s,%d\n",m1.name,m1.age);

	getchar();
}
*/

//�ṹ��ļ���д��
/*
struct Man{
	char name[20];
	int age;
} m1, m2 = {"jack",20}; //m1�ṹ�������

//typedef int Age;

void main(){
	
	strcpy(m1.name,"Jack");
	m1.age = 10;

	printf("%s,%d\n", m2.name, m2.age);

	getchar();
}
*/

//�����ṹ��
//���ƽṹ������ĸ����������棩���൱�ڵ���
/*
struct{
	char name[20];
	int age;
}m1;
*/

//�ṹ��Ƕ��
/*
struct Teacher{
	char name[20];
};

struct Student{
	char name[20];
	int age;
	struct Teacher t;
};

void main(){
	//�������ķ�ʽ
	//struct Student s1 = { "jack", 21, {"Jason"} };
	struct Student s1;
	s1.age = 10;
	strcpy(s1.t.name, "Jason");
	system("pause");
}
*/

//�ṹ��Ƕ��2
/*
struct Student{
	char name[20];
	int age;
	struct Teacher{
		char name[20];
	} t;
};

void main(){
	struct Student s1;
	strcpy(s1.t.name, "Jason");
	//struct Teacher t;
	

	system("pause");
}
*/

//�ṹ����ָ��
/*
struct Man{
	char name[20];
	int age;
};
void main(){
	struct Man m1 = {"Jack",30};
	//�ṹ��ָ��
	struct Man *p = &m1;
	printf("%s,%d\n", m1.name, m1.age);
	printf("%s,%d\n",(*p).name,(*p).age);
	//��->������ͷ���ǡ�(*p).����д��ʽ
	printf("%s,%d\n", p->name, p->age);
	//(*env)->

	system("pause");
}
*/

//ָ����ṹ������
/*
struct Man{
	char name[20];
	int age;
};
void main(){	
	struct Man mans[] = { {"Jack",20}, {"Rose", 19} };
	//�����ṹ������
	//��һ�ֱ�����ʽ
	struct Man *p = mans;
	for (; p < mans + 2; p++){
		printf("%s,%d\n", p->name, p->age);
	}

	//�ڶ��ֱ�����ʽ
	int i = 0;
	for (; i < sizeof(mans) / sizeof(struct Man); i++){
		printf("%s,%d\n", mans[i].name, mans[i].age);
	}
	
	//(*env)->

	system("pause");
}
*/

//�ṹ��Ĵ�С���ֽڶ��룩
/*
struct Man{
	int age;
	double weight;	
};

void main(){
	//�ṹ������Ĵ�С���������������������͵�������
	//������ȡ��Ч��
	struct Man m1 = {20,89.0};
	printf("%#x,%d\n", &m1,sizeof(m1));
	getchar();
}
*/

struct Man{
	char *name;
	int age;
};
//�ṹ���붯̬�ڴ����
/*
void main(){
	struct Man *m_p = (struct Man*)malloc(sizeof(struct Man) * 10);
	struct Man *p = m_p;
	//��ֵ
	p->name = "Jack";
	p->age = 20;
	p++;
	p->name = "Rose";
	p->age = 20;
	
	struct Man *loop_p = m_p;
	for (; loop_p < m_p + 2; loop_p++){
		printf("%s,%d\n", loop_p->name, loop_p->age);
	}

	free(m_p);
	getchar();
}
*/

/*
//typedef ����ȡ����
//1.��ͬ���ƴ����ڸɲ�ͬ������typedef int jint;  
//2.��ͬ����£�ʹ�ò�ͬ�ı���
//#if defined(__cplusplus)
//typedef _JNIEnv JNIEnv;
//typedef _JavaVM JavaVM;
//3.��д���

struct Man{
	char name[20];
	int age;
};

//Age int���͵ı���
typedef int Age;
//Age int����ָ��ı���
typedef int* Ap;

typedef struct Man JavaMan;
typedef struct Man* JM;

//�ṹ��ȡ����
//typedef struct Woman W;
//typedef struct Woman* WP;
//��д
typedef struct Woman{
	char name[20];
	int age;
} W, *WP;  //W ��woman�ṹ��ı���, WP ��woman�ṹ��ָ��ı���

void main(){
	int i = 5;
	Ap p = &i;

	//�ṹ�����
	W w1 = {"Rose",20};
	//�ṹ��ָ��
	WP wp1 = &w1;
	printf("%s,%d\n", w1.name, w1.age);
	printf("%s,%d\n", wp1->name, wp1->age);

	getchar();
}
*/

//�ṹ�庯��ָ���Ա
/*
struct Girl{
	char *name;
	int age;
	//����ָ��
	void(*sayHi)(char*);
};
//Girl�ṹ��������Java�е��࣬name��age���������ԣ�sayHi�����ڷ���

void sayHi(char* text){
	MessageBoxA(0, text, "title", 0);
}

void main(){
	struct Girl g1;
	g1.name = "Lucy";
	g1.age = 18;
	g1.sayHi = sayHi;

	g1.sayHi("hello");

	getchar();
}
*/

typedef struct Girl{
	char *name;
	int age;
	//����ָ��
	void(*sayHi)(char*);
}Girl;

//Girl�ṹ��ָ��ȡ����GirlP
typedef Girl* GirlP;

void sayHi(char* text){
	MessageBoxA(0, text, "title", 0);
}

//����
void rename(GirlP gp1){
	gp1->name = "Lily";
}

void main(){
	Girl g1 = { "Lucy", 18, sayHi };
	GirlP gp1 = &g1;
	gp1->sayHi("Byebye!");
	//����ָ�룬����
	rename(gp1);

	getchar();
}