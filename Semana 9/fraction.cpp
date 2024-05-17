#include <iostream>
#include <cmath>
using namespace std;

class Fraction {
public:
    // Constructors
    Fraction() : numerator_(0), denominator_(1) {}
    Fraction(int numerator, int denominator);

    // Accessors
    int numerator() const { return numerator_; }
    int denominator() const { return denominator_; }

    // Arithmetic operations
    Fraction sum(const Fraction& right) const;
    Fraction sub(const Fraction& right) const;
    Fraction mul(const Fraction& right) const;
    Fraction div(const Fraction& right) const;

    // Helper functions
    static int gcd(int a, int b);
    void normalise();
    void write() const;

private:
    int numerator_;
    int denominator_;
};

// Constructor with numerator and denominator arguments
Fraction::Fraction(int numerator, int denominator) {
    int common_factor = gcd(numerator, denominator);
    numerator_ = numerator / common_factor;
    denominator_ = denominator / common_factor;

    if (denominator_ < 0) {
        numerator_ = -numerator_;
        denominator_ = -denominator_;
    }
}

// Arithmetic operations
Fraction Fraction::sum(const Fraction& right) const {
    int new_numerator = numerator_ * right.denominator() + right.numerator() * denominator_;
    int new_denominator = denominator_ * right.denominator();
    Fraction result(new_numerator, new_denominator);
    result.normalise();
    return result;
}

Fraction Fraction::sub(const Fraction& right) const {
    int new_numerator = numerator_ * right.denominator() - right.numerator() * denominator_;
    int new_denominator = denominator_ * right.denominator();
    Fraction result(new_numerator, new_denominator);
    result.normalise();
    return result;
}

Fraction Fraction::mul(const Fraction& right) const {
    int new_numerator = numerator_ * right.numerator();
    int new_denominator = denominator_ * right.denominator();
    Fraction result(new_numerator, new_denominator);
    result.normalise();
    return result;
}

Fraction Fraction::div(const Fraction& right) const {
    int new_numerator = numerator_ * right.denominator();
    int new_denominator = denominator_ * right.numerator();
    Fraction result(new_numerator, new_denominator);
    result.normalise();
    return result;
}

// Compute the gcd of two numbers
int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Normalize a fraction
void Fraction::normalise() {
    int g = gcd(numerator_, denominator_);
    numerator_ /= g;
    denominator_ /= g;
    if (denominator_ < 0) {
        numerator_ = -numerator_;
        denominator_ = -denominator_;
    }
}

// Write the fraction to the screen
void Fraction::write() const {
    cout << numerator_ << "/" << denominator_;
}