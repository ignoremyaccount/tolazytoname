#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

long long int parse_binary(uint8_t *n, size_t s) {
	long long int endval = 0;
	for (size_t i = 0; i < s; i++) {
        if (n[i] != '0' && n[i] != '1') {
            return -1;
        }
        endval <<= 1;
        if (n[i] == '1') {
            endval |= 1;
        }
    }
    return endval;
}

long long int parse_numlit(uint8_t *n, size_t s) {
	if (s > 2) {
		if (memcmp(n, "0b", 2) == 0) {
			
		}
	}
}

00101010


	
/*

*/
