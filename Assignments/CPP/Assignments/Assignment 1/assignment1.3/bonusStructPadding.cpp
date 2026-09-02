#include <iostream>
using namespace std;

struct Layout1{char c1; int i; char c2;};//12 bytes
/*explain-
char 1 byte - 1 0 0 0 = 4bytes
int 4 byte -  1 1 1 1 = 4bytes
char 1 byte - 1 0 0 0 = 4bytes
                        12 bytes

like that 1 is occupied memory and 0 is free memory
when we do padding there is equal size to all parameters
*/

struct Layout2{int i; char c1; char c2;};
/*explain -
int 4 byte - 1 1 1 1 = 4bytes
char 1 byte -1 1 0 0 = 4bytes 
char 1 byte- null pad reason that 1 continous next to
              1st char cause its have empty space to access.
*/

int main(){
    Layout1 type1;
    Layout2 type2;

    cout << sizeof(type1) << endl; //12 bytes

    cout << sizeof(type2) << endl; //8 bytes
}
