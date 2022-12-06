#include <stdio.h>#include <stdlib.h>
bool teste(int n) { if (((n % 7) != 0) || (((n + 3) % 10) == 0) ) { return true; } else { return false; }}

int main() {
int i, vetor[100];
for (i = 0; i <= 100; i++) { if (teste(i)) { printf("%d - ", i); } }
system("pause"); return 0;}
