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
  comeback:
  cout<<"Enter month number(starting from 1):";
  cin>>month_number;
  if(month_number<1 || month_number>12)
  {
    cout<<"\nEnter a valid month"<<endl;
    goto comeback;
  }
  cout<<"\nEnter rainfall (in mm):";
  cin>>rain_mm;
  r1.setMonthAmount(month_number,rain_mm);

  cout<<"\n Enter again? (n to exit)";
  cin>>c;
}while(c!='n');
  cout<<"\nEnter the month number to get data:";
  cin>>month_number;
  r1.getMonthAmount(month_number);
  cout<<"\nLowest rainfall is :";
  r1.getLowest();
  cout<<"\nHighest rainfall is :";
  r1.getHighest();
  cout<<"\nMean rainfall is :";
  r1.getMean();
  cout<<"\n\n\nThe bar chart is as follows "<<endl;
  r1.outputBarChart();
}
