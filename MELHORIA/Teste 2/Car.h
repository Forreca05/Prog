#include "MoveableObject.h"
#include <iostream>

class Car final : public MoveableObject {
public:
    Car(int id, const double mass, const double velocity, std::string license_plate) : MoveableObject(id, mass, velocity), license_plate_(license_plate) {}
    std::string license_plate() const {return license_plate_;}
    double momentum() const override {return mass() * velocity();}
private:
    std::string license_plate_;
};

int main() {
    { const MoveableObject& mo = Car(123, 1.0, 1.0, "XY-01-23");
  std::cout << fixed << setprecision(2)    
       << mo.id() << ' '
       << mo.mass() << ' '
       << mo.velocity() << ' '
       << mo.momentum() << '\n'; }
       { const Car c(123, 2.0, 2.5, "XY-01-23");
  std::cout << fixed << setprecision(2)    
       << c.id() << ' '
       << c.mass() << ' '
       << c.velocity() << ' '
       << c.momentum() << ' '
       << c.license_plate() << '\n'; }
       { const Car c(321, 1.2, 3.4, "0C-12-ZZ");
  std::cout << fixed << setprecision(2)    
       << c.id() << ' '
       << c.mass() << ' '
       << c.velocity() << ' '
       << c.momentum() << ' '
       << c.license_plate() << '\n'; }
       { const Car c(456, 12.3, 34.5, "FOO-BAR");
  std::cout << fixed << setprecision(2)    
       << c.id() << ' '
       << c.mass() << ' '
       << c.velocity() << ' '
       << c.momentum() << ' '
       << c.license_plate() << '\n'; }
}