#define _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//��ȡ�ı��ļ�
/*
void main(){
	char *path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\friends.txt";
	//��
	FILE *fp = fopen(path,"r");
	if (fp == NULL){
		printf("�ļ���ʧ��...");
		return;
	}
	//��ȡ
	char buff[50]; //����
	while (fgets(buff,50,fp)){
		printf("%s",buff);
	}
	//�ر�
	fclose(fp);
	system("pause");

	getchar();
}
*/

//д���ı��ļ�
/*
void main(){
	char *path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\friends_new.txt";
	//��
	FILE *fp = fopen(path, "w");
	char *text = "hchmily@sina.com,�̻���,ѧ��· 8\n�ſƼ��Ƹ����� A";
	fputs(text,fp);

	//�ر���
	fclose(fp);
	getchar();
}
*/

//��������ļ��洢�������϶��Ƕ�����
//�ı��ļ��Ͷ�����֮�֣���ʵ��һ���߼�֮��
//C��д�ı��ļ���������ļ��Ĳ����������ڻس����з�
//д�ı�ʱ��ÿ����һ��'\n'���Ὣ��ת����'\r\n'(�س�����)
//���ı�ʱ��ÿ����һ��'\r\n'���Ὣ��ת����'\n'

//�ļ�����
/*
void main(){
	char *read_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\liuyan.png";
	char *write_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\liuyan_new.png";
	//�����ļ� b�ַ���ʾ�����������ļ�binary
	FILE *read_fp = fopen(read_path, "rb");
	//д���ļ�
	FILE *write_fp = fopen(write_path, "wb");
	
	//����
	int buff[50]; //��������
	int len = 0; //ÿ�ζ��������ݳ���
	while ((len = fread(buff, sizeof(int), 50, read_fp)) != 0){
		//������������д���µ��ļ�
		fwrite(buff,sizeof(int),len,write_fp);
	}
	//�ر���
	fclose(read_fp);
	fclose(write_fp);
	getchar();
}
*/

//��ȡ�ļ��Ĵ�С
/*
void main(){
	char *read_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\liuyan.png";
	FILE *fp = fopen(read_path, "r");
	//���¶�λ�ļ�ָ��
	//SEEK_END�ļ�ĩβ��0ƫ����
	fseek(fp,0,SEEK_END);
	//���ص�ǰ���ļ�ָ�룬������ļ���ͷ��λ����
	long filesize = ftell(fp);
	printf("%d\n",filesize);

	getchar();
}
*/

//��ϰ���ı��ļ��ӽ���
/*
//���
//����1^1=0, 0^0=0, 1^0=1, 0^1=1 ͬΪ0����ͬΪ1
//����
void crpypt(char normal_path[],char crypt_path[]){
	//���ļ�
	FILE *normal_fp = fopen(normal_path, "r");
	FILE *crypt_fp = fopen(crypt_path, "w");
	//һ�ζ�ȡһ���ַ�
	int ch;
	while ((ch = fgetc(normal_fp)) != EOF){ //End of File
		//д�루������㣩
		fputc(ch ^ 9,crypt_fp);
	}
	//�ر�
	fclose(crypt_fp);
	fclose(normal_fp);
}

//����
void decrpypt(char crypt_path[], char decrypt_path[]){
	//���ļ�
	FILE *normal_fp = fopen(crypt_path, "r");
	FILE *crypt_fp = fopen(decrypt_path, "w");
	//һ�ζ�ȡһ���ַ�
	int ch;
	while ((ch = fgetc(normal_fp)) != EOF){ //End of File
		//д�루������㣩
		fputc(ch ^ 9, crypt_fp);
	}
	//�ر�
	fclose(crypt_fp);
	fclose(normal_fp);

}

void main(){
	char *normal_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\friends.txt";
	char *crypt_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\friends_crypt.txt";
	char *decrypt_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\friends_decrypt.txt";

	//crpypt(normal_path, crypt_path);
	//����
	decrpypt(crypt_path, decrypt_path);

	getchar();
}
*/

//�������ļ��ӽ���
//��ȡ�������ļ��е�����ʱ��һ��һ���ַ���ȡ
//���룺ilovely
/*
void crpypt(char normal_path[], char crypt_path[],char password[]){
	//���ļ�
	FILE *normal_fp = fopen(normal_path, "rb");
	FILE *crypt_fp = fopen(crypt_path, "wb");
	//һ�ζ�ȡһ���ַ�
	int ch;
	int i = 0; //ѭ��ʹ�������е���ĸ�����������
	int pwd_len = strlen(password); //����ĳ���
	while ((ch = fgetc(normal_fp)) != EOF){ //End of File
		//д�루������㣩
		fputc(ch ^ password[i % pwd_len], crypt_fp);
		i++;
	}
	//�ر�
	fclose(crypt_fp);
	fclose(normal_fp);
}

//����
void decrpypt(char crypt_path[], char decrypt_path[],char password[]){
	//���ļ�
	FILE *normal_fp = fopen(crypt_path, "rb");
	FILE *crypt_fp = fopen(decrypt_path, "wb");
	//һ�ζ�ȡһ���ַ�
	int ch;
	int i = 0; //ѭ��ʹ�������е���ĸ�����������
	int pwd_len = strlen(password); //����ĳ���
	while ((ch = fgetc(normal_fp)) != EOF){ //End of File
		//д�루������㣩
		fputc(ch ^ password[i % pwd_len], crypt_fp);
		i++;
	}
	//�ر�
	fclose(crypt_fp);
	fclose(normal_fp);

}

void main(){
	char *normal_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\liuyan.png";
	char *crypt_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\liuyan_crypt.png";
	char *decrypt_path = "E:\\dongnao\\vip\\ndk\\08_08_C_05\\files\\liuyan_decrypt.png";

	//crpypt(normal_path, crypt_path,"iloveqq");
	//����
	decrpypt(crypt_path, decrypt_path,"iloveqq");

	getchar();
}
*/

//��ҵ���ļ��ķָ��Լ��ϲ�



