#ifndef COLOR_MAP_H
#define COLOR_MAP_H

#include <string>
#include <vector>

// Functions for preparing color maps
std::vector<std::string> getMajorColors();
std::vector<std::string> getMinorColors();

// Functions for formatting color map
std::string formatColorMap(const std::vector<std::string>& majorColors, const std::vector<std::string>& minorColors);

// Function for printing the color map
void printColorMap(const std::string& formattedColorMap);

#endif // COLOR_MAP_H
