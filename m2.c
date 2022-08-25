#include <stdio.h>

void ingresar(int mat [5][5]){
  int x,y;
  for (x=0;x<5;x++){
    for(y=0;y<5;y++){
      printf("dame los n");
      scanf("%d",&mat[x][y]); 
    }
  }
}
void mostrar(int mat [][5]){
  int x,y;
  for (x=0;x<5;x++){
    for(y=0;y<5;y++){ 
      printf("%d-",mat[x][y]);
    }
    printf("\n");
  }
}

int main() {
  int mat [5][5];
  ingresar(mat);
  mostrar(mat);

  return 0;
}