//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


// Global level
int level = 1;


// Part A - Entity class
class Entity {
private:
    string name;
    int health;
    int level;
    string type;

public:
    Entity() {
        name = "Unknown";
        health = 0;
        level = 0;
        type = "Unknown";
    }

    Entity& setName(const string& name) {
        this->name = name;
        return *this;
    }

    Entity& setHealth(int health) {
        this->health = health;
        return *this;
    }

    Entity& setLevel(int level) {
        this->level = level;
        return *this;
    }

    Entity& setType(const string& type) {
        this->type = type;
        return *this;
    }

    string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    int getLevel() const {
        return level;
    }

    string getType() const {
        return type;
    }

    void displayInfo() const {
        cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
        cout << "Level  : " << level << endl;
        cout << "Type   : " << type << endl;
    }
};


// Part B - Physics namespace
namespace Physics {

    double clamp(double val, double min, double max) {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}


// Part B - GameMath namespace
namespace GameMath {

    int clamp(int val, int min, int max) {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}


// Bonus - Nested namespace
namespace Engine {
    namespace Audio {

        void playSound(string name) {
            cout << "Playing: " << name << endl;
        }
    }
}


int main() {

    // Part A
    Entity player, enemy, item;

    player.setName("Aragorn")
          .setHealth(100)
          .setLevel(10)
          .setType("Player");

    enemy.setName("Orc")
         .setHealth(60)
         .setLevel(5)
         .setType("Enemy");

    item.setName("HealthPotion")
        .setHealth(0)
        .setLevel(1)
        .setType("Item");


    cout << "===== ENTITIES =====" << endl;

    cout << "\nPlayer:" << endl;
    player.displayInfo();

    cout << "\nEnemy:" << endl;
    enemy.displayInfo();

    cout << "\nItem:" << endl;
    item.displayInfo();


    // Part B - Namespace functions

    double velocity = 15.5;

    cout << "\n===== PHYSICS =====" << endl;

    cout << "Clamped velocity: "
         << Physics::clamp(velocity, 0.0, 10.0) << endl;

    cout << "Physics lerp: "
         << Physics::lerp(0.0, 100.0, 0.5) << endl;


    cout << "\n===== GAME MATH =====" << endl;

    cout << "Clamped health: "
         << GameMath::clamp(120, 0, 100) << endl;

    cout << "GameMath lerp: "
         << GameMath::lerp(0.0, 100.0, 0.25) << endl;


    // using namespace in limited scope
    {
        using namespace Physics;

        double speed = clamp(20.0, 0.0, 10.0);

        cout << "\nLimited scope Physics clamp: "
             << speed << endl;
    }


    // Bonus - global and local level
    int level = player.getLevel();

    cout << "\n===== LEVEL =====" << endl;
    cout << "Global level: " << ::level << endl;
    cout << "Player level: " << level << endl;


    // Bonus - nested namespace
    Engine::Audio::playSound("sword_clash");


    // Part C - Dynamic 2D Game Map

    int R, C;

    cout << "\nEnter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;


    // Allocate rows
    int** map = new int*[R];

    // Allocate columns for each row
    for (int i = 0; i < R; i++) {
        map[i] = new int[C];
    }


    // Random seed
    srand(time(0));


    // Fill the map
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            map[i][j] = rand() % 5;
        }
    }


    // Display map
    cout << "\n===== GAME MAP (" << R << " x " << C << ") =====" << endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << map[i][j] << "  ";
        }
        cout << endl;
    }


    // Legend
    cout << "\nLegend: "
         << "0=Grass  "
         << "1=Water  "
         << "2=Mountain  "
         << "3=Forest  "
         << "4=Dungeon"
         << endl;


    // Count tiles
    int count[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            count[map[i][j]]++;
        }
    }


    // Display tile count
    cout << "\nTile Count:" << endl;

    cout << "Grass    : " << count[0] << endl;
    cout << "Water    : " << count[1] << endl;
    cout << "Mountain : " << count[2] << endl;
    cout << "Forest   : " << count[3] << endl;
    cout << "Dungeon  : " << count[4] << endl;


    // Deallocate memory
    for (int i = 0; i < R; i++) {
        delete[] map[i];
    }

    delete[] map;


    return 0;
}
