#include "Book.h"
#include "Page.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>

void Book::build_index(const std::set<std::string>& words) {
    for (const auto& word : words) {
        std::set<size_t> pages_with_word;
        for (size_t i = 0; i < book_.size(); ++i) {
            const Page& page = book_[i];
            for (size_t line_num = 0; line_num < page.get_num_lines(); ++line_num) {
                std::istringstream iss(page.get_line(line_num));
                std::string word_in_page;
                while (iss >> word_in_page) {
                    if (word_in_page == word) {
                        pages_with_word.insert(i + 1); 
                        break;
                    }
                }
            }
        }
        if (!pages_with_word.empty()) {
            index_[word] = pages_with_word;
        }
    }
}