#include<iostream>
#include<string>
using namespace std;

class TimeConverter
{
    public:
    void sectohms(){
        int sec;
        cout<<"From seconds to HH:MM:SS\n";
        cout<<"Enter total seconds  : ";
        cin>>sec;

        int hours;
        hours=sec/3600;
        sec=sec%3600;

        int minutes;
        minutes=sec/60;
        sec=sec%60;

        cout<<"HH:MM:SS : "<<hours<<":"<<minutes<<":"<<sec<<"\n";

    }
    void hmstosec(){

        int hours;
        cout << "From HH:MM:SS to seconds\n";
        cout<<"Enter hours : ";
        cin>>hours;

        int minutes;
        cout<<"Enter minutes : ";
        cin>>minutes;

        int seconds;
        cout<<"Enter seconds : ";
        cin>>seconds;

        cout << "Total seconds : "<<hours * 3600 + minutes * 60 + seconds<<"\n";
    }

    
};

int main(){
    TimeConverter tc;
    tc.sectohms();
    tc.hmstosec();

    return 0;
}