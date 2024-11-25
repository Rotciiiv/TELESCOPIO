enum boolean save(struct doc **lista){
    if(*lista == NULL){
        printf("No has documentao na'(presione cualquier letra pa continuar....)");
            fflush(stdin);
            getchar();
        return l;
    }        
    struct doc *tmp = (struct doc *)malloc(sizeof(struct doc));
    tmp = *lista;
    FILE *ap=fopen("report.txt","w+");
    while (tmp != NULL)
    {    
        fprintf(ap,"--------------------------------------\n\t%s\n\nCapturado con %s a las %.2f en (%d,%d):\n",tmp->nombre,tmp->tel,tmp->hour,tmp->w,tmp->z);
    for (int i = 0; i < 11; i++) {
      fprintf(ap,"%s\n", tmp->foto[i]); 
   }
   fprintf(ap,"'%s' - Astronomo que desea llenar su alma...'\n",tmp->info);
   tmp=tmp->next;
    }
    printf("Se ah creado el reporte (report.txt)");
                fflush(stdin);
            getchar();
    fclose(ap);
    

    return w;
}