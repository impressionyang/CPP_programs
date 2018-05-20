#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Date;
class Time
 {public:
   Time(int,int,int);
   friend void display( Date &d, Time &t);
  private:
   int hour;
   int minute;
   int sec;
 };

class Date
 {public:
    Date(int,int,int);
   friend void display( Date &d, Time &t);
  private:
   int month;
   int day;
   int year;
 };


#endif // TIME_H_INCLUDED
