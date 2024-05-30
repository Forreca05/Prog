#include <string>
#include <list>
#include <map>

std::string cat_keys(std::list<std::map<std::string, unsigned>> lst) {
    unsigned int min = 1000; 
    std::string ab = "";
    int m;
    int a=0;
    for (auto kv : lst) {
        for (auto s : kv) {
            if (s.second < min) {
                min = s.second;
                m = a;
            }
        }
        a++;
    }
    int b = 0;
    for (auto kv : lst) {
        if (b == m) {
            for (auto s : kv) {
                ab += s.first;
            }
        }
        b++;
    }
    return ab;
}