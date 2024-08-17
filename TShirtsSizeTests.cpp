#include <cassert>
#include <iostream>
#include "./TShirtsSizeCalculator.h"
#include "./TShirtsSizeTests.h"

void runTests() {
    // Edge cases for boundary conditions
    assert(size(37) == 'S');  // Just below SMALL_THRESHOLD
    assert(size(38) == 'S');  // Exactly at SMALL_THRESHOLD
    assert(size(39) == 'M');  // Just above SMALL_THRESHOLD
    assert(size(41) == 'M');  // Just below MEDIUM_THRESHOLD
    assert(size(42) == 'M');  // Exactly at MEDIUM_THRESHOLD
    assert(size(43) == 'L');  // Just above MEDIUM_THRESHOLD

    // Additional cases to test robustness
    assert(size(0) == 'S');     // Far below any threshold
    assert(size(100) == 'L');   // Well above any threshold

    // Cases where cms is exactly on the boundary values
    assert(size(SMALL_THRESHOLD - 1) == 'S');   // Below SMALL_THRESHOLD
    assert(size(SMALL_THRESHOLD) == 'S');       // At SMALL_THRESHOLD
    assert(size(MEDIUM_THRESHOLD) == 'M');      // At MEDIUM_THRESHOLD
    assert(size(MEDIUM_THRESHOLD + 1) == 'L');  // Above MEDIUM_THRESHOLD

    // Print message if all assertions pass
    std::cout << "All T-Shirts size tests passed successfully.\n";
}
