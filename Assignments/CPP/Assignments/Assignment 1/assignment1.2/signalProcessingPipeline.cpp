#include <iostream>
#include <cmath>
using namespace std;

double computeRMS(double* signal, int n){
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += (*(signal+i)) * (*(signal + i));
    }
    cout << endl;
    return sqrt(sum/n);
}

void normalise(double* signal, int n){
    cout << "The Normilise signal is: " << endl;
    double max = abs(*signal);
    for(int i = 0; i < n; i++){
        if(*(signal + i) > max){
            max = *(signal + i);
        }
    }

    for(int i = 0; i < n; i++){
        *(signal + i) = *(signal + i)/max;
        cout << *(signal + i) << " ";
    }
    cout << endl;
}

int countZeroCrossings(double* signal, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(*(signal+i) > 0 && *(signal + (i+1)) < 0 ){
            count += 1;
        }
    }
    cout << "The Count is: " << endl;
    return count;
}

void applyGain(double* signal, int n, double gainFactor){
    cout << "The Apply Gain is: " << endl;
    for(int i = 0; i < n; i++){
       *(signal+i) = *(signal+i) * gainFactor;
       cout << *(signal+i) << " ";
    }
    cout << endl;
}


int main(){
    double gainFactor = 2.0;
    int size;
    cout << "Enter the Readings of the Array: ";
    cin >> size;
    double arr[size];
    cout << "Enter the Values in Arrays: " << endl;
    double *ptrArr = arr;
    for(int i = 0; i < size; i++){
        cin >> *(ptrArr + i);
    }

    cout << "The Array is: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(ptrArr + i) << " ";
    }
    cout << endl;
    normalise(arr, size);
    applyGain(arr, size, gainFactor);
    cout << "The Compute RMS is: "<< computeRMS(arr, size) << endl;
    cout << countZeroCrossings(arr, size);
    return 0;
}

