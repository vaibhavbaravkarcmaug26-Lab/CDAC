#include <iostream>
using namespace std;

int main(){
    int totalRooms = 3;
    //cin >> totalRooms;
    int totalFloors = 3;
    //cin >> totalFloors;

    float build[totalRooms][totalFloors];
    for(int i = 0; i < totalFloors; i++){
        for(int j = 0; j < totalRooms; j++){
            cout << "Enter the Tempreture of : " << i+1 << j+1 << ": " << endl;
            cin >> build[i][j];
        }
    }
    cout << "        " << "Room1      " <<"Room2     " <<"Room3     "<<endl;
    for(int i = 0; i < totalFloors ; i++){
        cout<< "Floor " << i + 1 << ": ";
        for(int j = 0; j < totalRooms; j++){
            cout<< build[i][j] << "     ";
        }
        cout << endl;
    }

    float maxTemp  = build[0][0];
    int floor = 0;
    int room = 0;
    int hottestRoom = 0;
    for(int i = 0; i < totalFloors; i++){
        for(int j = 0; j < totalRooms; j++){
            if(build[i][j] > maxTemp){
                maxTemp = build[i][j];
                floor = i;
                room = j;
                if(build[i][j] > 30){
                    hottestRoom += 1;
                }
            }
        }
    }
    cout << "Hottest Room: " << "Floor " << floor + 1 << ", Room " << room + 1 << " -> " << maxTemp <<" C"<< endl;

    float floor1 = (build[0][0] + build[0][1] + build[0][2])/3.0;
    float floor2 = (build[1][0] + build[1][1] + build[1][2])/3.0;
    float floor3 = (build[2][0] + build[2][1] + build[2][2])/3.0;

    if(floor1 > floor2 && floor1 > floor3){
        cout << "Hottest Floor : " << "Floor " <<  floor << "(avg " << floor1 << " )" << endl;
    }else if(floor2 > floor1 && floor2 > floor3){
        cout << "Hottest Floor : " << "Floor " <<  floor << "(avg " << floor2 << " )" << endl;
    }else if(floor3 > floor1 && floor3 > floor2){
        cout << "Hottest Floor : " << "Floor " <<  floor << "(avg " << floor3 << " )" << endl;
    }
    cout << "Rooms at Warning or above: " << hottestRoom << endl;
    return 0;
}