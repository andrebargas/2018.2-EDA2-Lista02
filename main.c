#include <stdio.h>
#include <stdlib.h>
#include "vector_generator.c"
#include "vector_insertion_sort.c"
#include "vector_bubble_sort.c"
#include "utils.c"
#include "vector_selection_sort.c"
#define MAX_VALOR 10000
#define NUM_ELEMENTS 1000


void show_menu(){
    system("clear");
    printf("------------------\n");
    printf("SELECIONE UMA OPÇÃO \n");
    printf("1 - Selection Sort \n");
    printf("2 - Insertion Sort \n");
    printf("3 - Bubble Sort \n");
    printf("0 - SAIR \n");
    printf("------------------\n");

}

void run_search_choice(int search_option)
{
    int *random_vector = aleatory_vector_generator(NUM_ELEMENTS, MAX_VALOR);
    int *best_case_vector = oriented_vector_generator(NUM_ELEMENTS, MAX_VALOR);
    int *worst_vector = worst_case_vector(NUM_ELEMENTS, MAX_VALOR);

    if (search_option == 1)
    {
      show_vector_selection_sort_case("Ordenação de um vetor aleatorio",random_vector, NUM_ELEMENTS);
      show_vector_selection_sort_case("Pior caso: vetor em ordem decrescente",worst_vector, NUM_ELEMENTS);
      show_vector_selection_sort_case("Melhor caso: Vetor ordenado", best_case_vector, NUM_ELEMENTS);
    }
    else if (search_option == 2)
    {
      show_vector_insertion_sort_case("Ordenação de um vetor aleatorio",random_vector, NUM_ELEMENTS);
      show_vector_insertion_sort_case("Pior caso: vetor em ordem decrescente",worst_vector, NUM_ELEMENTS);
      show_vector_insertion_sort_case("Melhor caso: Vetor ordenado", best_case_vector, NUM_ELEMENTS);
    }
    else
    {
      show_vector_bubble_sort_case("Ordenação de um vetor aleatorio",random_vector, NUM_ELEMENTS);
      show_vector_bubble_sort_case("Pior caso: vetor em ordem decrescente",worst_vector, NUM_ELEMENTS);
      show_vector_bubble_sort_case("Melhor caso: Vetor ordenado", best_case_vector, NUM_ELEMENTS);
    }

}

int main(){
  int option;

  show_menu();
  scanf("%d", &option);
  run_search_choice(option);

  return 0;
}
