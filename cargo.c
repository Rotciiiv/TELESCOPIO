enum boolean cargo(){
    char op;
FILE *ap = fopen("invent.txt","r");
    if(ap != NULL){
        printf("\n Se encontro un archivo de guardado, deseas cargarlo? Y/N\n:");
        scanf("%c",&op);
        fclose(ap);
        if(op == 'y' || op == 'Y'){
            return w;
        }else return l;
    }
return l;
}