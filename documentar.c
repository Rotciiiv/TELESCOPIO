enum boolean documentar(struct universo **ojo,struct doc **lista,struct pila **actual){
/*
*ojo apunta a la imagen y coords q queremos guardar, no se desencola, solo se copia pq es una foto
la hora e info la ingresa el user
*/
system("cls");
char conf;
struct universo *tmp = *ojo;
struct pila *ac = *actual; //copiar el telescopio
struct doc *pmt = (struct doc *)malloc(sizeof(struct doc));
pmt->w = tmp->x;
pmt->z = tmp->y;
    strcpy(pmt->tel,ac->telesc);
for(int i = 0; i < 11; i++){
    strcpy(pmt->foto[i],tmp->imagen[i]);
}
printf("/////////////////////////////////////\nFoto a documentar:\n");
    for (int i = 0; i < 11; i++) {
      printf("%s\n", pmt->foto[i]); // Imprimimos y comprobamos q si se guardo en la nueva variable
   }
printf("\nTelescopio usado-> %s\nCoords- x:%d y:%d\nIngrese nombre de la foto: ",pmt->tel,pmt->w,pmt->z); 
scanf("%s",pmt->nombre);  
printf("\nIngresa su hora con formato ab.cd: ");
scanf("%f",&pmt->hour);
printf("\nObservaciones: (texto libre, hasta 100 caracteres)\n:"); 
fflush(stdin);
fgets(pmt->info, 100, stdin);
         printf("Texto: %s\nHora:%.2f\n Confirmar Y/N -> ", pmt->info,pmt->hour);
        scanf("%c",&conf);
        if(conf == 'y'||conf == 'Y'){
            if(lista == NULL){
                pmt->next = NULL;
            }else{
                pmt->next = *lista;
            }
            *lista = pmt;
            printf("\nGuardado en lista con exito");
            printf("\nPresione enter pa continuar...");
            fflush(stdin);
            getchar();
            return w;
        }else {
            printf("\nIntentelo de nuevo");
            printf("\nPresione enter pa continuar...");
            fflush(stdin);
            getchar();
            return l;
        }

}