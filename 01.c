#define _CRT_SECURE_NO_WARNINGS //�궨��
//����ͷ�ļ�
//ֻ�к���������������ʱ��ȥ�ҵ�������ʵ��
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


/*
void main(){
	printf("hello world\n");	
	system("pause");
}
*/
//1.������������
//int short long float double char
/*
int %d
short %d
long %ld
float %f
double %lf
char %c
%x ʮ������
%o �˽���
%s �ַ���
*/
/*
void main(){
	int i = 1;
	printf("%d\n",i);

	float f = 23.3;
	printf("%f\n",f);

	//��������������ռ���ֽ���
	printf("intռ%d�ֽ�\n",sizeof(int));
	printf("charռ%d�ֽ�\n", sizeof(char));
	printf("floatռ%d�ֽ�\n", sizeof(float));

	//ѭ��
	int n = 0;
	for (; n < 10; n++){
		printf("%d\n",n);
	}

	//�ȴ�����
	system("pause");
}
*/

//2.�����������
/*
void main(){
	int i;
	printf("������һ��������");
	//��ֵ
	scanf("%d",&i);  //����̨���룬&ȡ��ַ��
	//��ӡ
	printf("i��ֵΪ��%d\n",i);

	system("pause");
}
*/

//ָ��
//ָ��洢���Ǳ������ڴ��ַ
//�ڴ��ַ��ϵͳ�����ݷ���ı�ţ����ƺţ�
/*void main(){
	int i = 90;
	//ָ�����������һ��int���͵�ָ��
	int* p = &i; //p��ֵ����i����������ڴ��ַ
	printf("%#x\n",p);

	float f = 89.5f;
	//����һ��float���͵�ָ��
	float *fp = &f;
	printf("%#x\n", fp);

	system("pause");
}*/

/*
void change(int* p){
	*p = 300;
}

//�����������ڴ�ռ��ϵ�һ�����ݵĳ���
void main(){
	int i = 90;
	//i = 89;
	//����һ��int���͵�ָ��
	int *p = &i;
	//�����ַ
	printf("p�ĵ�ַ��%#x\n",&p);
	printf("i�ĵ�ַ��%#x\n",&i);

	printf("i��ֵΪ��%d\n", i);
	//��Ӹ�ֵ i = 200;

	//��p��ĵ�ַָ��ı������в���
	//*p = 200;
	//change(p);
	change(&i);  // int *p = &i;
	printf("i��ֵΪ��%d\n",i);

	system("pause");
}
*/

void main(){
	int time = 600;
	printf("time:%#x\n",&time);
	while (time > 0){
		time--;
		printf("��Ϸʱ��ʣ��%d��\n",time);
		//˯��
		Sleep(1000);
	}
	system("pause");
}

