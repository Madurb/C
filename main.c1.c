include <stdio.h>
include <stdlib.h>

int main () {
float valor_prest, taxa_juros, valor_a_pagar;

int tempo_dias;

printf ("informe o valor da prestação ");
scanf ("%f", &valor_prest);

printf ("informe a taxa-juros");
scanf ("%f", &taxa_juros);

printf ("informe o tempo em dias");
scanf ("%d, &tempo_dias");

valor_a_pagar = valor_prest + (valor_prest * (taxa_juros/100) * tempo_dias);

printf ("\n o valor a ser pago é %f", valor_a_pagar);
}