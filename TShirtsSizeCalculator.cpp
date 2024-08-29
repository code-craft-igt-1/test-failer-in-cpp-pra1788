#include "./TShirtsSizeCalculator.h"

char size_in_cms(int cms) {
    char sizeName = '\0';
    if (cms <= SMALL_THRESHOLD) {
        sizeName = 'S';
    } else if (cms <= MEDIUM_THRESHOLD) {
        sizeName = 'M';
    } else {
        sizeName = 'L';
    }
    return sizeName;
}
