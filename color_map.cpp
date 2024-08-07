#include "color_map.h"
#include <iostream>
#include <sstream>
#include <iomanip>

// Prepare color maps
std::vector<std::string> getMajorColors() {
    return {"White", "Red", "Black", "Yellow", "Violet"};
}

std::vector<std::string> getMinorColors() {
    return {"Blue", "Orange", "Green", "Brown", "Slate"};
}

// Format the color map
std::string formatColorMap(const std::vector<std::string>& majorColors, const std::vector<std::string>& minorColors) {
    std::ostringstream oss;
    int maxIndexWidth = 2;  // Maximum width for index values

    for (size_t i = 0; i < majorColors.size(); ++i) {
        for (size_t j = 0; j < minorColors.size(); ++j) {
            oss << std::setw(maxIndexWidth) << (i * minorColors.size() + j) << " | "
                << std::setw(10) << std::left << majorColors[i] << " | "
                << std::setw(10) << std::left << minorColors[j] << "\n";
        }
    }

    return oss.str();
}

// Print the color map
void printColorMap(const std::string& formattedColorMap) {
    std::cout << formattedColorMap;
}
