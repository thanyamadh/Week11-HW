#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
#include "Time.h"

int main() 
{
  TIME t1,t2,t3;
  /*t1.set_time(15,20,30);
  t2.set_time(5,15,10);*/
  
  cout<<"What time was it?"<<endl;
  t1.getTime(); // รับค่าเวลาเข้ามา
  cout<<"Time1 is ";
  t1.display();
  cout<<"What time is it now?"<<endl;
  t2.getTime(); // รับค่าเวลาเข้ามา
  cout<<"Time2 is ";
  t2.display();
  t3.subtract(t2,t1); //t3=t2-t1
  cout<<"Time diff is ";
  t3.display();
}