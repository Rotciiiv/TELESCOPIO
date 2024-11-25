struct pila *popTel(struct pila **top,int *cont ){
if(*top	== NULL) return NULL;

struct pila *tmp = (struct pila *)malloc(sizeof(struct pila));
tmp = *top;
*top= tmp->next;
tmp->next = NULL;
(*cont)--;
return tmp;
}