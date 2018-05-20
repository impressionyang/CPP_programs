#include <iostream>
#include"Time.h"
using namespace std;

 Time::Time(int h,int m,int s)
 {hour=h;
  minute=m;
  sec=s;
 }

Date::Date(int y,int m,int d)
 {month=m;
  day=d;
  year=y;
 }

void display(Date &d,Time &t)
 {
  cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
  cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
 }
