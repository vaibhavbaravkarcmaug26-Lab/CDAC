#include <iostream>
using namespace std;

int main(){
    int statusReg = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg = 0b11001010;

    const int* regPtr1 = &statusReg;
    cout << *regPtr1 << endl;
    //regPtr1 = &dataReg; Variable value can be Modified 
    //*regPtr1 = 10; Pointer value cannod modified.
    //Hence, Address can't modified but value in that address can
    //pointer is const, not changeble
    //value is not const, so it can changed
    cout << "Address of the Status Register: "<< regPtr1 << endl;
    cout << "Value of Status Registerd: " << *regPtr1  << endl;

    int* const regPtr2 = &controlReg;
    //*regPtr2 = 42; Pointer can Modified
    //regPtr2 = &dataReg; Variable can't Modified
    // here const before variable makes it Constant
    // and Pointer before const make it changable
    
    cout <<"Address of the Control Register: "<<regPtr2 << endl;
    cout <<"Value of the Control Register: "<<*regPtr2 << endl;

    const int* const regPtr3 = &dataReg;
    //*regPtr3 = &controlReg; //Pointer is Constant
    //regPtr3 = 10; // Variable is also Constant
    //Here both Pointer and Variable are constant
    cout <<"Address of the Data Register: "<< regPtr3 << endl;
    cout <<"Value of the Data Register: "<< *regPtr3 << endl;


    return 0;
}
