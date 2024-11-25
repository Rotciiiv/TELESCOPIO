enum boolean galaxy(struct universe **eyes,struct universe **tailC){
    FILE *ap;
    ap = fopen("estrella1.txt","r+");
    printf("loading");
    struct universe *tmp = (struct universe *)malloc(sizeof(struct universe));
    srand(time(NULL)); //Generamos número aleatorio en base al tiempo
    tmp->w = rand() % 101;
    tmp->z = rand() % 101;
    printf("\nw->%d z->%d",tmp->w,tmp->z);
    for (int i = 0; i < 11; i++) {
      fscanf(ap, "%s", (tmp[i]).imagen); // Leemos cada palabra del archivo y la almacenamos en el arreglo
   }
   
    fclose(ap);
    printf("cargado correctamente\n");
    *eyes = tmp;
    *tailC = tmp;
    tmp->next = tmp;
for (int i = 0; i < 11; i++) {
      printf("%s\n", (tmp[i]).imagen); // Imprimimos cada palabra del arreglo
   }

    return w;
}