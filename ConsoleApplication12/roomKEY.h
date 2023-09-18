#ifndef roomKEY.h

#include <string>

class roomKEY {
public:
    // ��������������� �����������
    roomKEY(int length, int width, const std::string& material);
    
    // ����������� �� ���������
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