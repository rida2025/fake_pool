#include <unistd.h>

void ft_putchar(char c) {
  write(1, &c, 1);
}

void ft_print_combn_recursive(int n, int *arr, int index) {
  if (index == n) {
    for (int i = 0; i < n; i++) {
      ft_putchar(arr[i] + '0');
    }
    ft_putchar(',');
    ft_putchar(' ');
    return;
  }

  for (int i = (index == 0) ? 0 : arr[index-1]+1; i < 10; i++) {
    arr[index] = i;
    ft_print_combn_recursive(n, arr, index + 1);
  }
}

void ft_print_combn(int n) {
  int arr[n];
  ft_print_combn_recursive(n, arr, 0);
}

int main() {
  ft_print_combn(3);
  return 0;
}