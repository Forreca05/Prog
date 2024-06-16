#include <list>
#include <map>
#include <climits>

std::string cat_keys(std::list<std::map<std::string, unsigned>> lst) {
    unsigned int a = UINT_MAX;
    std::string ole = "";
    int c = 0, b = 0;
    for (auto kv : lst) {
        b++;
        for (auto s : kv) {
            if (s.second < a) {
                c = b - 1;
                a = s.second;
            }
        }
    }
    int d = 0;
    for (auto kv : lst) {
        if (d == c) {
            for (auto s : kv) {
                ole += s.first;
            }
        }
        d++;
    }
    return ole;
}