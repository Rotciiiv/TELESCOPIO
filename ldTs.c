enum boolean ldTs(struct pila **teles,float *credits,int *pil){
    FILE *ap=fopen("invent.txt","r+");
    if(ap == NULL){
        printf("No hay datos de guardado");
        fflush(stdin);
        getchar();
        return l;
    }

    fscanf(ap,"%f %d",&(*credits),&(*pil));

    for(int i=0;i<(*pil);i++){
        struct pila *tmp = (struct pila *)malloc(sizeof(struct pila));
        fscanf(ap,"%s %d",tmp->telesc,&tmp->damage);
        if(teles == NULL){
        tmp->next=NULL;
        }else tmp->next = *teles;
    *teles = tmp;
    }

        printf("Progreso(telescopios) cargados");
        fflush(stdin);
        getchar();
    fclose(ap);
    return w;
}