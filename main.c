#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

long long int parse_binary(uint8_t *n, size_t s) {
	long long int endval = 0;
	for (int i = s; i > 0; i--) {
		if (*n != '1' || *n != '0')
			return -1

		if (*n == '1') {
			
		}
		n++;
	} 
}

long long int parse_numlit(uint8_t *n, size_t s) {
	if (s > 2) {
		if (memcmp(n, "0b", 2) == 0) {
			
		}
	}
}

/*

*/
