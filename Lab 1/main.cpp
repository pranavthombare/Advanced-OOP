#include<iostream>
#include"core_ex.h"

using namespace std;

int main()
{
  system("clear");
  rainfall r1;
  int month_number;
  double rain_mm;
  char c;
  do{
  cout<<"Enter month number(starting from 1):";
  cin>>month_number;
  cout<<"\n Enter rainfall (in mm):";
  cin>>rain_mm;
  r1.setMonthAmount(month_number,rain_mm);

  cout<<"\n Enter again (y or n)?";
  cin>>c;
}while(c!='n');
  cout<<"\n Enter the month number to get data:";
  cin>>month_number;
  r1.getMonthAmount(month_number);
  r1.outputBarChart();
}
