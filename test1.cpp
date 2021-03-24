#include <iostream>
#include<vector>

using namespace std;

class Numclass {
    public:
        int real;
        int imaginary;

//Default Constructor
        Numclass(){

        }  
    Numclass(int realNum, int imaginaryNum) {
           real = realNum;
           imaginary = imaginaryNum;
    }

    Numclass operator+ (Numclass n) {
        
        Numclass temp;

        temp.real = real + n.real ;
        temp.imaginary = imaginary + n.imaginary;

        return temp;
    }


    friend ostream &operator<< (ostream &output, Numclass &n) {
        
        output<<"("<<n.imaginary<<","<<n.real<<")";

    return output;
    }

    friend istream &operator>> (istream &input, Numclass &inN) {
        
        input>>inN.imaginary>>inN.real;

        return input;
    }


};


int main() {

    Numclass num1;
    cout<<"Select set 1 : ";
    cin>>num1;

    Numclass num2;
    cout<<"Select set 2 : ";
    cin>>num2;

    Numclass num3;
    num3 = num1+num2;

    cout<<"Result is: "<< num3;


    return 0;
}