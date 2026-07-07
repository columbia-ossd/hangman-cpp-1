#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <vector>

class Dictionary {
public:
    std::string getRandomWord() const;
    std::string getCategory() const;

private:
    static const std::vector<std::string> words;
};

#endif