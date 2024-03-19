#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_function(char *msg)
{
    printf("Wenas, soy la libreria dinamica que recibe '%s' y retorna '%d'\n", msg, strlen(msg));
    return strlen(msg);
}