enum boolean saveProgress(struct pila **teles,struct pila **actual,float *credits,int *pil){
if(*teles == NULL && *actual == NULL){
        printf("No has comprado telescopios(presione cualquier letra pa continuar....)");
        fflush(stdin);
        getchar();
        return l;
    }
    struct pila *tmp = (struct pila *)malloc(sizeof(struct pila));
    tmp = *teles;
    FILE *ap=fopen("invent.txt","w+");
    fprintf(ap,"%.2f %d\n%s %d\n",(*credits),(*pil),(*actual)->telesc,(*actual)->damage);
    while(tmp != NULL){
        fprintf(ap,"%s %d\n",tmp->telesc,tmp->damage);
        tmp = tmp->next;
    }
    printf("Progreso guardado");
        fflush(stdin);
        getchar();
    fclose(ap);
}