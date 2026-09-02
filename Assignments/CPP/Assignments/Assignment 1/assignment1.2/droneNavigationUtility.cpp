#include <iostream>
#include <cmath>
using namespace std;

inline double distanceBetween(double x1, double y1, double x2, double y2){
    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

inline double toRadians(double degrees){
    return degrees*(M_PI / 180.0);
}

inline double clamp(double value, double minVal, double maxVal){
    if(value < minVal){
        return minVal;
    }else if(value > maxVal){
        return maxVal;
    }else{
        return value;
    }
    
}

inline bool isInSafeZone(double x, double y, double cx, double cy, double radius){
    if((x,y) > radius*(cx, cy)){
        return true;
    }else{
        return false;
    }
}

int main(){
    double x = 0.0;
    double y = 0.0;

    double x1 = 7.2;
    double y1 = 6.1;

    double radius = 50.0;
    double degrees = 27.8;
    double cx = 40;
    double cy = 25;
    double value = 5;
    double minVal = 0;
    double maxVal = 7.2;

    cout << "The Distance Between Initial and Final are: " << distanceBetween(x, y, x1, y1) << " units" << endl;
    cout << "Degrees to Radians: " << toRadians(degrees) << endl;
    cout << "The Restricted Minimum and Maximum Value are: " << clamp(value, minVal, maxVal) << endl;
    cout << "The Safe Zone Area is: " << isInSafeZone(x, y, cx, cy, radius) << endl;

    return 0;
}
