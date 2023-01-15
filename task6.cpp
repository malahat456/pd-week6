#include <iostream>
using namespace std;
float Studio(string month, int days);
float Apartment(string month, int days);
int main()
{

  string month;
  int days;
  float result1;
  float result2;
  cout << "enter month when you have to stay in hotel:";
  cin >> month;
  cout << "enter no of days to stay in hotel :";
  cin >> days;

  result1 = Studio(month, days);
  cout << "Studio:" << result1 << "$" << endl;
  result2 = Apartment(month, days);
  cout << "Apartment:" << result2 << "$";
}
float Studio(string month, int days)
{
  float studioPrice;
  if (month == "May" || month == "October")
  {
    studioPrice = days * 50;
    if (days <= 7)
    {
      studioPrice;
    }
    else if (days> 7 && days <= 14)
    {
      studioPrice = (days * 50) - ((days * 50) * 0.05);
    }
    else if (days > 14)
    {
      studioPrice = (days * 50) - ((days * 50) * 0.30);
    }
  }
  if (month == "June" || month == "September")
  {
    studioPrice = days * 75.20;
    if (days <= 14)
    {
      studioPrice;
    }
    else if (days> 14)
    {
      studioPrice = (days * 75.20) - (days * 75.20) * 0.20;
    }
  }
  if (month == "July" || month == "August")
  {
    studioPrice = days * 76;
  }

  return studioPrice;
}
float Apartment(string month, int days)
{
  float apartmentPrice;

  if (month == "May" || month == "October")
  {
    apartmentPrice = days* 65;
  }
  if (month == "June" || month == "September")
  {
    apartmentPrice = days * 68.70;
  }
  if (month == "July" || month == "August")
  {
    apartmentPrice = days * 77;
  }
  if (days > 14)
  {
    apartmentPrice = apartmentPrice - (apartmentPrice * 0.10);
  }

  return apartmentPrice;
}
