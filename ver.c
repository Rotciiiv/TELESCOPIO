enum boolean ver(struct doc **lista,int *cont){

    int i=0,op,pass = 10;
    char elim[30];

printf("\nQue doc?(nombre de la foto): ");
scanf("%s",elim); 
    struct doc *tmp = (struct doc *)malloc(sizeof(struct doc));
    struct doc *prev = NULL;
    tmp = *lista;
while(tmp != NULL){
    pass = strcmp(tmp->nombre,elim);
    if(pass == 0) break;
    prev = tmp; 
    tmp = tmp->next;
    i++;
    if(i == (*cont)){
        printf("No se encontro el doc");
             fflush(stdin);
            getchar();
        return l;
    }
}
//acceder al doc
printf("\nCapturado con %s a las %.2f en (%d,%d):\n",tmp->tel,tmp->hour,tmp->w,tmp->z);
    for (int i = 0; i < 11; i++) {
      printf("%s\n", tmp->foto[i]); 
   }
   printf("'%s' - Astronomo que desea llenar su alma...\n\n1 -> Eliminar / cualquier tecla pa salir",tmp->info);
   scanf("%d",&op);
    if(op == 1){
if(prev == NULL){
    *lista = tmp->next;
}else if(tmp->next == NULL){
    prev->next = NULL;
}else{
    prev->next = tmp->next;
    tmp->next = NULL;
}
printf("\nDoc eliminado con exito");
(*cont)--;
        fflush(stdin);
        getchar();
    return w;
    }else {
                fflush(stdin);
        getchar();
    }

    return w;
}