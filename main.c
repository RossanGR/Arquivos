#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LerArquivo(int escolha, FILE* ptrArq, char comp[20] ){
      ptrArq = fopen("arquivo.txt", "r");
      
      if(ptrArq == NULL){
        printf("Erro ao abrir o arquivo");
      }
      else{
        printf("\n\n\nArquivo Aberto com sucesso\n\n\n");
      }

      while(fgets(comp, 20, ptrArq) != NULL){
        printf("%s",comp);
     
      }
       fclose(ptrArq);
}

void EscrevernoArquivo(int escolha, FILE* ptrArq,char comp[20]){

    ptrArq = fopen("arquivo.txt", "a");
    printf("Digite alguma coisa:");
    scanf("\n%[^\n]s",comp);
    

    fprintf(ptrArq, "%s\n",comp);

  
    fclose(ptrArq);


}



int main(void) {
  FILE* ptrArq;
  char comp[20];
  int escolha,tamanho,i;

  
  printf("*********** SEJA BEM VINDO ***********");
  printf("\n");
    printf("\n");
  printf("  O que deseja fazer?\n    ");
  printf("\n");
  printf("1 - Ler o arquivo\n2 - Escrever no arquivo");
  printf("\n");
  printf("\n");
  printf("Escolha uma opção: ");
  scanf("%d",&escolha);

 if(escolha == 1){
      LerArquivo(escolha,ptrArq,comp);
 }

 else{
    EscrevernoArquivo(escolha,ptrArq,comp);
  }

 
  return 0;
}