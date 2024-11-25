#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

enum boolean{l,w};
struct pila{
    char telesc[50];
    int damage;
    struct pila *next;
};

struct universo{
    char imagen[50][50];
    int x,y;
    struct universo *next;
};

struct doc{
    char foto[50][50];
    char info[100];
    char tel[30];
    char nombre[30];
    int w,z;
    float hour;
    struct doc *next;
};
struct tienda{
        char product[50];
    int dmg;
    float price;
};

#include "indice.c"
#include "ldTs.c"
#include "saveProgress.c"
#include "save.c"
#include "popTel.c"
#include "load.c"
#include "tienda.c"
#include "ver.c"
#include "documentar.c"
#include "interfaz.c"
#include "mostrar.c"
#include "create.c"
#include "cargo.c"
#include "menu.c"
int main(){
menu();
    return 0;
}
