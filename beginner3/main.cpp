#include <iostream>
using namespace std;

int main()
{
    cout<<(5==10)<<endl;
    cout<<(10>5)<<endl;
    cout<<((5>=10)&&(5<=10))<<endl;

    int x=5;
    cout<<x;
    int y=3;
    cout<<(x>3&&x<10)<<endl;
    cout<<(x>3||x<4)<<endl;
    cout<<(!(x>3&&x<10))<<endl;

    //Conditional statements:

    int time=20;
    if (time<18){
        cout<<"Good day.\n";
    }else{
        cout<<"Good evening.\n";
    }

    int Time=22;
    if (Time<10){
        cout<<"Good morning\n";
    }else if(Time<20){
        cout<<"Good day.\n";
    }else{
        cout<<"Good evening.\n";
    }

    int TimE=20;
    string result=(TimE<18)?"Good day.":"Good evening";
    cout<<result;


    return 0;




}
