#include <assert.h>
#include <iostream>

// size thresholds as constants
const int SMALL_THRESHOLD = 38;
const int MEDIUM_THRESHOLD = 42;

char size(int cms) {
    char sizeName = '\0';
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}


void runTests() {
    // Edge cases for boundary conditions
    assert(size(37) == 'S');  // Just below SMALL_THRESHOLD
    assert(size(38) == 'M');  // Exactly at SMALL_THRESHOLD
    assert(size(39) == 'M');  // Just above SMALL_THRESHOLD
    assert(size(41) == 'M');  // Just below MEDIUM_THRESHOLD
    assert(size(42) == 'M');  // Exactly at MEDIUM_THRESHOLD
    assert(size(43) == 'L');  // Just above MEDIUM_THRESHOLD

    // Additional cases to test robustness
    assert(size(0) == 'S');     // Far below any threshold
    assert(size(100) == 'L');   // Well above any threshold

    // Cases where cms is exactly on the boundary values
    assert(size(SMALL_THRESHOLD - 1) == 'S');   // Below SMALL_THRESHOLD
    assert(size(SMALL_THRESHOLD) == 'M');       // At SMALL_THRESHOLD
    assert(size(MEDIUM_THRESHOLD) == 'M');      // At MEDIUM_THRESHOLD
    assert(size(MEDIUM_THRESHOLD + 1) == 'L');  // Above MEDIUM_THRESHOLD

    // Print message if all assertions pass
    std::cout << "All tests passed successfully.\n";
}

int main() {
    runTests();
    return 0;
}
