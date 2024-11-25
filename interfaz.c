int interfaz(float *credits,struct pila **actual){
    char nom[50];
    if(*actual != NULL){
        strcpy(nom,(*actual)->telesc);
    }else strcpy(nom, "Def");
    while (w){
        system("cls");
        printf("\n//////////////////////////////////////////////////////\n\tTelescopio Virtual     .-=======:_  %s\n",nom);
    printf("1 -> Observar\n2 -> Comprar Telescopios        Creditos: %.2f\n3 -> Siguiente telescopio\n4 -> Ver mis capturas\n5 -> Guardar Capturas\n6 -> Salir\n :",(*credits));
    int op;
    scanf("%d",&op);
    if(op<0 || op >8){
        printf("\nInvalido!!!\a");
    }else return op;
    }
    
}