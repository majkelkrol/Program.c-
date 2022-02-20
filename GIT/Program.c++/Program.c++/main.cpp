//
//  main.cpp
//  Program.c++
//
//  Created by Majkel on 20/02/2022.
//

#include <iostream>
using namespace std;

struct Car {
    string name;
    int cost;
    int power;
    string drive;
};

int main() {
    
    Car car;
    car.name = "BWW";
    car.cost = 350.000;
    car.power = 370;
    car.drive = "xDrive";
    
    cout << car.name << endl;
    cout << car.drive << endl;
    cout << car.cost << endl;
    
    return 0;
}
