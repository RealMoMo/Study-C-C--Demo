#include "stdlib.h"
#include "stdio.h"

//�����壨�����壩
//��ͬ���͵ı�����ͬռ��һ���ڴ棨�໥���ǣ������ϱ����κ�ʱ��ֻ��һ����Ա���ڣ���ʡ�ڴ�
//����������Ĵ�С=���ĳ�Ա��ռ���ֽ���
//������ͬ��һ������
/*
union  MyValue{
	int x;
	int y;
	double z;
};

void main(){
	union MyValue d1;
	d1.x = 90;
	d1.y = 100; //���һ�θ�ֵ��Ч
	//d1.z = 23.8;

	printf("%d,%d,%lf\n",d1.x,d1.y,d1.z);
	system("pause");
}
*/

/*
typedef union jvalue {
	jboolean    z;
	jbyte       b;
	jchar       c;
	jshort      s;
	jint        i;
	jlong       j;
	jfloat      f;
	jdouble     d;
	jobject     l;
} jvalue;
*/

//ö�٣��о����е������
//�޶�ֵ����֤ȡֵ�İ�ȫ��
//enumeration
//enum Day
//{
//	Monday = 0,
//	Tuesday = 1,
//	Wednesday = 2,
//	Thursday = 3,
//	Friday = 4,
//	Saturday = 5,
//	Sunday = 6
//};
/*
enum Day
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};


void main(){
	//ö�ٵ�ֵ�������������е�ֵ
	enum Day d = Monday;
	printf("%#x,%d\n",&d,d);
	
	getchar();
}
*/