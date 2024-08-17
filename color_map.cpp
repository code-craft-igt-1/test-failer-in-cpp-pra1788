#include "./color_map.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>

// Prepare color maps
std::vector<std::string> getMajorColors() {
    return {"White", "Red", "Black", "Yellow", "Violet"};
}

std::vector<std::string> getMinorColors() {
    return {"Blue", "Orange", "Green", "Brown", "Slate"};
}

// Calculate the width required for index
int calculateIndexWidth(size_t numMajorColors, size_t numMinorColors) {
    int maxIndex = static_cast<int>(numMajorColors * numMinorColors - 1);
    int width = 0;
    while (maxIndex > 0) {
        maxIndex /= 10;
        ++width;
    }
    return width;
}

// Format the color map
std::string formatColorMap(const std::vector<std::string>& majorColors,
                                    const std::vector<std::string>& minorColors) {
    std::ostringstream oss;
    int maxIndexWidth = calculateIndexWidth(majorColors.size(), minorColors.size());

    for (size_t i = 0; i < majorColors.size(); ++i) {
        for (size_t j = 0; j < minorColors.size(); ++j) {
            oss INSERT_STREAM(SET_WIDTH(maxIndexWidth))
                INSERT_STREAM(ALIGN_RIGHT)
                INSERT_STREAM(i * minorColors.size() + j)
                INSERT_STREAM(" | ")
                INSERT_STREAM(SET_WIDTH(9))
                INSERT_STREAM(ALIGN_LEFT)
                INSERT_STREAM(majorColors[i])
                INSERT_STREAM(" | ")
                INSERT_STREAM(SET_WIDTH(10))
                INSERT_STREAM(ALIGN_LEFT)
                INSERT_STREAM(minorColors[j])
                INSERT_STREAM("\n");
        }
    }
    return oss.str();
}

// Print the color map
void printColorMap(const std::string& formattedColorMap) {
    std::cout << formattedColorMap;
}

