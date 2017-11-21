#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//�ַ�����غ���

//strcat�ַ���ƴ�Ӻ���
//����API�ĵ���
//http://www.kuqin.com/clib/string/strcpy.html

void main(void){
	char dest[50];
	char *a = "china";
	char *b = " is powerful!";
	strcpy(dest,a);
	strcat(dest,b);
	printf("%s\n",dest);

	system("pause");
}


//strchr��һ�����в��Ҹ����ַ��ĵ�һ��ƥ��֮��

void main(void){
	char *str = "I want go to USA!";
	//UԪ�ص�ָ��
	//str+3
	char* p = strchr(str,'w');
	if (p){
		printf("����λ�ã�%d\n", p - str);
	}
	else{
		printf("û���ҵ�");
	}

	system("pause");
}


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

//strcmp �Ƚ��ַ���  strcmpi �Ƚ��ַ��������Դ�Сд
void main(void){
	char *str1 = "abc";
	char *str2 = "ABC";
	//int r = strcmpi(str1, str2);
	int r = _strcmpi(str1, str2);
	printf("%d\n",r);
	//str1 > str2
	if (r > 0){
		printf("str1 ����str2\n");
	}
	else if (r == 0){
		printf("str1 ����str2\n");
	}
	//str1 < str2
	else if (r < 0){
		printf("str1 С��str2\n");
	}

	system("pause");
}

//strset ���ַ���s�е������ַ������ó��ַ�c
void main(void){
	char str[] = "internet change the world!";
	_strset(str,'w');
	printf("%s\n",str);
	system("pause");
}

//strrev ���ַ���s�������ַ���˳��ߵ�����
void main(void){
	char str[] = "internet change the world!";
	_strrev(str);
	printf("%s\n", str);
	system("pause");
}

//atoi �ַ���תΪint����
//atol()�����ַ���ת��Ϊ������ֵ
void main(void){
	char* str = "a78";
	//int r = atoi(str);	
	printf("%d\n", r);

	system("pause");
}

// �ַ���תΪdouble����
void main(void){
	char* str = "77b8b";
	char** p = NULL;
	//char* p = str + 2;
	//����˵����strΪҪת�����ַ�����endstr Ϊ��һ������ת�����ַ���ָ��
	double r = strtod(str,p);
	printf("%lf\n", r);
	printf("%#x\n", p);

	system("pause");
}

//struprת��Ϊ��д
void main(void){
	char str[] = "CHINA motherland!";
	_strupr(str);
	printf("%s\n",str);
	system("pause");
}

//ת��ΪСд
void mystrlwr(char str[],int len){
	int i = 0;
	for (; i < len; i++){
		//A-Z ��ĸ a-Z
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i]-'A' + 'a';
		}
	}	

}


void main(void){
	char str[] = "CHINA motherland!";
	mystrlwr(str,strlen(str));
	printf("%s\n", str);
	system("pause");
}

//��ϰ��ɾ���ַ�����ָ�����ַ�
void delchar(char *str, char del){
	char *p = str;
	while (*str != '\0') {
		if (*str != del) {
			*p++ = *str;
		}
		str++;
	}
	*p = '\0';
}


//ɾ�����һ���ַ�
int main()
{
	char str[] = "vencent ppqq";

	delchar(str,'t');
	printf("%s\n", str);
	
	system("pause");
}

//Java String replaceAll 
//StringBuffer buff.deleteCharAt(buff.length()-1);
//ɾ�����һ���ַ�
void main(void){
	char str[] = "internet,";
	str[strlen(str) - 1] = '\0';
	printf("%s\n", str);
		
	//��ҵ��reallocʵ��StringBuffer��ƴ�ӣ�������һ��ʼ����һ���ܴ������
	//�ṹ��StringBuffer 

	system("pause");
}

//memcpy ��src��ָ�ڴ�������count���ֽڵ�dest��ָ�ڴ�����
void main(void){
	char src[] = "C,C++,Java";
	char dest[20] = {0};

	//�ֽ�
	memcpy(dest,src,5);
	
	printf("%s\n",dest);
	system("pause");
}

//memchr ��buf��ָ�ڴ������ǰcount���ֽڲ����ַ�ch��
void main(void){
	char src[] = "C,C++,Java";
	char ch = 'C';

	//�ֽ� (�ֶν�ȡ)
	char* p = memchr(src+3, ch, 5);
	if (p){
		printf("������%d\n", p - src);
	}
	else{
		printf("�Ҳ���\n");
	}

	
	system("pause");
}

//memmove ��src��ָ�ڴ�������count���ֽڵ�dest��ָ�ڴ�����
void main(){
	char s[] = "Michael Jackson!";
	//��ȡ��Ч��	
	memmove(s, s + 8, strlen(s) - 8 - 1);
	s[strlen(s) - 8] = 0;
	printf("%s\n", s);
	getchar();
}

//���ַ���s1��Ѱ���ַ���s2���κ�һ���ַ���ƥ��ĵ�һ���ַ���λ�ã����ַ�NULL����������
void main(){
	char *s1 = "Welcome To Beijing";
	char *s2 = "to"; 
	char *p;

	p = strpbrk(s1, s2);
	if (p)
		printf("%s\n", p);
	else
		printf("Not Found!\n");

	p = strpbrk(s1, "Da");
	if (p)
		printf("%s", p);
	else
		printf("Not Found!");

	getchar();
}











