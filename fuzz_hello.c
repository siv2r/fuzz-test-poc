#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int isStrHello (const char *str, size_t size) {
    if(size == 4) {
        if (str[0] == 'H' &&
            str[1] == 'e' &&
            str[2] == 'l' &&
            str[3] == 'l' &&
            str[4] == 'o') {
                return 1;
            }
    }

    return 0;
}

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  isStrHello((const char *)Data, Size);
  return 0;  // Non-zero return values are reserved for future use.
}
