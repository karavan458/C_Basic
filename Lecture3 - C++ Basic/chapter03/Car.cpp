#include<iostream>
#include<cstring>
#include"Car.hpp"

using namespace std;

void Car::InitMembers(char * ID, int fuel) {
    strcpy(gameID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState() {
    cout << "소유자 ID : " << gameID << endl;
    cout << "연료량    : " << fuelGauge << "%" << endl;
    cout << "현재 속도 : " << curSpeed << "km" << endl; 
}

void Car::Accel() {
    if(fuelGauge <= 0) {
        return;
    }
    else {
        fuelGauge -= CAR_CONST::FUEL_STEP;
    }

    if((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }

    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
    if(curSpeed < CAR_CONST::BRK_STEP) {
        curSpeed = 0;
        return;
    }

    curSpeed -= CAR_CONST::BRK_STEP;
}