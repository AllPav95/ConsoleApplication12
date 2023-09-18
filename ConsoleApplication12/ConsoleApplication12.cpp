#include "roomKEY.h"
#include <iostream>

// Параметрический конструктор
roomKEY::roomKEY(int len, int wid, const std::string& mat)
    : length(len), width(wid), material(mat), broken(false) {}

// Конструктор по умолчанию
roomKEY::roomKEY()
    : length(10), width(3), material("metal"), broken(false) {}

void roomKEY::openDoor() {
    if (!broken) {
        std::cout << "The door is opened with a key.\n" << std::endl;
    }
    else {
        std::cout << "The key is broken, the door cannot be opened." << std::endl;
    }
}

void roomKEY::breakKey() {
    broken = true;
    std::cout << "The key is broken!\n" << std::endl;
}

void roomKEY::printCharacteristics() const {
    std::cout << "Key characteristics:" << std::endl;
    std::cout << "length: " << length << " cm" << std::endl;
    std::cout << "width: " << width << " cm" << std::endl;
    std::cout << "material: " << material << std::endl;
    std::cout << "State: " << (broken ? "broken key" : "whole key") << std::endl;
}

int main() {
    roomKEY key1(12, 4, "metal"); // ключ с параметрами
    roomKEY key2; // ключ с параметрами по умолчанию

    std::cout << "key1:" << std::endl;
    key1.printCharacteristics();
    key1.openDoor(); 
    key1.breakKey();
    key1.openDoor();
    key1.printCharacteristics();

    std::cout << "\nkey2:" << std::endl;
    key2.printCharacteristics();
    key2.openDoor();
    key2.printCharacteristics();

    return 0;
}





