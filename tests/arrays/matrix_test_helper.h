#pragma once
#include <stdio.h>
#include <stdlib.h>

void print_matrix(int **matrix, int w, int h) {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      printf("%02d, ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int ** create_matrix(int w, int h) {
  int **matrix = malloc(h * sizeof(int *));
  for (int i = 0; i < h; i++) {
    matrix[i] = malloc(w * sizeof(int));
  }
  return matrix;
}

void fill_matrix(int **matrix, int w, int h) {
  int c = 1;
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j++) {
      matrix[i][j] = c++;
    }
  }
}

bool compare_matrix(int **m1, int ** m2, int w, int h) {
  for (int i = 0; i < h; i ++) {
    for (int j = 0; j < w; j++) {
      if (m1[i][j] != m2[i][j]) {
        return false;
      }
    }
  }
  return true;
}

void free_matrix(int **matrix, int w, int h) {
  (void)w;

  for (int i = 0; i < h; i++) {
    free(matrix[i]);
  }
  free(matrix);
}
