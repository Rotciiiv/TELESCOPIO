enum boolean tienda(struct pila **teles,float *credits,struct tienda *cart){
    int id;
    float sum=0.0;
    float precio=0.0;
    char nom;
    system("cls");
printf("\nID - Product    \tResistence\tPrice\tCredits:%.2f  ",(*credits));
for (int i=0;i<5;i++){
printf("\n%i %s \t%i    %.2f",i,cart[i].product,cart[i].dmg,cart[i].price);
}
printf("\nCual Quieres comprar?(ID)\n:");
scanf("%d",&id);
if(id<0 || id>5){
    printf("ID Invalido (Presiona enter para continuar....)");
    fflush(stdin);
    getchar();
    return l;
}
struct pila *tmp = (struct pila *)malloc(sizeof(struct pila));
tmp->damage=cart[id].dmg;
if(teles == NULL){
    tmp->next=NULL;
}else tmp->next = *teles;

if(cart[id].price>(*credits)){
    printf("\nNo tienes suficiente money (Presiona enter para continuar....)");
        fflush(stdin);
        getchar();
        return l;
}
(*credits)-=(cart[id].price);
fflush(stdin);
if((*credits) > 5){
printf("\nDeseas ponerle un nombre? -> $5\t Y/N\n: ");
scanf("%c",&nom);
if(nom=='y'||nom=='Y'){
            printf("\nIngrese nombre -> ");
    scanf("%s",tmp->telesc);
    sum=5.0;
    }
}else{
    strcpy(tmp->telesc,cart[id].product);
}
printf("\nComprado un %s con nombre %s\nPrecio total: %.2f\nPresione enter para continuar...",cart[id].product,tmp->telesc,(cart[id].price)+sum);
*teles = tmp;
    fflush(stdin);
    getchar();
return w;
}