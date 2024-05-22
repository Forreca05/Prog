#include <iostream>

class Fraction {
public:
    Fraction() : num(0), den(1) {};
    Fraction(int num, int den);
    int numerator() const {return num;};
    int denominator() const {return den;};
    Fraction sum(const Fraction& right);
    Fraction sub(const Fraction& right);
    Fraction mul(const Fraction& right);
    Fraction div(const Fraction& right);
    static int gcd(int a, int b);
    void normalise();
    void write() const;
private:
    int num;
    int den;
};

Fraction::Fraction(int num, int den) {
    int common_factor = gcd(num, den);
    this->num = num / common_factor;
    this->den = den / common_factor;
    if (this->den < 0) {
        this->num = -this->num;
        this->den = -this->den;
    }
}

Fraction Fraction::sum(const Fraction& right) {
    this->num = num * right.denominator() + den * right.numerator();
    this->den = den * right.denominator();
    Fraction result(num, den);
    result.normalise();
    return result;
}

Fraction Fraction::sub(const Fraction& rigth) {
    this->num = num * rigth.denominator() - den * rigth.numerator();
    this->den = den * rigth.denominator();
    Fraction result(num, den);
    result.normalise();
    return result;
}

Fraction Fraction::mul(const Fraction& rigth) {
    this->num = num * rigth.numerator();
    this->den = den * rigth.denominator();
    Fraction result(num, den);
    result.normalise();
    return result;
}

Fraction Fraction::div(const Fraction& rigth) {
    this->num = num * rigth.denominator();
    this->den = den * rigth.numerator();
    Fraction result(num, den);
    result.normalise();
    return result;
}

//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
  int g = gcd(num, den);
  num /= g;
  den /= g;
  if (den < 0) {
    this->num = - this->num;
    this->den = - this->den;
  }
}

// shows fraction on the screen
void Fraction::write() const {
  std::cout << num << '/' << den;
}