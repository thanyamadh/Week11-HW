#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class TIME
{
  private: //ไม่เขียนก็เป็น
  int h,m,s;
  public:
    void set_time(int=0,int=0,int=0); //ไม่บังคับใส่ทุกตัว ตัวที่ไม่ใส่เป็น0
    void display();
    void getTime();
    void subtract(class TIME y ,class TIME x);
};

void TIME::set_time(int hour,int min,int sec)
{
  //Concept : if(hour>24) h=0; else h=hour;
  if(sec>=60) 
  {
    s=sec-60;
    min++;
  }
  else if(sec<0)
    s=0;
  else
    s=sec;
  if(min>=60) 
  {
    m=min-60;
    hour++;
  }
  else if(min<0)
    m=0;
  else
    m=min;
  h = hour>24?0:hour;
  h = hour<0?0:hour;
  //s = sec>60?0:sec;
}

void TIME::getTime()
{
  int hour,min,sec;
  cout<<"Hour: ";
  cin >> hour;
  cout<<"Minute : ";
  cin >> min;
  cout<<"Second : ";
  cin >> sec;
  set_time(hour,min,sec);
}

void TIME::subtract(class TIME y ,class TIME x)
{
  int check;
  TIME ans;
  ans.h = y.h-x.h;
  ans.m = y.m-x.m;
  ans.s = y.s-x.s;
  if(ans.m<0) //เช็คติดลบ
  {
    ans.h--;
    check=60;
    while(ans.m<0)
    {
      ans.m++;
      check--;
    }
    ans.m = check;
  }
  ans.s = y.s-x.s;
  if(ans.s<0) //เช็คติดลบ
  {
    ans.m--;
    check=60;
    while(ans.s<0)
    {
      check--;
      ans.s++;
    }
    ans.s = check;
  }
  set_time(ans.h,ans.m,ans.s);
}

void TIME::display()
{
  
  cout<<setfill('0')<< setw(2) << h <<":";
  cout<<setfill('0')<< setw(2) << m <<":";
  cout<<setfill('0')<< setw(2) << s <<endl;
}