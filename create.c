enum boolean create(struct universo **ojo){
printf("Loading...");
*ojo = NULL;
struct universo *tmp = (struct universo*)malloc(sizeof(struct universo));
struct universo *tmp2 = (struct universo*)malloc(sizeof(struct universo));
struct universo *tmp3 = (struct universo*)malloc(sizeof(struct universo));
struct universo *tmp4 = (struct universo*)malloc(sizeof(struct universo));
struct universo *tmp5 = (struct universo*)malloc(sizeof(struct universo));
srand(time(NULL));
tmp->x = rand() % 101;
tmp->y = rand() % 101;
tmp2->x = rand() % 101;
tmp2->y = rand() % 101;
tmp3->x = (tmp->x)/2;
tmp3->y = (tmp->y)/2;
tmp4->x = (tmp2->x)/2;
tmp4->y = (tmp2->y)/2;
tmp5->x = 20 + rand() % 80;
tmp5->y = 60 + rand() % 20;


FILE *arch;
int i,j;
arch = fopen("estrella1.txt", "r");
for (i = 0; i < 11; i++) {
      fscanf(arch, "%s", tmp->imagen[i]); 
   }
   *ojo = tmp;
for (i = 0; i < 11; i++) {
      fscanf(arch, "%s", tmp2->imagen[i]); 
   }   
   tmp->next=tmp2;
for (i = 0; i < 11; i++) {
      fscanf(arch, "%s", tmp3->imagen[i]); 
   }
   tmp2->next=tmp3;
for (i = 0; i < 11; i++) {
      fscanf(arch, "%s", tmp4->imagen[i]); 
   }
   tmp3->next=tmp4;
for (i = 0; i < 11; i++) {
      fscanf(arch, "%s", tmp5->imagen[i]); 
   }
   tmp4->next=tmp5;
   tmp5->next=*ojo;
   fclose(arch); 
   


    return w;
}