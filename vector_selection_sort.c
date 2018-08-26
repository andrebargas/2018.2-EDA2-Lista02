#include <stdio.h>
#define CLK_PER_SEC 100000


//Função para mostrar o andamento da ordenação pela interação divida pelo numero de elementos
void show_run_time_selection(int state, int total){
  float percent= ((float)state / (float)total)*100;
  system("clear");
  printf("Realizando Selection Sort\n" );
  printf("Carregando em %.1f%% \n", percent);
}


int* vector_selection_sort(int *vector, int vector_size){
  int index_min;
  int aux, i, j;

  for(i=0; i < vector_size; i++){
    show_run_time_selection(i+1, vector_size);
    index_min= i;

    for(j=i+1; j<vector_size; j++){
      if (vector[j] < vector[index_min]) {
        index_min = j;
      }
    }
    if(index_min != i){
      aux = vector[index_min];
      vector[index_min] = vector[i];
      vector[i] = aux;
    }
  }

  return vector;
}


void show_vector_selection_sort_case(char *text, int *vector, int vector_size)
{
    clock_t start, end;

    start = clock();
    int *result = vector_selection_sort(vector, vector_size);
    end = clock();
    system("clear");
    printf("%s\n", text);
    // if (result != -1)
    //   printf("O número desejado está na posição: %d\n", result);
    // else
    //   printf("Número não encontrado\n");
    printf("Tempo de execução da busca: %lfs\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("------------------\n");
}
