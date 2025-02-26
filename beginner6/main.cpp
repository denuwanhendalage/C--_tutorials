#include <iostream>
using namespace std;

int max(int num1,int num2)
{
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int minvalue(int num1,int num2){
    if (num1>num2){
        return num2;
    } else{
        return num1;
    }
}
int main()
{
    int a=100;
    int b=200;
    int ret;
    int ret1;

    ret=max(a,b);
    ret1= minvalue(a,b);
    cout<<"Max value is:"<<ret<<endl;
    cout<<"Min value is:"<<ret1<<endl;
    return 0;
}
