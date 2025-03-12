#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> Merge(vector <int> L ,vector <int> R, vector <int> Array){
    int size_L=L.size();
    int size_R=R.size();
    int i=0;
    int j=0;
    int k=0;
    while(i<size_L&&j<size_R){
        if (L[i]<R[j]){
            Array[k]=L[i];
            i=i+1;
        }
        else{
            Array[k]=R[j];
            j=j+1;
        }
        k=k+1;

    }
    return Array;
}





    vector <int> Left;
    Left={2,4,6,8,10};
    vector <int> Right;
    Right={1,3,5,7,9,11};
    Arr=Merge(Left,Right,Arr);
    for (int i=0;i<Arr.size();i++){
        cout<<Arr[i]<<" ";
    }



    return 0;
}
