#ifndef COLOR_MAP_H
#define COLOR_MAP_H

#include <string>
#include <vector>

// Macros for printing and formating the table
#define SET_WIDTH(width) std::setw(width)
#define ALIGN_RIGHT std::right
#define ALIGN_LEFT std::left
#define INSERT_STREAM(value) << (value)

// Functions for preparing color maps
std::vector<std::string> getMajorColors();
std::vector<std::string> getMinorColors();

// Functions for formatting color map
std::string formatColorMap(const std::vector<std::string>& majorColors, const std::vector<std::string>& minorColors);

// Function for printing the color map
void printColorMap(const std::string& formattedColorMap);

#endif // COLOR_MAP_H
