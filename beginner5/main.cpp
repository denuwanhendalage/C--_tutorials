#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;



int main()
{
   string cars[4]={"volvo","bmw","ford","mazda"};
   cout<<cars[0]<<endl;

   int n[10];
   for (int i=0;i<10;i++){
       n[i]=i+100;
   }
   cout<<"Element"<<setw(13)<<"value"<<endl;

   for (int j=0;j<10;j++){
       cout<<setw(7)<<j<<setw(13)<<n[j]<<endl;
   }

   for (int w=0;w<10;w++){
       cout<<w<<" element is:"<<n[w]<<endl;
   }
}
