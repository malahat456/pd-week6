#include<iostream>
using namespace std;
float amount(string fruit,string day,float quantity);
main()
{
    string fruit,day;
    float quantity,result;
    cout<<"Enter the fruit: ";
    cin>>fruit;
    cout<<"Enter the  day: ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    result=amount( fruit, day,quantity);
    cout<<result;
}
float amount(string fruit,string day,float quantity)
{
    float result1;
    if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")
    {
        if(fruit=="banana")
        {
            result1=quantity*2.50;
        }
        if(fruit=="apple")
        {
            result1=quantity*1.20;
        }
        if(fruit=="orange")
        {
            result1=quantity*0.85;
        }
        if(fruit=="grapefruit")
        {
            result1=quantity*1.45;
        }
        if(fruit=="kiwi")
        {
            result1=quantity*2.70;
        }
        if(fruit=="pineapple")
        {
            result1=quantity*5.50;
        }
        if(fruit=="grapes")
        {
            result1=quantity*3.85;
        }
    }
    if(day=="saturday"||day=="sunday")
    {
        if(fruit=="banana")
        {
            result1=quantity*2.70;
        }
        if(fruit=="apple")
        {
            result1=quantity*1.25;
        }
        if(fruit=="orange")
        {
            result1=quantity*0.90;
        }
        if(fruit=="grapefruit")
        {
            result1=quantity*1.60;
        }
        if(fruit=="kiwi")
        {
            result1=quantity*3.00;
        }
        if(fruit=="pineapple")
        {
            result1=quantity*5.60;
        }
        if(fruit=="grapes")
        {
            result1=quantity*4.20;
        }
   }
   return result1;
}
