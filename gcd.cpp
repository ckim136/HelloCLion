//
// Created by kimem on 2019-09-09.
//

#include "gcd.hpp"

int gcd(const int a , const int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}