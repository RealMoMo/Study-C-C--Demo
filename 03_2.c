#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

//ʹ���ַ�����洢�ַ���(�ַ������ݿ��Ը�)
/*
void main(){
	//char str[] = {'c','h','i','n','a','\0'};
	//char str[6] = { 'c', 'h', 'i', 'n', 'a' };
	char str[10] = "china";
	//�����޸�
	str[0] = 's';

	printf("%s\n",str);
	printf("%#x\n", str);
	getchar();
}
*/

//�ַ�ָ�루�ַ������ݲ������޸ģ�
/*
void main(){
	//�ڴ���������
	char *str = "how are you?";

	//�������޸�
	//str += 1;
	//*str = 'y';
	printf("%s\n", str);
	printf("%#x\n", str);

	//ʹ��ָ��ӷ�����ȡ�ַ���
	str += 3;
	while (*str){
		printf("%c",*str);
		str++;
	}
	printf("\n������");
	getchar();
}
*/

//strcat�ַ���ƴ�Ӻ���
//����API�ĵ���
//http://www.kuqin.com/clib/string/strcpy.html
/*
void main(void){
	char dest[50];	
	char *a = "china";
	char *b = " is powerful!";
	strcpy(dest, a);
	strcat(dest, b);
	printf("%s\n", dest);

	system("pause");
}
*/


//strchr��һ�����в��Ҹ����ַ��ĵ�һ��ƥ��֮��
/*
void main(void){
	char *str = "I want go to USA!";
	printf("%#x\n", str);
	//UԪ�ص�ָ��
	//str+3
	char* p = strchr(str, 'w');
	if (p){
		printf("����λ�ã�%d\n", p - str);
	}
	else{
		printf("û���ҵ�");
	}

	system("pause");
}
*/

//strstr ���ַ���haystack��Ѱ��needle��һ�γ��ֵ�λ��

void main(void){
	char *haystack = "I want go to USA!";
	char *needle = "to";
	//UԪ�ص�ָ��

	char* p = strstr(haystack, needle);
	if (p){
		printf("����λ�ã�%d\n", p - haystack);
	}
	else{
		printf("û���ҵ�");
	}

	system("pause");
}