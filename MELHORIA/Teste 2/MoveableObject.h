#ifndef __MoveableObject_h__
#define __MoveableObject_h__

class MoveableObject {
public:
  MoveableObject(int id, const double mass, const double velocity)
    : id_(id), mass_(mass), velocity_(velocity) { }
  int id() const { return id_; }
  double mass() const { return mass_; }
  double velocity() const { return velocity_; }
  virtual double momentum() const = 0;
private:
    int id_;
    double mass_;
    double velocity_;
};

#endif