#include <iostream>
using namespace std;

class Date {
public:
	//全缺省默认构造
	Date(int year = 2020, int month = 5, int day = 28)
		:_year(year)
		, _month(month)
		, _day(day)
		cnt++;
	{}
	//拷贝构造
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
//类外初始化
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
	//内部类：在一个类内部定义一个新的类
	//内部类天然的作为外部类的友元类
	//内部类作为一个独立的类存在，不附属于外部类
	//外部类不能看作内部类的友元类，对于内部类的成员没有特殊的访问权限，需要遵循访问限定符的限制
	class D
	{
	public:
		void fun(const C& c)
		{
			//可以通过外部类对象访问外部类的私有成员
			cout << c._color << endl;
			cout << c._c << endl;
			cout << c._sc << endl;
			cout << C::_sc << endl;
			//可以直接访问外部类的static成员
			cout << _sc << endl;

		}
	private:
		int _d;
	};
private:
	int _c;
	static int _sc;
	Color _color;
	//内部类可以在类的任何地方定义
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