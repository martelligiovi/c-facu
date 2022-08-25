#include <stdio.h>
void cargar(int mat[10][10],int a)
{
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("Ingrese valor");
            scanf("%d",&mat[i][j]);
        }
    }
}
void mostrar(int mat[][10],int a){
    int i,j;
    for (i=0;i<a;i++){
        printf("\n");
        for (j=0;j<a;j++){
            printf("%d\t",mat[i][j]);
        }
    }
}

void sumatoria(int mat[][10],int a){
    int i,j,suma=0;
    for(i=0;i<a;i++){
        suma=suma+mat[1][i];
    }
    printf("\nla suma de la fila 2 es %d",suma);

}
void mayorseg(int mat[][10],int a){
    int i,mayor=mat[0][1];
    for(i=0;i<a;i++){
        if(mat[i][1]> mayor){
            mayor=mat[i][1];
        }
    }
        printf("\n el valor mayor de la segunda columna es %d",mayor);
        
        
}





int main() {
    int mat[10][10],dim;
    printf("Ingrese cantidad de filas");
    scanf("%d",&dim);
    cargar(mat,dim);
    mostrar(mat,dim);
    sumatoria(mat, dim);
    mayorseg(mat,dim);
    return 0;
}