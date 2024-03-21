#include "static.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char *msg)
{
    printf("Buenas, soy la libreria estatica que recibe '%s' y retorna '%ld'\n", msg, strlen(msg));
    return strlen(msg);
}
