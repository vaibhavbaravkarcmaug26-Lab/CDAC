#include <iostream>
using namespace std;

bool parsePacker(const int* rawData, int size, int** outMin, int** outMax){
    if(size <= 0){
        return false;
    }
    *outMin = const_cast<int*>(rawData);
    *outMax = const_cast<int*>(rawData);
    for(int i = 0; i < size; i++){
        if(*(rawData + i) < **outMin){
            *outMin = const_cast<int*>(rawData);
        }

        if(*(rawData + i) > **outMax){
           *outMax = const_cast<int*>(rawData);
        }
    }
    return true;
    
}

int main(){
    int packet[] = {45, 12, 67,8, 55, 31};
    int* minPtr = nullptr;
    int* maxPtr = nullptr;

    if(parsePacker(packet, 6, &minPtr, &maxPtr)){
        cout << "Calibration Min: " << *minPtr << endl;
        cout << "Calibration Max: " << *maxPtr << endl;
    }

    return 0;
}