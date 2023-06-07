#include<iostream>

using namespace std;

int main(){
    int month, day_num;
    cin>>month>>day_num;
    if(month == 1 && day_num >= 21 || month == 2 && day_num <= 18) cout<<"Aquarius\n";
    if(month == 2 && day_num >= 19 || month == 3 && day_num <= 20) cout<<"Pisces\n";
    if(month == 3 && day_num >= 21 || month == 4 && day_num <= 20) cout<<"Aries\n";
    if(month == 4 && day_num >= 21 || month == 5 && day_num <= 21) cout<<"Taurus\n";
    if(month == 5 && day_num >= 22 || month == 6 && day_num <= 21) cout<<"Gemini\n";
    if(month == 6 && day_num >= 22 || month == 7 && day_num <= 22) cout<<"Cancer\n";
    if(month == 7 && day_num >= 23 || month == 8 && day_num <= 23) cout<<"Leo\n";
    if(month == 8 && day_num >= 24 || month == 9 && day_num <= 23) cout<<"Virgo\n";
    if(month == 9 && day_num >= 24 || month == 10 && day_num <= 23) cout<<"Libra\n";
    if(month == 10 && day_num >= 24 || month == 11 && day_num <= 22) cout<<"Scorpio\n";
    if(month == 11 && day_num >= 23 || month == 12 && day_num <= 21) cout<<"Sagittarius\n";
    if(month == 12 && day_num >= 22 || month == 1 && day_num <= 20) cout<<"Capricorn\n";
}