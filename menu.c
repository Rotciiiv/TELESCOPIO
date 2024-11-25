enum boolean menu(){
    enum boolean money,ld;
    struct universo *ojo = NULL;
    struct pila *teles = NULL; //guarda la pila de telescopios
    struct pila *actual = NULL;//el telescopio actual
    struct pila *nul = NULL;//valida si lo q recibio no es null
    struct doc *lista = NULL;
    struct tienda almacen[5];
    int cont = 0; //cuantas documentaciones
    int pil = 1; //cuantos telescopios
    float b,credits = 0.0;

int op,a;
    create(&ojo);
    load(almacen);
    ld = cargo();
    ld ? ldTs(&teles,&credits,&pil): printf("a");
    while(w){
          a = interfaz(&credits,&actual);
    switch (a) {
    case 1: //observar
        op = mostrar(&ojo,&actual);
    if(op == 2){
       money = documentar(&ojo,&lista,&actual);
       if(money){
        cont++;
        srand(time(NULL));
        b =(rand() % 10) + 10;
        credits = credits + b;
        printf("\n\nHas ganado %.2f!! Usalo para comprar nuevos telescopios :))",b);
            fflush(stdin);
            getchar();
       }
        break;
        case 2:
        if(pil<6){
            if(tienda(&teles,&credits,almacen)){
            printf("\nTelescopio guardado\n");
            pil++;
        } 
        }else printf("\nAlmacenamiento de telescopios lleno");
        break;
        case 3:
        nul = popTel(&teles,&pil);
        if(nul != NULL){
        actual = nul;
        printf("\n\nTelescopio -> %s",actual->telesc);
        pil--;
         fflush(stdin);
         getchar();
        } else{
            printf("No hay telescopios en pila"); 
            fflush(stdin);
            getchar();
            nul = NULL;
        }   
        break;
        case 4:
        if(lista != NULL){
            indice(&lista,&cont);
            ver(&lista,&cont);
        }else{  
            printf("No hay docs en lista");
            fflush(stdin);
        getchar();
            }

        break;
        break;
        case 5:
        save(&lista); //guarda y hace un archivo leible para el usuario
        saveProgress(&teles,&actual,&credits,&pil); //guarda la pila de telescopios
        break;
        case 6:
        a = l;
        return w;
        break;
    default:
        break;
    }

    }
    }
  
}