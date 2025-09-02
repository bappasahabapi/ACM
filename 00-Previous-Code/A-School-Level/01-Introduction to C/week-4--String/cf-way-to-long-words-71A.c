#include <stdio.h>
#include <string.h>

int main() {
  // int test_loop;
  // scanf("%d",&test_loop);
  char name[100];
  fgets(name, sizeof(name), stdin);
  int length = strlen(name) - 1;
  // printf("%d",length);
  int i;
  
  // for (i = 0; i < test_loop; i++) {
    if (length > 10) {
      printf("%c%d%c", name[0], length - 2, name[length - 1]);
    } else {
      puts(name);
    }
  // }
  // printf("\n");

  return 0;
}