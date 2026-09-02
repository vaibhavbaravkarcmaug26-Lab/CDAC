#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the total Readings: ";
    cin >> size;
    float acceptArr [size];
    float sum = 0.0f;
    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;
    int skippedError = 0;
    
    if (1 <= size && size <= 100){
        for(int i = 0; i < size; i++){
            cout << "Enter the Readings: ";
            cin >> acceptArr[i];
        }
        cout << endl;
        cout << "Reading Entered: "<< size << endl;
        cout << "Valid Readings: ";
        for(int i = 0; i < size; i++){
            if(acceptArr[i] <= 0){
                skippedError += 1;
                continue;
            }else{
                cout << acceptArr[i] << " ";
            }
        }
        
        cout << endl;
        cout << "Skipped (errors): " << skippedError << endl;
        
        cout << "First critical: ";
        for(int i = 0; i < size; i++){
            if(acceptArr[i] >= 45){
                cout << "Index: " << i << endl;
                break;
            }
        }
        
        cout << endl;
        
        float min = acceptArr[0];
        float avg;
        float max = acceptArr[0];
        for(int i = 0; i < size; i++){
            if(acceptArr[i] > 0){
                if(acceptArr[i] < min){
                    min = acceptArr[i];
                }
                if(acceptArr[i] > max){
                    max = acceptArr[i];
            }
            }
            

            sum += acceptArr[i];
        }
        cout << "Min: " << min << endl;
        avg = sum/(size-skippedError);
        cout << "Avg: " << avg << endl;
        cout << "Max: " << max << endl;

        for (int i = 0; i < size; i++){
            if(acceptArr[i] >=0 && acceptArr[i] <= 30){
                normal += 1;
            }else if(acceptArr[i] <= 40){
                warning += 1;
            }else if(acceptArr[i] <= 60){
                critical += 1;
            }else if(acceptArr[i] > 60){
                shutdown += 1;
            }
        }
        
        cout << "Normal: " << normal << endl;
        cout << "Warning: " << warning << endl;
        cout << "Critical: " << critical << endl;
        cout << "Shutdown: " << shutdown << endl;

    }else{
        cout << "Invalid" ;
    }


    return 0;
}