#include "static.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char *msg)
{
    printf("Wenas, soy la libreria estatica que recibe '%s' y retorna '%d'\n", msg, strlen(msg));
    return strlen(msg);
}