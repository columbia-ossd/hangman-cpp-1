#include "Dictionary.h"

#include <cstdlib>

const std::vector<std::string> Dictionary::words = {
    "Seattle", "Spokane", "Tacoma", "Vancouver", "Bellevue",
    "Kent", "Everett", "Renton", "Yakima", "Kirkland",
    "Bellingham", "Auburn", "Redmond", "Lakewood", "Shoreline",
    "Olympia", "Bothell", "Edmonds", "Lynnwood", "Pullman",
    "Mukilteo", "Monroe", "Snoqualmie", "Leavenworth",
    "Arlington", "Brier", "Snohomish"
};

std::string Dictionary::getRandomWord() const {
    int index = std::rand() % words.size();
    return words[index];
}

std::string Dictionary::getCategory() const {
    return "Washington State cities";
}