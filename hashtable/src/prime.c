#include<stdio.h>
#include<math.h>

#include "prime.h"

/**
 * Returns:
 *  1 - prime
 *  0 - not prime
*/
int is_prime(const int x) {
    if(x < 2){return 0;}
    if(x < 4){return 1;}
    if(x % 2 == 0){return 0;}
    for(int i = 0; i <= sqrt(x); i += 2) {
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int next_prime(int x) {
    while(is_prime(x) != 1) {
        x++;
    }
    return x;
}

