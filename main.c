#include <stdio.h>

int main() {
  const int password = 123456;
  int watcher = 0;
  int userPass;

  do
  {
    if (watcher == 3) {
      printf("Haz superado el numero de intentos\n");
      break;
    }
    
    printf("Ingrese la contraseña:\n");
    scanf("%d", &userPass);
    
    if (password != userPass) {
      watcher++;
      printf("Contraseña incorrecta. intento %d de 3\n", watcher);
      continue;
    } else {
      printf("Contraseña correcta!\n");
      break;
    }
    
  } while (watcher <= 3);
  
  return 0;
}