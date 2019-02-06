#define CORE_EX_H_

#include<string>
#include<iostream>
#include<array>
class rainfall
{
  double m_rainfall[12];
public:

  void getMonthAmount(int month_no);
  void setMonthAmount(int month_no,double month_rainfall);
  void getHighest();
  void getLowest();
  void getMean();
  void outputBarChart();
};
