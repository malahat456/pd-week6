#include <iostream>
using namespace std;
string percent(int marks1,int marks2,int marks3,int marks4,int marks5);
main()
{
   int marks1, marks2, marks3, marks4, marks5;
   string name;
   string result,grade;
   cout << "Enter the name";
   cin >> name;
   cout << "Enter subject 1 marks: ";
   cin >> marks1;
   cout << "Enter subject 2 marks: ";
   cin >> marks2;
   cout << "Enter subject 3 marks: ";
   cin >> marks3;
   cout << "Enter subject 4 marks: ";
   cin >> marks4;
   cout << "Enter subject 5 marks: ";
   cin >> marks5;
   result = percent( marks1, marks2, marks3, marks4, marks5);
   cout << result;
}

string percent(int marks1,int marks2,int marks3,int marks4,int marks5)
{
   int mark1, mark2, mark3, mark4, mark5;
   string result1;
   float percentage;
   float total;
   total = mark1 + mark2 + mark3 + mark4 + mark5;
   percentage = ((mark1 + mark2 + mark3 + mark4 + mark5) / 500) * 100;
   if (percentage >= 90 && percentage < 100)
   {
      result1 = "A+";
   }
   if (percentage >= 80 && percentage < 90)
   {
      result1 = "A";
   }
   if (percentage >= 70 && percentage < 80)
   {
      result1 = "B";
   }
   if (percentage >= 60 && percentage < 70)
   {
      result1 = "C";
   }
   if (percentage >= 50 && percentage < 60)
   {
      result1 = "D";
   }
   if (percentage >= 40 && percentage < 50)
   {
      result1 = "E";
   }
   if (percentage < 40)
   {
      result1 = "F";
   }
   return result1;
}