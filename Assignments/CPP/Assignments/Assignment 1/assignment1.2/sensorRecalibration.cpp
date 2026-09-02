#include <iostream>
using namespace std;

//Original bug - call by Value
void resetSensorPairV1(int reading1, int reading2){
    cout << "--- V1: Call by Value ---" << endl;
    cout << "Before: A = " << reading1 << " B = " << reading2 << endl;
    int temp;
    temp = reading1;
    reading1 = reading2;
    reading2 = temp;
    //cout << "After:  A = " << reading1 << " B = " << reading2 << "   <- Value Unchanged" << endl;
}

//Fix 1 Call by Refernce
void resetSensorPairV2(int& reading1, int& reading2){
    cout << "--- V2: Call by Reference ---" << endl;
    cout << "Before: A = " << reading1 << " B = " << reading2 << endl;
    int temp;
    temp = reading1;
    reading1 = reading2;
    reading2 = temp;
    //cout << "After:  A = " << reading1 << " B = " << reading2 << "   <- Value Swap" << endl;
}

//Fix 1 Call by pointer
void resetSensorPairV3(int* reading1, int* reading2){
    cout << "--- V1: Call by Pointer ---" << endl;
    cout << "Before: A = " << *reading1 << " B = " << *reading2 << endl;
    int temp;
    temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;
    //cout << "After:  A = " << *reading1 << " B = " << *reading2 << "   <- Value Swap Back" << endl;
}

int main(){
    int a = 55;
    int b = 12;
    resetSensorPairV1(a, b);
    cout << "After:  A = " << a << " B = " << b << "   <- Value Unchanged" << endl;
    
    /*Why V1 is Failed:
    in resetSensorPairV1() function the value is changed.
    But, when we call in main() the value didnt changed.
    The reason behind it - in function the logic is right,
    it does swap values, but only limited to function, 
    out the function value didn't change cause its address didn't get swap,
    There only stored value swap for that limited scope of function,
    but in V2 and V3 we change the address of variables so it get swap permanantly*/

    resetSensorPairV2(a, b);
    cout << "After:  A = " << a << " B = " << b << "   <- Value Swap" << endl;

    resetSensorPairV3(&a, &b);
    cout << "After:  A = " << a << " B = " << b << "   <- Value Swap Back" << endl;

    return 0;
}
