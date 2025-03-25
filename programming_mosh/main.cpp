#include <iostream>

int main() {
    int dile_size=0;
    double time=9.99;
    std::cout<<time<<"\n";
    std::cout << "Hello, World!" << std::endl;
    //swapping values
    int a=1;
    int b=2;
    int temp=a;
    a=b;
    b=temp;
    std::cout<<a<<"\n"<<b<<"\n";
    //constant variable
    const double pi=3.14;
    //notations
    int file_size; //snake case
    int FileSize; //pascal case, use for name the classes
    int fileSize; //camel case, use for name the variable and constants
    int iFileSize; //hangarian case

    //mathematical operations
    int x=10;
    int y=3;
    int z=x/y;
    std::cout<<z<<"\n";
    double Z=x/y;
    std::cout<<Z<<"\n";
    double X=10;
    double Y=3;
    double zz=X/y;
    double ZZ=x/Y;
    std::cout<<zz<<"\n";
    std::cout<<ZZ<<"\n";

    int t=10,r=10;
    int q=t++;  //t=11,q=10
    int e=++r;  //r=11,e=11
    std::cout<<t<<":"<<q<<"\n"<<r<<":"<<e<<"\n";

    double c=10,d=5;
    double s=(c+10)/(3*d);
    std::cout<<s<<"\n";

    //output
    int g=10;
    int h=20;
    std::cout<<"g="<<g<<std::endl;
    std::cout<<"h="<<h<<std::endl;
    //or
    std::cout<<"g="<<g<<std::endl
             <<"h="<<h<<std::endl;




    return 0;
}
