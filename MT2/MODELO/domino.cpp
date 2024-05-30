#include "Domino.h"

const Piece& Domino::left() const {
    return pieces_.front();
}
const Piece& Domino::right() const {
    return pieces_.back();
}
bool Domino::place_left(const Piece& p) {
    if (p.get_right() == pieces_.front().get_left()) {
        pieces_.push_front(p);
        return true;
    }
    return false;
}
bool Domino::place_right(const Piece& p) {
    if (p.get_left() == pieces_.back().get_right()) {
        pieces_.push_back(p);
        return true;
    }
    return false;
}
bool Piece::can_be_left_to(const Piece& other) const {
    if (other.get_left() == right_) {
        return true;
    }
    return false;
}
bool Piece::can_be_right_to(const Piece& other) const {
    if (other.get_right() == left_) {
        return true;
    }
    return false;
}