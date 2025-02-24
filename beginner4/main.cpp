#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++){
        cout<<i<<"\n";
    }

    int myNumbers[5]={10,20,30,40,50};
    cout<<myNumbers;
    for(int i:myNumbers){
        cout<<i<<"\n";
    }

    int i=0;
    while (i<10){
        cout<<i<<"\n";
        i++;
        if (i==4){
            break;
        }
    }

    while(i<10){
        if(i==4){
            i++;
            continue;
        }
        cout<<i<<"\n";
        i++;
    }

    int I=0;
    while(I<5){
        cout<<I<<"\n";
        I++;
    }

    int t=0;
    do{
        cout<<t<<"\n";
        t++;
    }
    while(t<5);

    for (int r=0;r<3;r++){
        cout<<"Outer:"<<r<<"\n";
        for (int h=0;h<5;h++){
            cout<<"Inner:"<<h<<"\n";
        }
    }

    int d=0;
    int s=0;
    while( d<5){
        cout<<"outr:"<<d<<"\n";
        d++;
        while(s<3){
            cout<<"Innr:"<<s<<"\n";
            s++;
        }
    }

    int day=4;
    switch(day){
        case 1:
        cout<<"Monday";break;
        case 2:
        cout<<"Tuesday";break;
        case 3:
        cout<<"Wednesday";break;
        case 4:
        cout<<"Thursday";break;
        case 5:
        cout<<"Friday";break;
        case 6:
        cout<<"Saturday";break;
        case 7:
        cout<<"Sunday";break;

    }
}
