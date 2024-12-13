#include <iostream>
using namespace std;

class Processor {
public:
    void work() {
        cout << "Processor Work" << endl;
    }
};

class GraphicsCard {
public:
    void work() {
        cout << "Graphics Card Work" << endl;
    }
};

class Motherboard {
public:
    void work() {
        cout << "Motherboard Work" << endl;
    }
};

class RAM {
public:
    void work() {
        cout << "RAM Work" << endl;
    }
};

class HardDrive {
public:
    void work() {
        cout << "Hard Drive Work" << endl;
    }
};

class Computer {
private:
    Processor processor;        
    GraphicsCard graphicsCard;  
    Motherboard motherboard;    
    RAM ram;                    
    HardDrive hardDrive;        

public:
    void start() {
        cout << "start:" << endl;
        processor.work();
        graphicsCard.work();
        motherboard.work();
        ram.work();
        hardDrive.work();
    }
};

void main() {
    Computer compObj; 
    compObj.start();
}
