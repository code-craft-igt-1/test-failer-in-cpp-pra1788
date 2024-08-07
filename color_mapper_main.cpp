#include "color_map.h"
#include <iostream>
#include <cassert>
#include <string>

// Unit tests
void testColorMaps() {
    auto majorColors = getMajorColors();
    auto minorColors = getMinorColors();
    
    assert(majorColors.size() == 5);
    assert(minorColors.size() == 5);
    
    assert(majorColors[0] == "White");
    assert(minorColors[4] == "Slate");
}

void testFormatColorMap() {
    auto majorColors = getMajorColors();
    auto minorColors = getMinorColors();
    std::string formattedOutput = formatColorMap(majorColors, minorColors);

    std::string expectedOutput =
        " 0 | White     | Blue      \n"
        " 1 | White     | Orange    \n"
        " 2 | White     | Green     \n"
        " 3 | White     | Brown     \n"
        " 4 | White     | Slate     \n"
        " 5 | Red       | Blue      \n"
        " 6 | Red       | Orange    \n"
        " 7 | Red       | Green     \n"
        " 8 | Red       | Brown     \n"
        " 9 | Red       | Slate     \n"
        "10 | Black     | Blue      \n"
        "11 | Black     | Orange    \n"
        "12 | Black     | Green     \n"
        "13 | Black     | Brown     \n"
        "14 | Black     | Slate     \n"
        "15 | Yellow    | Blue      \n"
        "16 | Yellow    | Orange    \n"
        "17 | Yellow    | Green     \n"
        "18 | Yellow    | Brown     \n"
        "19 | Yellow    | Slate     \n"
        "20 | Violet    | Blue      \n"
        "21 | Violet    | Orange    \n"
        "22 | Violet    | Green     \n"
        "23 | Violet    | Brown     \n"
        "24 | Violet    | Slate     \n";
    
    assert(formattedOutput == expectedOutput);
}

int main() {
    testColorMaps();
    testFormatColorMap();
    
    auto majorColors = getMajorColors();
    auto minorColors = getMinorColors();
    std::string formattedOutput = formatColorMap(majorColors, minorColors);
    
    printColorMap(formattedOutput);

    std::cout << "All tests passed.\n";
    return 0;
}
