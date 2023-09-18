#ifndef roomKEY.h

#include <string>

class roomKEY {
public:
    // Параметрический конструктор
    roomKEY(int length, int width, const std::string& material);
    
    // Конструктор по умолчанию
    roomKEY();

    void openDoor();

    void breakKey();

    void printCharacteristics() const;


private:
    int length;
    int width;

    std::string material;
    bool broken;

};

#endif