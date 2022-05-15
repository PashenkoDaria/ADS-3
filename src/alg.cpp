// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int left = 0, right = size - 1, centr, count = 0, k = -1;
while (left <= right) {
  centr = left + (right - left) / 2;
  if (value == arr[centr]) {
    count++;
    k = centr;
    break;
  }
  if (value > arr[centr]) {
    left = centr + 1;}
  else
    right = centr - 1;
  }
  if (k >= 0) {
  for (int i = 0; i < k; i++) {
    if (value == arr[i])
    count++;
  }
  for (int j = size - 1; j > k; j--) {
    if (value == arr[j])
    count++;
  }
  }
  if (count > 0)
    return count;
  else
    return 0; // если ничего не найдено
}
