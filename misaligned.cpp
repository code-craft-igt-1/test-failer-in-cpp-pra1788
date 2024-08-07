#include <iostream>
#include <iomanip>
#include <vector>
#include <cassert>

// generate color mappings
std::vector<std::pair<std::string, std::string>> generateColorMap() {
    const std::vector<std::string> majorColor = {"White", "Red", "Black", "Yellow", "Violet"};
    const std::vector<std::string> minorColor = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::vector<std::pair<std::string, std::string>> colorMap;

    for (auto i = 0; i < majorColor.size(); ++i) {
        for (auto j = 0; j < minorColor.size(); ++j) {
            colorMap.emplace_back(majorColor[i], minorColor[j]);
        }
    }
    return colorMap;
}

// alignment color mappings printer
void printColorMap(const std::vector<std::pair<std::string, std::string>>& colorMap) {
    const int indexWidth = 5;        // Width for the index column
    const int majorColorWidth = 11;  // Width for the major color column
    const int minorColorWidth = 8;   // Width for the minor color column

    std::cout << std::setw(indexWidth) << "Index" << " | "
              << std::setw(majorColorWidth) << "Major Color" << " | "
              << std::setw(minorColorWidth) << "Minor Color" << "\n";
    std::cout << std::string(indexWidth + majorColorWidth + minorColorWidth + 9, '-') << "\n";

    for (auto i = 0; i < colorMap.size(); ++i) {
        std::cout << std::setw(indexWidth) << i+1 << " | "
                  << std::setw(majorColorWidth) << colorMap[i].first << " | "
                  << std::setw(minorColorWidth) << colorMap[i].second << "\n";
    }
}

int main() {
    auto colorMap = generateColorMap();

    // Validate that the number of mappings is correct
    assert(colorMap.size() == 25);

    // Test printing functionality
    printColorMap(colorMap);

    std::cout << "All is well (maybe!)\n";
    return 0;
}
