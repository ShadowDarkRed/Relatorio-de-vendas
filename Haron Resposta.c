#include <stdio.h>

int main()
{   int n,i,venda_diaria,dinheiro=0,debito,credito;
    printf("\tFechamento\n");
    printf("\nInforme a quantidades de vendas do dia: ");
    scanf("%d",&n);
    float peso[n] ,valor_prato[n],media,media_peso,maior,menor;
    char pagamento;
    
    if ( 10 <= n && n <= 1000) {
        for ( i=0;i<n;i++){
            printf("\tinforme o peso consumido pelo %dº cliente: ",i+1);
            scanf(" %f",&peso[i]);
            printf("\tInforme qual foi a forma de pagamento\n\t1 - Dinheiro\n\t2 - Debito\n\t3 - Credito\n");
            scanf(" %c",&pagamento);
                switch( pagamento )
{   case '1':
            dinheiro = dinheiro + 1;
            break;
    case '2':
            debito = debito + 1;
            break;
    case '3':
            credito = credito + 1;
            break; }
        }    
        for ( i=0;i<n;i++) {
            media = media + peso[i];
        }
        media_peso = media / n ;
        system("clear");
        printf ("\tA media consumida foi de: %.2fKg\n",media_peso);
        
  maior = peso[0];
  menor = peso[0];
  for(i = 0; i < n; i++){
    if(peso[i] > maior){
      maior=peso[i];
    }
    if (peso[i] < menor) {
      menor = peso[i];
    }
  }
  
  printf("\tO maior pedido foi de: %.2fKg\n", maior);
  printf("\tO menor pedido foi de: %.2fKg", menor);
        
        printf("\n\tA arrecadação do dia foi de: R$%.2f",media * 75.50);
        
        if (dinheiro > debito && dinheiro > credito){
            printf("\n\tA forma de pagamento mais utilizada foi o dinheiro!");
        }
        else if (debito > dinheiro && debito > credito){
            printf("\n\tA forma de pagamento mais utilizada foi o cartão de débito!");
        }
        else {
            printf("\n\tA forma de pagamento mais utilizada foi o cartão de crédito!");
        }
    }
    
    
    else{
       return 0; 
    }
    
    
    return 0;
}