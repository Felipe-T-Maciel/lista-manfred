#include <stdio.h>

void calcularComissao(int codigo, float salarioFixo, float valorVenda) {  
   float comissao, salarioTotal;  
   if (valorVenda >= 100000.00) {  
       comissao = valorVenda * 0.10;  
   } else {  
       comissao = valorVenda * 0.06;  
   }  
   salarioTotal = salarioFixo + comissao;  
   printf("Codigo do vendedor: %d\n", codigo);  
   printf("Salario total: R$ %.2f\n", salarioTotal);  
   printf("Valor da comissao: R$ %.2f\n", comissao);  
}  

void main() {  
   int codigo;  
   float salarioFixo, valorVenda;  
   char continuar;  

   do {  
       printf("Digite o codigo do vendedor: ");  
       scanf("%d", &codigo);  
       printf("Digite o salario fixo do vendedor: ");  
       scanf("%f", &salarioFixo);  
       printf("Digite o valor da venda efetuada pelo vendedor: ");  
       scanf("%f", &valorVenda);  

       calcularComissao(codigo, salarioFixo, valorVenda);  

       printf("Deseja realizar outra transacao? (S/N): ");  
       scanf(" %c", &continuar);  
   } while (toupper(continuar) == 'S');  
}