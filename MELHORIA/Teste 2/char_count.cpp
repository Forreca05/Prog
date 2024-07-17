#include <fstream>
#include "show_file.h"

void char_count(const std::string& input_fname, const std::string& output_fname)  {
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    for(std::string line; getline(in, line);) {
        int a = 0;
        for (size_t i = 0; i < line.length(); i++) {
            if (line[i] != ' ') a++;
        }
        out << a << std::endl;
    }
}

int main() {
    { char_count("f1.txt", "f1_out.txt");
  show_file("f1_out.txt"); }
  { char_count("f2.txt", "f2_out.txt");
  show_file("f2_out.txt"); }
  { char_count("f3.txt", "f3_out.txt");
  show_file("f3_out.txt"); }
  { char_count("f4.txt", "f4_out.txt");
  show_file("f4_out.txt"); }
}