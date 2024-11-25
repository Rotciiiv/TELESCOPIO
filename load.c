enum boolean load(struct tienda *cart){

FILE *archivo;
archivo = fopen("producs.txt","r+");
printf("\nloading...");
if(archivo != NULL){
for(int i=0;i<5;i++){
    fscanf(archivo,"%s %d %f",cart[i].product ,&cart[i].dmg, &cart[i].price);
}
printf("\nProductos cargados");
fclose(archivo);
return w;
}else printf("\nNo se pudo cargar");
return l;
}