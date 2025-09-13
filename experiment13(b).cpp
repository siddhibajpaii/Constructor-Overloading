#include <iostream>
using namespace std;

class Car {
    float distance;
    float fuel;

public:
    Car() {
        distance = 100.0;
        fuel = 5.0;
    }

    Car(float d, float f) {
        distance = d;
        fuel = f;
    }

    Car(const Car& c) {
        distance = c.distance;
        fuel = c.fuel;
    }

    float calculateMileage() {
        if (fuel <= 0) {
            cout << "Fuel must be greater than zero to calculate mileage." << endl;
            return 0;
        }
        return distance / fuel;
    }

    void displayMileage() {
        float mileage = calculateMileage();
        if (mileage > 0)
            cout << "Mileage: " << mileage << " km/L" << endl;
    }
};

int main() {
    Car car1;
    Car car2(250.5, 12.5);
    Car car3(car2);

    cout << "Car 1: ";
    car1.displayMileage();

    cout << "Car 2: ";
    car2.displayMileage();

    cout << "Car 3 (copied): ";
    car3.displayMileage();

    return 0;
}


//Output : 
//Car 1: Mileage: 20 km/L
//Car 2: Mileage: 20.04 km/L
//Car 3 (copied): Mileage: 20.04 km/L
