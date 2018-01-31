#include <iostream>

using namespace std;

////���������
//class Point{
//public:
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0){
//		this->x = x;
//		this->y = y;
//	}
//	void myprint(){
//		cout << x << "," << y << endl;
//	}
//};
//
////����+��  ��ע�⣺���������ã�Ҳ����ֱ�Ӵ����󣬵��м���̻��ж���Ŀ�����
//Point operator+(Point &p1, Point &p2){
//	Point tmp(p1.x + p2.x, p1.y + p2.y);
//	return tmp;
//}
//
////����-��
//Point operator-(Point &p1, Point &p2){
//	Point tmp(p1.x - p2.x, p1.y - p2.y);
//	return tmp;
//}
//
//void main(){
//	Point p1(10, 20);
//	Point p2(20, 10);
//
//	Point p3 = p1 + p2;
//
//	p3.myprint();
//
//	system("pause");
//} 



//��Ա���������������
/*
class Point{
public:
int x;
int y;
public:
Point(int x = 0, int y = 0){
this->x = x;
this->y = y;
}
//��Ա���������������
Point operator+(Point &p2){
Point tmp(this->x + p2.x, this->y + p2.y);
return tmp;
}
void myprint(){
cout << x << "," << y << endl;
}
};

void main(){
Point p1(10, 20);
Point p2(20, 10);

//����������أ����ʻ��Ǻ�������
//p1.operator+(p2)
Point p3 = p1 + p2;

p3.myprint();

system("pause");
}
*/

//������˽��ʱ��ͨ����Ԫ����������������
class Point{
	friend Point operator+(Point &p1, Point &p2);
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}
	void myprint(){
		cout << x << "," << y << endl;
	}
};

Point operator+(Point &p1, Point &p2){
	Point tmp(p1.x + p2.x, p1.y + p2.y);
	return tmp;
}

void main(){
	Point p1(10, 20);
	Point p2(20, 10);

	//����������أ����ʻ��Ǻ�������
	//p1.operator+(p2)
	Point p3 = p1 + p2;

	p3.myprint();

	system("pause");
}
