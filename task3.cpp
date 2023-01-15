#include<iostream>
using namespace std;
string sign(int day,string month);
main()
{
    int day;
    string month,result;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;
    result=sign( day, month);
    cout<<result;
}
string sign(int day,string month)
{
    string result1;
    if((day>=21 && day<=31) &&( month=="march")||(day>=1 && day<=19)&&month=="april") 
    { 
        result1="Aries";
    }
    if((day>=20 && day<=31)&&(month=="april")||(day>=1 && day<=20)&& month=="may") 
    { 
        result1="Taurus";
    }
    if((day>=21 && day<=31)&&(month=="may")||(day>=1 &&day<=20)&& month=="june") 
    { 
        result1="Gemini";
    }
    if((day>=21 && day<=31)&&(month=="june")||(day>=1 &&day<=22)&& month=="july") 
    { 
        result1="Cancer";
    }
   if((day>=23 && day<=31)&&(month=="july")||(day>=1 &&day<=22)&& month=="august")  
    { 
        result1="Leo";
    }
    if((day>=23 && day<=31)&&(month=="august")||(day>=1 &&day<=22)&& month=="september")
    { 
        result1="Virgo";
    }
    if((day>=23 && day<=31)&&(month=="september")||(day>=1 &&day<=22)&& month=="october")
    { 
        result1="Libra";
    }
    if((day>=23 && day<=31)&&(month=="october")||(day>=1 &&day<=21)&& month=="november")
    { 
        result1="Scorpio";
    }
    if((day>=22 && day<=31)&&(month=="november")||(day>=1 &&day<=21)&& month=="december")   
    { 
        result1="Sagittarius";
    }
    if((day>=22 && day<=31)&&(month=="december")||(day>=1 &&day<=19)&&month=="january")
    { 
        result1="Capricorn";
    }
    if((day>=20 && day<=31)&&(month=="january")||(day>=1 &&day<=18)&&month=="february")
    { 
        result1="Aquarius";
    }
    if((day>=19 && day<=31)&&(month=="february")||(day>=1 &&day<=20)&&month=="march")
    { 
        result1="Pisces";
    }
return result1;




}