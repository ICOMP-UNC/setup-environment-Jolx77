#include "logic.h"

int add(int fn, int sn){
    return fn + sn;
}

int multiply(int fn, int sn){
    return fn*sn;
}

int substract(int fn, int sn){
    return fn-sn;
}

double divide(int fn, int sn){
    if(sn != 0){
        return (double)(fn/sn);
    }
        return -1.0;
}