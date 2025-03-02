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
    int numberOfElement=0;
    for (int val:values){
        numberOfElement++;
    }
    cout<<numberOfElement;
    int array[numberOfElement];
    for (int i=0;i<numberOfElement;i++){
        cout<<values[i]<<"\n";
        array[i]=values[i];

    }

    for (int i=0;numberOfElement>i;i++){
        cout<<array[i]<<" ";

    }
    return 0;
}
