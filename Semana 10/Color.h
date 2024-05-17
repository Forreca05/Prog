#ifndef Color_
#define Color_

class Color {
    private:
        unsigned char red_, green_, blue_;
    public:
        Color (unsigned char red, unsigned char green, unsigned char blue);
        Color (const Color& c);
        unsigned char red() const; // Adicione const aqui
        unsigned char blue() const; // Adicione const aqui
        unsigned char green() const; // Adicione const aqui
        static const Color RED, GREEN, BLUE, WHITE, BLACK;
        bool equal_to(const Color& other) const; // Adicione const aqui
        void invert();
};

#endif