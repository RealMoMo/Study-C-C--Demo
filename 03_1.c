#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

//��̬�ڴ����
/*
void main(){
	//40M
	//stack overflow����ջ���
	//��̬�ڴ����
	int a[1024 * 1024 * 10];
	//ջ�ڴ�

	//C�����ڴ���䣺
	//1.ջ��(stack)
	//windows�£�ջ�ڴ����2M��ȷ���ĳ����������������ƣ���ʾstack overflow����
	//�Զ����䣬�ͷ�
	//2.����(heap)
	//����Ա�ֶ������ͷţ�����ϵͳ80%�ڴ�
	//3.ȫ������̬��
	//4.�ַ�������
	//5.���������

	getchar();
}
*/

/*
//ջ�ڴ�
void stackFun(){
	int a[1024];
	//ջ�ڴ��Զ��ͷ�
}

//���ڴ�
void heapFun(){
	//40M�ڴ�
	//�ֽ�
	//void *�������͵�ָ��
	int* p = malloc(1024 * 1024 * 10 * sizeof(int));

	//�ͷ�
	free(p);
}

void main(){	
	//�ڶ��ڴ��ϣ�����40M���ڴ�
	while (1){
		Sleep(1000);	
		stackFun();
	}

	getchar();
}
*/

//����һ�����飬��ָ̬������Ĵ�С
//���ڳ������й����У���������Ŀ���ָ����С���ڴ棬�Թ�ʹ�ã��൱��Java�еļ��ϣ�
//��̬�ڴ���䣬�����ڴ��С���ǹ̶������⣺1.�����׳���ջ�ڴ�����ֵ 2.Ϊ�˷�ֹ�ڴ治���ûῪ�ٸ�����ڴ棬�����˷��ڴ�
//��̬�ڴ���䣬�ڳ������й����У���ָ̬����Ҫʹ�õ��ڴ��С���ֶ��ͷţ��ͷ�֮����Щ�ڴ滹���Ա�����ʹ�ã���ˮ��
/*
void main(){
	//��̬�ڴ���䴴�����飬����Ĵ�С�ǹ̶���
	//int i = 10;
	//int a[i];

	int len;
	printf("��������ĳ��ȣ�");
	scanf("%d",&len);

	//�����ڴ棬��Сlen*4�ֽ�
	int* p = malloc(len * sizeof(int));
	//p��������׵�ַ��p�������������
	//������Ԫ�ظ�ֵ��ʹ����һ��ոտ��ٳ������ڴ�����
	int i = 0;
	for (; i < len - 1; i++){
		p[i] = rand() % 100;
		printf("%d,%#x\n", p[i], &p[i]);
	}
	
	//�ֶ��ͷ��ڴ�
	free(p);

	getchar();
}
*/

//realloc ���·����ڴ�
/*
void main(){
	int len;
	printf("��һ����������ĳ��ȣ�");
	scanf("%d", &len);

	//int* p = malloc(len * sizeof(int));	
	int* p = calloc(len, sizeof(int));
	int i = 0;
	for (; i < len; i++){
		p[i] = rand() % 100;
		printf("%d,%#x\n", p[i], &p[i]);
	}

	int addLen;
	printf("�����������ӵĳ��ȣ�");
	scanf("%d", &addLen);
	//�ڴ治���ã�����ոշ�����ڴ�ռ�
	//1.ԭ���ڴ��ָ�� 2.�ڴ�����֮����ܴ�С		
	int* p2 = realloc(p, sizeof(int) * (len + addLen));
	if (p2 == NULL){
		printf("���·���ʧ�ܣ�������ô���ݲ����ҡ�����");
	}
	//���·����ڴ�����������
	//��С����С����һ�������ݻᶪʧ
	//���󣬣������ģ�
	//1.�����ǰ�ڴ�κ�������Ҫ���ڴ�ռ䣬ֱ����չ����ڴ�ռ䣬realloc����ԭָ��
	//2.�����ǰ�ڴ�κ���Ŀ����ֽڲ�������ô��ʹ�ö��еĵ�һ���ܹ�������һҪ����ڴ�飬��Ŀǰ�����ݸ��Ƶ��µ�λ�ã�����ԭ�������ݿ��ͷŵ��������µ��ڴ��ַ
	//3.�������ʧ�ܣ�����NULL��ԭ����ָ����Ȼ��Ч

	//���¸�ֵ
	i = 0;
	printf("--------------------------\n");
	for (; i < len + addLen; i++){
		p2[i] = rand() % 200;
		printf("%d,%#x\n", p2[i], &p2[i]);
	}

	//�ֶ��ͷ��ڴ�
	if (p != NULL){
		free(p);
		p = NULL;
	}	
	if (p2 != NULL){
		free(p2);
		p2 = NULL;
	}

	getchar();
}
*/

//�ڴ����ļ���ע��ϸ��
//1.���ܶ���ͷ�
//2.�ͷ���֮��ָ����Ȼ��ֵ������ָ����NULL����־�ͷ����
//3.�ڴ�й¶��p���¸�ֵ֮����free����û�������ͷ��ڴ棩
/*
void main(){
	int len;
	printf("��������ĳ��ȣ�");
	scanf("%d", &len);

	int* p = malloc(len * sizeof(int));		
	int i = 0;
	for (; i < len; i++){
		p[i] = rand() % 100;
		printf("%d,%#x\n", p[i], &p[i]);
	}

	if (p != NULL){
		free(p);
		p = NULL;
	}

	getchar();
}
*/

void main(){
	//40M
	int* p1 = malloc(1024 * 1024 * 10 * sizeof(int));
	free(p1);
	p1 = NULL;
	printf("%#x\n",p1);

	//80M
	p1 = malloc(1024 * 1024 * 10 * sizeof(int) * 2);
	
	free(p1);
	p1 = NULL;

	getchar();
}