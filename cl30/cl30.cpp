#include <iostream>

using namespace std;

class Gadget {
protected:
    string brand;
    Gadget(string a) {
        brand = a;
    }
};

class Mobile :protected Gadget {
protected:
    string batterySize;
public:
    Mobile(string a, string b) : Gadget(a) {
        batterySize = b;
    }
};

class Stationary : protected Gadget {
protected:
    string diagonal;
public:
    Stationary(string m, string t) : Gadget(m) {
        diagonal = t;
    }
    
};

class Tablet : protected Mobile {
private:
    string screenSize;
public:
    Tablet(string a, string b, string c) : Mobile(a,b) {
        screenSize = c;
    }
    void Printer() {
        cout << "Brand: " << brand <<"\nBattery Size: "<< batterySize <<"\nScreen Size: "<< screenSize;
    }
};

class Phone : protected Mobile {
private:
    string simCount;
public:
    Phone(string a, string b, string c) : Mobile(a, b) {
        simCount = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nBattery Size: " << batterySize << "\nSim Count: " << simCount;
    }
};

class SmartWatch : protected Mobile {
private:
    string size;
public:
    SmartWatch(string a, string b, string c) : Mobile(a, b) {
        size = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nBattery Size: " << batterySize << "\nSize: " << size;
    }
};

class Laptop : protected Mobile {
private:
    string ram;
public:
    Laptop(string a, string b, string c) : Mobile(a, b) {
        ram = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nBattery Size: " << batterySize << "\nRam: " << ram;
    }
};

class Computer : protected Stationary {
private:
    string cpuCoresAmount;
public:
    Computer(string a, string b, string c) : Stationary(a, b) {
        cpuCoresAmount = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nDiagonal: " << diagonal << "\n cpuCoresAmount: " << cpuCoresAmount;
    }
};

class TV : protected Stationary {
private:
    string model;
public:
    TV(string a, string b, string c) : Stationary(a, b) {
        model = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nDiagonal: " << diagonal << "\n Model: " << model;
    }
};

class Monitor : protected Stationary {
private:
    string refreshRate;
public:
    Monitor(string a, string b, string c) : Stationary(a, b) {
        refreshRate = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nDiagonal: " << diagonal << "\n RefreshRate: " << refreshRate;
    }
};

class Playstation : protected Stationary {
private:
    string generation;
public:
    Playstation(string a, string b, string c) : Stationary(a, b) {
        generation = c;
    }
    void Printer() {
        cout << "Brand: " << brand << "\nDiagonal: " << diagonal << "\n Generation: " << generation;
    }
};



int main()
{
    Tablet tabletObj = Tablet("Xiaomi", "3000", "20");
    tabletObj.Printer();
    cout << endl;
    cout << endl;

    Phone phoneObj = Phone("Samsung", "4000", "2");
    phoneObj.Printer();
    cout << endl;
    cout << endl;

    SmartWatch watchObj = SmartWatch("Apple", "500", "42mm");
    watchObj.Printer();
    cout << endl;
    cout << endl;

    Laptop laptopObj = Laptop("Dell", "6000", "16GB");
    laptopObj.Printer();
    cout << endl;
    cout << endl;

    Computer computerObj = Computer("HP", "27", "8");
    computerObj.Printer();
    cout << endl;
    cout << endl;

    TV tvObj = TV("LG", "55", "OLED");
    tvObj.Printer();
    cout << endl;
    cout << endl;

    Monitor monitorObj = Monitor("ASUS", "32", "144Hz");
    monitorObj.Printer();
    cout << endl;
    cout << endl;

    Playstation psObj = Playstation("Sony", "50", "PS5");
    psObj.Printer();
    cout << endl;
}
