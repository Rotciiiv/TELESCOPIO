int mostrar(struct universo **ojo,struct pila **actual){
struct universo *tmp = *ojo;
struct pila *act = *actual;
struct pila *n;

if(act == NULL){
    struct pila *new = (struct pila *)malloc(sizeof(struct pila));
    system("cls");
    printf("\nHas recibido un nuevo Telescopio. Ve a probarlo!\nDale un nombre\n .====_   -> :");
    scanf("%s",new->telesc);
    new->damage = rand() % 5 + 10;
    n=new;
    *actual = new; 
}else n = *actual;

int op;
while(w){
    if(n->damage == 0){
        printf("\nTelescopio roto, compra uno nuevo!!!\a");
        fflush(stdin);
            getchar();
        return 0;
    }
    system("cls");
    printf("\n Telescopio: %s  resistencia: %d \n",n->telesc,n->damage);
    printf("coords x:%d  y:%d\n\n",tmp->x,tmp->y);
    for (int i = 0; i < 11; i++) {
      printf("%s\n", tmp->imagen[i]); 
   }
   printf("\n\n1 -> Next \n2 -> Documentar  \n3 ->Regresar ");
   scanf("%d",&op);
   if(op == 1){
    tmp = tmp->next;
    *ojo = tmp;
    n->damage --;
    if(n->damage == 0){
        *actual = NULL;
    }
   }else return op;
}

return w;
}