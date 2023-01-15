#include <iostream>
using namespace std;
float charges(char customer, char time, int mins);
main()
{
  char customer, time;
  int mins;
  float result;
  cout << "Enter the type of customer: ";
  cin >> customer;
  cout << "Press D for day time and N for night time call: ";
  cin >> time;
  cout << "Enter the number of minutes: ";
  cin >> mins;
  result = charges(customer, time, mins);
  cout << "The charges are: " << result;
}
float charges(char customer, char time, int mins)
{
  float result1;
  if (customer == 'P')
  {
    if (time == 'D')
    {
      if (mins > 75)
      {
        result1 = (25.00 + (0.10 * (mins - 75)));
      }
      else if (mins <= 75)
      {
        result1 = 25;
      }
    }
    if (time == 'N')
    {
      if (mins > 100)
      {
        result1 = (25 + (0.05 * (mins - 100)));
      }
      else if (mins <= 100)
      {
        result1 = 25;
      }
    }
  }
  if (customer == 'R')
  {
    if (mins > 50)
    {
      result1 = (10 + (0.20 * (mins - 50)));
    }
    else if (mins >= 50)
    {
      result1 = 10;
    }
  }
  return result1;
}
