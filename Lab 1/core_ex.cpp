#include<iostream>
#include<array>
#include "core_ex.h"
using namespace std;

  void rainfall::getMonthAmount(int month_no)
    {
        switch(month_no)
        {
            case 1: std::cout<<"January's rainfall:"<<m_rainfall[0]<<endl;
            break;

            case 2: std::cout<<"February's rainfall:"<<m_rainfall[1]<<endl;
            break;

            case 3: std::cout<<"March's rainfall:"<<m_rainfall[2]<<endl;
            break;

            case 4: std::cout<<"April's rainfall:"<<m_rainfall[3]<<endl;
            break;

            case 5: std::cout<<"May's rainfall:"<<m_rainfall[4]<<endl;
            break;

            case 6: std::cout<<"June's rainfall:"<<m_rainfall[5]<<endl;
            break;

            case 7: std::cout<<"July's rainfall:"<<m_rainfall[6]<<endl;
            break;

            case 8: std::cout<<"August's rainfall:"<<m_rainfall[7]<<endl;
            break;

            case 9: std::cout<<"September's rainfall:"<<m_rainfall[8]<<endl;
            break;

            case 10: std::cout<<"October's rainfall:"<<m_rainfall[9]<<endl;
            break;

            case 11: std::cout<<"November's rainfall:"<<m_rainfall[10]<<endl;
            break;

            case 12: std::cout<<"December's rainfall:"<<m_rainfall[11]<<endl;
            break;

            default: std::cout<<"-1 \n Invalid option";
            break;
        }
    }
  void rainfall::setMonthAmount(int month_no,double month_rainfall)
    {
    	m_rainfall[month_no - 1]=month_rainfall;
    }
  void rainfall::getHighest()
    {
    	double max=m_rainfall[0];
    	int month;
    	for(int i=0;i<12;i++)
    	{
    		if(m_rainfall[i]>max)
    		{	max = m_rainfall[i];
    			month=i;
    		}
    	}
    	cout<<"Maxiumum rainfall was in "<<month<<" with a rainfall of "<<m_rainfall[month]<<"mm."<<endl;
    }
  void rainfall::getLowest()
    {
    	double min=m_rainfall[0];
    	int month;
    	for(int i=0;i<12;i++)
    	{
    		if(m_rainfall[i]<min)
    		{	min = m_rainfall[i];
    			month=i;
    		}
    	}
    	cout<<"Minimum rainfall was in "<<month<<" with a rainfall of "<<m_rainfall[month]<<"mm."<<endl;
    }
  void rainfall::getMean()
    {
    	double mean=0;
    	for(int i=0;i<12;i++)
    	{
    		mean=mean+m_rainfall[i];
    	}
    	cout<<"The average rainfall was "<<mean<<"_mm."<<endl;
    }
  void rainfall::outputBarChart()
    {
    /*  cout << "\n Rainfall distribution:" << endl;
      /* stores frequency of marks in each range of 10 marks
      const size_t frequencySize = 5;
      array<unsigned int, frequencySize> frequency = { }; // init to 0s
      /* for each mark, increment the appropriate frequency
      for (double rain : m_rainfall)
      {
        if (rain<60)
        frequency[0]=1;
        else if (rain>=60 && rain <90)
        frequency[1]=2;
        else if (rain>=90 && rain <120)
        frequency[2]=3;
        else if (rain>=120 && rain<150)
        frequency[3]=4;
        else if (rain>=150)
        frequency[4]=5;
        else
        cout<<"invalid rain parameters";
      }
      /* for each mark frequency, print bar in chart
      for (size_t count = 0; count < 12; ++count) {
        /* output bar labels ("0-9:", ..., "90-99:", "100:" )
        if (count==0)
        cout << " January";
        else if (count==1)
        cout << " February ";
        else if (count==2)
        cout << " March ";
        else if (count==3)
        cout << " April ";
        else if (count==4)
        cout << " May ";
        else if (count==5)
        cout << " June ";
        else if (count==6)
        cout << " July ";
        else if (count==7)
        cout << " August ";
        else if (count==8)
        cout << " September ";
        else if (count==9)
        cout << " October ";
        else if (count==10)
        cout << " November ";
        else if (count==11)
        cout << " December ";
        else
        cout << "invalid count";
        /* print bar of asterisks
        for (unsigned int stars = 0; stars < frequency[frequencySize]; ++stars)
          cout << '*';
        cout << endl; // start a new line of output
*/
    
    }
  }
