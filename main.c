#include <stdio.h>
#include <stdlib.h>
#include "vector_generator.c"
#include "utils.c"
#include "vector_selection_sort.c"

#define MAX_VALOR 10000
#define NUM_ELEMENTS 100000


void show_menu(){
    system("clear");
    printf("------------------\n");
    printf("SELECIONE UMA OPÇÃO \n");
    printf("1 - Selection Sort \n");
    printf("2 - Insertion Sort \n");
    printf("3 - BUSCA POR INTERPOLACAO \n");
    printf("0 - SAIR \n");
    printf("------------------\n");

}

void run_search_choice(int search_option, int *vector)
{
    if (search_option == 1)
    {
      show_vector_selection_sort_case("Ordenação de um vetor aleatorio",vector, NUM_ELEMENTS);
    }
    else if (search_option == 2)
    {

    }
    else
    {

    }

}

int main(){
  int option;
  int *vector = aleatory_vector_generator(NUM_ELEMENTS, MAX_VALOR);

  show_menu();
  scanf("%d", &option);
  run_search_choice(option, vector);

  return 0;
}
