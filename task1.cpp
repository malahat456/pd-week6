#include<iostream>
using namespace std;
string activity(string temperature,string humidity);
main()
{
    string temperature, humidity,result;
    cout<<"Enter the temperature: ";
    cin>>temperature;
    cout<<"Enter the humidity: ";
    cin>>humidity;
    result=activity( temperature, humidity); 
    cout<<result;
}
string activity(string temperature,string humidity)
{
    string result;
    if(temperature=="warm"&&humidity=="dry")
    {
        result="Play tennis";
    }
    if(temperature=="warm"&&humidity=="humid")
    {
        result="swim";
    }
    if(temperature=="cold"&&humidity=="dry")
    {
        result="Play basketball";
    }
    if(temperature=="cold"&&humidity=="humid")
    {
        result="watch tv";
    }

    return result;
}