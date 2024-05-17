#include "Color.h"

Color::Color(unsigned char red, unsigned char green, unsigned char blue)
    : red_(red), green_(green), blue_(blue) {}

Color::Color(const Color& c)
    : red_(c.red()), green_(c.green()), blue_(c.blue()) {}

unsigned char Color::red() const {
    return red_;
}

unsigned char Color::green() const {
    return green_;
}

unsigned char Color::blue() const {
    return blue_;
}

const Color Color::RED(255, 0, 0);
const Color Color::GREEN(0, 255, 0);
const Color Color::BLUE(0, 0, 255);
const Color Color::BLACK(0, 0, 0);
const Color Color::WHITE(255, 255, 255);

bool Color::equal_to(const Color& other) const {
    return (other.red() == red_ && other.green() == green_ && other.blue() == blue_);
}

void Color::invert() {
    red_ = 255 - red_;
    green_ = 255 - green_;
    blue_ = 255 - blue_;
}