#include <stdio.h>


void show_run_time_bubble(int state, int total){
  float percent= ((float)state / (float)total)*100;
  system("clear");
  printf("Realizando Insertion Sort\n" );
  printf("Carregando em %.1f%% \n", percent);
}
//variable k is just for showing run time proper
int *vector_bubble_sort (int *vector, int vector_size) {
    int i, j, aux, k=0;

    for (i = vector_size - 1; i > 0; i--) {
      show_run_time_bubble(k, vector_size);

        for (j = 0; j < i; j++) {
            if (vector[j] > vector[j + 1]) {
                aux          = vector[j];
                vector[j]     = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
        k++;
    }

    return vector;
}


void show_vector_bubble_sort_case(char *text, int *vector, int vector_size)
{
    clock_t start, end;

    start = clock();
    int *result = vector_bubble_sort(vector, vector_size);
    end = clock();
    system("clear");
    printf("%s\n", text);

    printf("Tempo de execução da busca: %lfs\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("------------------\n");
}
