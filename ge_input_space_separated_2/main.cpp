#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector <int> values;
    cout<<"enter valuse:";
    int currentvalue;
    while (cin>>currentvalue) {
        values.push_back(currentvalue);
        if (cin.peek() == '\n') {
            break;
        }
    }
    int Array[10000];
    int numberOfElement=0;
    for (int val:values){
        Array[numberOfElement]=val;
        numberOfElement++;
    }
    cout<<numberOfElement<<"\n";
    int array[numberOfElement];
    for (int i=0;i<numberOfElement;i++){
        array[i]=Array[i];
        cout<<array[i]<<" ";

    }
    cout<<"\n";

    for (int i=0;numberOfElement>i;i++){
        cout<<array[i]<<" ";

    }
    return 0;
}