#include <stdio.h>

void main(){
  
  FILE *pFile;
  FILE *pFile2;
  char buffer[256];

  pFile=fopen("total.txt", "r");
  pFile2=fopen("out.txt", "a");
  if(pFile==NULL) {
    perror("Error opening file.");
  }
  else {
    printf("Appending Now!");
    while(fgets(buffer, sizeof(buffer), pFile)) {
      fprintf(pFile2, "%s", buffer);
    }
  }
  fclose(pFile);
  fclose(pFile2);

}
