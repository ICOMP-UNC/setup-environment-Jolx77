#include "shared.h"
#include "static.h"
#include <greetings.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Hola, bienvenios al himalaia \n");
    greetings();
    printf("Llamando a la libreria dinamica desde el main, obtengo '%d'\n", shared_lib_function("Hola, SOP2"));
    printf("Llamando a la libreria dinamica desde el main, obtengo '%d'\n", static_lib_function("Chau, SOP2"));
    return 0;
}
