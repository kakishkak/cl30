#include <iostream>
using namespace std;

class Computer {
public:
    void processorIsWork() {
        cout << "Processor Work" << endl;
    }
    void graphicsCardIsWork() {
        cout << "Graphics Card Work" << endl;
    }
    void motherboardIsWork() {
        cout << "Motherboard Work" << endl;
    }
    void ramIsWork() {
        cout << "RAM Work" << endl;
    }
    void hardDriveIsWork() {
        cout << "Hard Drive Work" << endl;
    }
};

class Processor {
private:
    Computer engine;
public:
    void printer() {
        engine.processorIsWork();
    }
};

class GraphicsCard {
private:
    Computer engine;
public:
    void printer() {
        engine.graphicsCardIsWork();
    }
};

class Motherboard {
private:
    Computer engine;
public:
    void printer() {
        engine.motherboardIsWork();
    }
};

class RAM {
private:
    Computer engine;
public:
    void printer() {
        engine.ramIsWork();
    }
};

class HardDrive {
private:
    Computer engine;
public:
    void printer() {
        engine.hardDriveIsWork();
    }
};

void main() {
    Processor processorObj;
    processorObj.printer();
    cout << endl;

    GraphicsCard graphicsCardObj;
    graphicsCardObj.printer();
    cout << endl;

    Motherboard motherboardObj;
    motherboardObj.printer();
    cout << endl;

    RAM ramObj;
    ramObj.printer();
    cout << endl;

    HardDrive hardDriveObj;
    hardDriveObj.printer();
}