#include <iostream>
using namespace std;

class Date {
public:
	//ȫȱʡĬ�Ϲ���
	Date(int year = 2020, int month = 5, int day = 28)
		:_year(year)
		, _month(month)
		, _day(day)
		cnt++;
	{}
	//��������
	Date(const Date& d) {
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cnt++;
	}
private:
	int _year;
	int _month;
	int _day;
	static int cnt;
};
//�����ʼ��
int Date::cnt = 0;
Date fun(Date d) {
	return d;
}
void test() {
	Date d1;
	Date d2 = fun(d1);
	cout << cnt << endl;
}

class C
{
public:
	//�ڲ��ࣺ��һ�����ڲ�����һ���µ���
	//�ڲ�����Ȼ����Ϊ�ⲿ�����Ԫ��
	//�ڲ�����Ϊһ������������ڣ����������ⲿ��
	//�ⲿ�಻�ܿ����ڲ������Ԫ�࣬�����ڲ���ĳ�Աû������ķ���Ȩ�ޣ���Ҫ��ѭ�����޶���������
	class D
	{
	public:
		void fun(const C& c)
		{
			//����ͨ���ⲿ���������ⲿ���˽�г�Ա
			cout << c._color << endl;
			cout << c._c << endl;
			cout << c._sc << endl;
			cout << C::_sc << endl;
			//����ֱ�ӷ����ⲿ���static��Ա
			cout << _sc << endl;

		}
	private:
		int _d;
	};
private:
	int _c;
	static int _sc;
	Color _color;
	//�ڲ������������κεط�����
	class E
	{
	private:
		int _e;
	};
};

class her {
public:
	her(int age = 21,int height = 165,int hair = 20)
		:(_age)age
		,(_height)height
		,(_hair)hair
	{}
	her(const her& h)
	
	{
		_age = h._age;
		_height = h._height;
		_hair = h._hair;
	}
private:
	int _age;
	int _height;
	int _hair;
};