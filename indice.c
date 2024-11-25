enum boolean indice(struct doc **lista, int *cont){
    if((*cont) == 0 || lista == NULL){
    printf("No docs in list");
            fflush(stdin);
        getchar();
    return l;
}
int xde = 0;
    struct doc *tmp2 = (struct doc *)malloc(sizeof(struct doc));
    tmp2 = *lista;
    printf("\nIndice:\n");
    while (tmp2 != NULL){
    printf("-> %s \n",tmp2->nombre);
    tmp2=tmp2->next;
    xde ++;
    if(xde == (*cont)){
        return w;
}
}
return w;
}