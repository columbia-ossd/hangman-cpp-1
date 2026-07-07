#include "Drawing.h"

#include <stdexcept>
#include <vector>

std::string Drawing::getDrawing(int numberOfErrors) {
    static const std::vector<std::string> stages = {
        R"( _________
 |       |
 |
 |
 |
 |
_|_______________________)",

        R"( _________
 |       |
 |       O
 |
 |
 |
_|_______________________)",

        R"( _________
 |       |
 |       O
 |       |
 |
 |
_|_______________________)",

        R"( _________
 |       |
 |       O
 |     --|
 |
 |
_|_______________________)",

        R"( _________
 |       |
 |       O
 |     --|--
 |
 |
_|_______________________)",

        R"( _________
 |       |
 |       O
 |     --|--
 |      /
 |     /
_|_______________________)",

        R"( _________
 |       |
 |       O
 |     --|--
 |      / \
 |     /   \
_|_______________________)"
    };

    if (numberOfErrors < 0 || numberOfErrors >= static_cast<int>(stages.size())) {
        throw std::invalid_argument("Invalid number of errors");
    }

    return stages[numberOfErrors];
}