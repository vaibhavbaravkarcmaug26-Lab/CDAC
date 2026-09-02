#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 4){
        cout << "./sensor_monitor <warn_threshold> <critical_threshold> <num_reading>" << endl;
        cout << "Error: Missing Arguments" << endl;
        return 1;
    }

    // string program_name = "./sensor_monitor";
    int warn_threshold = stoi(argv[1]);
    int critical_threshold = stoi(argv[2]);
    int num_reading = stoi(argv[3]);



    if(warn_threshold > critical_threshold){
        cout << "Error: Warn threshold is higher than critical threshold" << endl;
        return 1;
    }

    if (num_reading < 1 || num_reading > 500){
        cout << "Error: num_reading is out of limit" << endl;
    }


    int warning = 0;
    int normal = 0;
    int critical = 0;
    int shutdown = 0;

    for(int i = 0; i < num_reading; i++){
        int tempreture = rand() % 70;
        if(tempreture <= 30){
            normal += 1;
        }else if(tempreture > 30 && tempreture < 45){
            warning += 1;
        }else if(tempreture >= 45 && tempreture < 60){
            critical += 1;
        }else if(tempreture >= 60){
            shutdown += 1;
        }
    }

    cout  << warn_threshold << " " << critical_threshold << " " << num_reading << endl;
    cout << "Config. :" << "Warn: " << warn_threshold << " Critical: " << critical_threshold << " Readings: " << num_reading << endl;
    cout << "Results :" << "Normal: " << normal << " Warning: " << warning << " Critical : " <<critical << endl;

    


    // cin >> warn_threshold;
    // cin >> critical_threshold;
    // cin >> num_reading;



    // cout << argv[0];
    // cout << argv[1];
    // cout << argv[2];
    // cout << argv[3];

    
    // argc = 4;
    // argv[0] = warn_threshold;
    // argv[1] = critical_threshold;
    // argv[2] = num_reading
    return 0;
}
