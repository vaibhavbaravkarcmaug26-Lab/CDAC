#include <iostream>
using namespace std;

int main(){
    double tempDouble = 33.4;
    double tempFahrenheit = (tempDouble * (9.0/5.0)) + 32;
    cout << "Tempreture: " << tempDouble << " C/ " << tempFahrenheit <<" F"<< endl;
    int tempInt = tempDouble;

    int StatusCode;
    if(tempInt < 0){
        StatusCode = -1;
        cout << "Status: SENSOR_ERROR" << endl;
    }else if(tempInt >= 0 && tempInt <= 29){
        StatusCode = 0;
        cout << "Status: Normal" << endl;
    }else if(tempInt >= 30 && tempInt <= 44){
        StatusCode = 1;
        cout << "Status: WARNING" << endl;
    }else if(tempInt >= 45 && tempInt <= 59){
        StatusCode = 2;
        cout << "Status: CRITICAL" << endl;
    }else if(tempInt >= 60){
        StatusCode = 3;
        cout << "Status: SHUTDOWN" << endl;
    }else{
        cout << "Invalid Status tempreture Status" << endl;
    }

    switch(StatusCode){
        case -1:
            cout << "Action: " <<"Sensor Fault Check Wiring" << endl;
            break;

        case 0:
            cout << "Action: " <<"NO Action Required" << endl;
            break;

        case 1:
            cout << "Action: " <<"Alert Sent to Supervisor" << endl;
            break;
            
        case 2:
            cout << "Action: " <<"Cooling System Triggered" << endl;
            break;
        
        case 3:
            cout << "Action: " <<"Emergency Shutdown initiated" << endl;
            break;

        default:
            cout << "Invalid Action" << endl;
        
    }
    

    cout<<"Reading: ";
    (tempInt > 25) ? cout<<"Above Average":cout<<"Below Average";



}