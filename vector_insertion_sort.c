#include <stdio.h>
#define CLK_PER_SEC 100000


//Função para mostrar o andamento da ordenação pela interação divida pelo numero de elementos
void show_run_time_insertion(int state, int total){
  float percent= ((float)state / (float)total)*100;
  system("clear");
  printf("Carregando em %.1f%% \n", percent);
}

int* vector_insertion_sort(int *vector, int vector_size){
  int aux, i, j;

  for(i=0; i < vector_size; i++){
    show_run_time_insertion(i+1, vector_size);
    j = i;

    while((j != 0) &&  (vector[j] > vector[j-1])){

      aux = vector[j];
      vector[j] = vector[j-1];
      vector[j-1] = aux;
      j--;

    }
  }
  return vector;
}


void show_vector_insertion_sort_case(char *text, int *vector, int vector_size)
{
    clock_t start, end;

    start = clock();
    int *result = vector_insertion_sort(vector, vector_size);
    end = clock();
    system("clear");
    printf("%s\n", text);

    printf("Tempo de execução da busca: %lfs\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("------------------\n");
}
