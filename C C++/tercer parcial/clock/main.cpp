#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
  int seg_prev=0;
  while(1)
  {
    int seg, min, hrs;
    string str;

    time_t total_seg=time(0);

    struct tm* ct=localtime(&total_seg);

    seg=ct->tm_sec;
    min=ct->tm_min;
    hrs=ct->tm_hour;

    if(hrs>=12){
      str="PM";
    }else{
      str="AM";
    }
    hrs=hrs>12?hrs-12:hrs;

    if(seg==seg_prev+1 || (seg_prev==59 && seg==0))
    {
      system("cls");
      cout<< (hrs<10?"0":"") << hrs <<":" << (min<10?"0":"") << min << ":" << (seg<10?"0":"") << seg << " " << str <<endl;
    }

    seg_prev=seg;

  }

  return 0;
}
