#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_function(char *msg)
{
    printf("Buenas, soy la libreria dinamica que recibe '%s' y retorna '%ld'\n", msg, strlen(msg));
    return strlen(msg);
}