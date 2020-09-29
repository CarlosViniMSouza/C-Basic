printf("Faca um algoritmo que receba o salario-base de um funcionario, calcule e mostre o salario a receber, 5% sobre o salario-base e paga imposto de 7% tambem sobre o salario-base.);
// Autor: Prof. Tiago Eugenio de Melo
// Data: 14.07.2010
// Contato: tiagodemelo@gmail.com
#include <stdio.h>
int main() 
{
float salario, salario_base, gratificacao=0.05,
imposto=0.07;
scanf("%f", &salario_base);

salario = salario_base + salario_base*gratificacao-
salario_base*imposto;

printf("O salário a receber é %f", salario);
return 0;
}
2. Escreva um algoritmo para ler 2 valores (podem ser reais, inteiros ou caracteres)
para as vari�veis A e B e efetuar a troca dos valores de forma que a vari�vel A
passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da
vari�vel A. Apresentar os valores trocados.
Solu��o:
// Autor: Prof. Tiago Eugenio de Melo
// Data: 26.07.2010
// Contato: tiagodemelo@gmail.com
#include <stdio.h>
int main() {
int a, b, aux;
scanf("%d %d", &a, &b);
aux = a;
a = b;
b = aux;
printf("a = %d e b = %d", a, b);
return 0;
}
3. Dados tr�s n�meros inteiros do meio externo, imprimir o menor deles.

Solu��o:
// Autor: Prof. Tiago Eugenio de Melo
// Data: 26.07.2010
// Contato: tiagodemelo@gmail.com
#include <stdio.h>
int main() {
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if ((a<=b) && (a<=c))
printf("O menor é %d.", a);
else if ((b<=a) && (b<=c))
printf("O menor é %d.", b);
else if ((c<=a) && (c<=b))
printf("O menor é %d.", c);
else
printf("Os valores são iguais.");
return 0;
}
4. Fazer um algoritmo para ler um n�mero e mostrar se � igual a zero, positivo ou
negativo.
Solu��o:
// Autor: Prof. Tiago Eugenio de Melo
// Data: 26.07.2010
// Contato: tiagodemelo@gmail.com
#include <stdio.h>
int main() {
int num;
scanf("%d", &num);
if (num==0)
printf("Igual a zero.");
else if (num>0)
printf("Positivo");
else
printf("Negativo");
return 0;
}
5. Escreva um algoritmo que leia dois valores inteiros e imprima qual � a rela��o
entre eles (maior, menor ou iguais).
Solu��o:
// Autor: Prof. Tiago Eugenio de Melo
// Data: 26.07.2010
// Contato: tiagodemelo@gmail.com

#include <stdio.h>
int main() {
int a,b;
scanf("%d %d", &a, &b);
if (a>b)
printf("%d é maior que %d.", a, b);
else if (b>a)
printf("%d é menor que %d.", a, b);
else
printf("São valores iguais.");
return 0;
}
6. Fa�a um programa que leia o pre�o de uma mercadoria e a quantidade
comprada, calcule e imprima o valor da compra.
7. Leia duas vari�veis A e B. A seguir, calcule a soma entre elas e atribua �
vari�vel SOMA. A seguir escrever o valor desta vari�vel.
8. Leia duas vari�veis A e B. A seguir, calcule o produto entre elas e atribua �
vari�vel PROD. A seguir mostre a vari�vel PROD com mensagem
correspondente.
9. Leia 4 vari�veis A, B, C e D. A seguir, calcule e mostre a diferen�a do produto
de A e B pelo produto de C e D (A*B-C*D).
10. Escreva um programa em C que leia um valor inteiro e verifique se este valor � o
dobro de um n�mero. Por exemplo, 14 � o dobro de 7 (resposta sim), enquanto
que 16 � o dobro de 8 (resposta n�o).
11. Escrever um algoritmo para determinar o consumo m�dio de um autom�vel
sendo fornecidos a dist�ncia total percorrida pelo autom�vel e o total de
combust�vel gasto.
12. Escreva um algoritmo que leia cinco n�meros inteiros e determine qual dos
quatro primeiros n�meros est� mais pr�ximo do �ltimo n�mero digitado. Por
exemplo, se forem digitados os n�meros 2, 6, 10, 15 e 9, o n�mero 10 � o que
est� mais pr�ximo do �ltimo n�mero (valor 9).
13. Dados dois pontos quaisquer do plano, de coordenadas (x1, y1) para o primeiro
ponto e (x2, y2) para o segundo ponto, escreva um algoritmo para determinar a
dist�ncia entre eles. A f�rmula que efetua o c�lculo �:

// Autor: Prof. Tiago Eugenio de Melo
// Data: 26.07.2010
// Contato: tiagodemelo@gmail.com
#include <stdio.h>
#include <math.h>

int main() {
float x1,y1,x2,y2;
float distancia;
printf("Digite o primeiro ponto: \n");
scanf("%f %f", &x1, &y1);
printf("Digite o segundo ponto: \n");
scanf("%f %f", &x2, &y2);
distancia = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
printf("A distância entre os pontos é %.2f.",
distancia);
return 0;
}
14. Escreva um algoritmo que leia as coordenadas (x, y) de um ponto de um plano e
o raio de uma circunfer�ncia. Em seguida, o algoritmo dever� verificar a rela��o
de pertin�ncia do ponto e a circunfer�ncia (o ponto poder� estar fora, dentro ou
na fronteira da circunfer�ncia, de acordo com a sua dist�ncia com o centro da
circunfer�ncia).

15. Escreva um algoritmo para calcular a �rea de um c�rculo. O usu�rio dever�
digitar o raio. Considere que o valor de pi � igual a 3.14. A f�rmula da �rea de
um c�rculo �:

2
area=Pi*r*r

Os empregados de uma empresa recebem por hora trabalhada. Para as primeiras
quarenta horas da semana, eles recebem o sal�rio hora multiplicado pelo n�mero
de horas trabalhadas. Para as horas que excederem quarenta horas eles recebem
o dobro por hora. � fornecido o n�mero de cada empregado, o sal�rio hora e o
total de horas trabalhadas. Escreva um algoritmo para determinar o sal�rio bruto
para um �nico funcion�rio.
17. Escreva um algoritmo que leia o n�mero de um funcion�rio, seu n�mero de
horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse
funcion�rio. A seguir, mostre o n�mero e o sal�rio do funcion�rio.
18. Escrever um algoritmo que leia 3 valores A, B e C. A seguir, encontre o maior
dos tr�s valores e o escreva. Utilize a f�rmula:

19. Fa�a um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre:
a) a idade dessa pessoa.

b) quantos anos ela ter� em 2030.
20. Escrever um algoritmo para ler o raio de um c�rculo, calcular e escrever a sua
�rea.
21. Escrever um algoritmo para ler o sal�rio mensal e o percentual de reajuste.
Calcular e escrever o valor do novo sal�rio.
22. Fa�a um algoritmo que l� 2 valores (A e B). Ap�s a mensagem, o algoritmo
deve mostrar uma mensagem S�o M�ltiplos ou N�o s�o M�ltiplos,
correspondente aos valores lidos.
23. Escreva um algoritmo que leia um caracter e informe se este � ou n�o uma
vogal.
24. Escreva um algoritmo que leia um caracter e informe se este � ou n�o uma
consoante.
25. Fa�a um algoritmo que leia 4 vari�veis A, B, C e D. A seguir, se B for maior do
que C e se D for maior do que A e a soma de C com D for maior que a soma de
A e B e se C e D, ambos, forem positivos e se a vari�vel A for par escrever a
mensagem valores aceitos, sen�o escrever valores n�o aceitos.
26. Escrever um algoritmo para ler uma temperatura em graus Celsius, calcular e
escrever o valor correspondente em Fahrenheit.
F�rmula:

27. Escreva um algoritmo para calcular e escrever uma tabela de graus Celsius em
fun��o de graus Farenheit, com graus Celsius variando de 0 at� 100.
28. Escrever um algoritmo para ler as dimens�es de uma cozinha (comprimento,
largura e altura), calcular e escrever a quantidade de azulejos para se colocar em
todas as paredes (considere que n�o ser� descontada a �rea ocupada por portas e
janelas). Cada caixa de azulejos possui 1,5 metros quadrados.
29. Escreva um algoritmo para ler v�rios n�meros inteiros e positivos, at� que seja
lido um n�mero menor que zero. Para cada n�mero mostrar seu dobro.
30. Ler um n�mero N qualquer menor ou igual a 50 e apresentar o valor obtido da
multiplica��o sucessiva de N por 3 (ou seja: N*3, N*3*3, N*3*3*3, ...),
enquanto o produto for menor do que 250.

31. Escreva um algoritmo que calcule e mostre a �rea de um trap�zio. A f�rmula do
trap�zio �

(0.5)
32. Escrever um algoritmo para ler o n�mero de eleitores de um munic�pio, o
n�mero de votos brancos, nulos e v�lidos. Calcular e escrever o percentual que
cada um representa em rela��o ao total de eleitores.
33. Escreva um algoritmo que pe�a uma letra ao usu�rio. Em seguida, imprima um
quadrado na tela colocando a letra lida no centro do quadrado.
- - -
| A |
- - -
34. Uma loja vende bicicletas com um acr�scimo de 50% sobre o pre�o de custo.
Ela paga a cada vendedor 2 sal�rios m�nimos mensais, mais uma comiss�o de
15% sobre o pre�o de custo de cada bicicleta vendida, dividida igualmente entre
eles. Escreva um algoritmo que leia o n�mero de empregados da loja, o valor do
sal�rio m�nimo, o pre�o de custo de cada bicicleta, o n�mero de bicicletas
vendidas, calcule e escreva: o sal�rio total de cada empregado e o lucro l�quido
da loja.
35. Escreva um algoritmo que leia um valor inteiro em segundos e depois converta
essa valor para mostr�-lo no formato hh:mm:ss.
36. Um motorista de t�xi deseja calcular o rendimento de seu carro na pra�a.
Sabendo-se que o pre�o do combust�vel � de R$1,72, escreva um algoritmo para
ler a marca��o do od�metro no in�cio do dia, a marca��o no final do dia, o
n�mero de litros de combust�vel gastos e o valor total (R$) recebido dos
passageiros. Calcular e escrever a m�dia do consumo em km/l e o lucro l�quido
do dia.
37. Escreva um algoritmo que mostre quantas horas, minutos e segundos existem
em um intervalo de horas que est� sendo lido pelo teclado.
38. Fa�a um programa que leia tr�s valores em vari�veis distintas e armazene a
soma em outra vari�vel. Escreva o valor da soma.
39. Fa�a um programa que leia 3 valores em vari�veis distintas, armazene a soma
das duas primeiras em uma nova vari�vel e o produto das duas �ltimas em outra,
e mostre como resultado o produto das duas novas vari�veis.
40. Fa�a um algoritmo para ajudar a bilheteria do metr�. O operador deve informar
o tipo do bilhete (unit�rio, duplo ou 10 viagens) e o valor pago pelo passageiro.
O sistema deve mostrar, ent�o, a quantidade de bilhetes poss�veis e o troco que o
passageiro deve receber. Considere a seguinte tabela de pre�o:

Bilhete unit�rio R$ 1,30
Bilhete duplo R$ 2,60
Bilhete de 10 viagens R$ 12,00

41. Fa�a um algoritmo em pseudoc�digo que calcule a m�dia ponderada de um
aluno, a partir de suas 3 notas obtidas no curso, sabendo-se que a primeira
avalia��o tem peso 2, a segunda tem peso 4 e a terceira tem peso 4. Mostre, ao
final, a mensagem : "A M�DIA FINAL DE ... FOI ... ". Informar tamb�m se o
aluno foi aprovado, mostrando a mensagem "APROVADO" caso a nota final
seja maior ou superior a 7,0.

42. Modifique o algoritmo da m�dia do aluno para informar:
APROVADO ............ caso a nota final esteja no intervalo [10, 7]
RECUPERA��O...... caso a nota final esteja no intervalo [5, 7)
REPROVADO .......... caso a nota final esteja no intervalo [0, 5)
43. Fa�a um algoritmo que leia 2 valores num�ricos e um s�mbolo. Caso o s�mbolo
seja um dos relacionados abaixo efetue a opera��o correspondente com os
valores. Aten��o para a divis�o por 0!
+ opera��o de soma
- opera��o de subtra��o
* opera��o de multiplica��o
/ opera��o de divis�o
44. Escrever um algoritmo para ler dois valores e uma das seguintes opera��es a
serem executadas, codificadas da seguinte forma:
1 - Adi��o
2 - Subtra��o
3 - Multiplica��o
4 - Divis�o
Calcular e escrever o resultado dessa opera��o sobre os dois valores lidos.
45. Dados 3 valores A, B e C, verifique se podem ser valores de lados um tri�ngulo
e, se for, determine se o tri�ngulo � eq�il�tero, is�sceles ou escaleno.

46. Sejam 3 n�meros distintos A, B, C. Coloque-os em ordem crescente, utilizando
sele��o encadeada (ou aninhada).
47. Escrever um algoritmo para ler cinco valores inteiros e escrever na tela o maior e
o menor deles.
48. Escrever um algoritmo para ler cinco valores inteiros, calcular a sua m�dia, e
escrever na tela os que s�o superiores � m�dia.
49. Escrever um algoritmo para ler a quantidade de horas aula dadas por dois
professores e o valor por hora recebido por cada um. Mostrar na tela qual dos
professores tem sal�rio total maior.
50. Existem n�meros de 4 d�gitos (entre 1000 e 9999) que obedecem � seguinte
caracter�stica: se dividirmos o n�mero em dois n�meros de dois d�gitos, um
composto pela dezena e pela unidade, e outro pelo milhar e pela centena,
somarmos estes dois novos n�meros gerando um terceiro, o quadrado deste
terceiro n�mero � exatamente o n�mero original de quatro d�gitos. Por exemplo:
2025 dividindo: 20 e 25 somando temos 45 45 = 2025.
Escreva um programa para ler um n�mero e verificar se ele obedece a esta
caracter�stica.
51. Escrever um algoritmo que leia valores inteiros em duas vari�veis distintas e se
o resto da divis�o da primeira pela segunda for 1 mostre a soma dessas vari�veis
mais o resto da divis�o; se for 2 escreva se o primeiro e o segundo valor s�o
pares ou �mpares; se for igual a 3 multiplique a soma dos valores lidos pelo
primeiro; se for igual a 4 divida a soma dos n�meros lidos pelo segundo, se este
for diferente de zero. Em qualquer outra situa��o mostre o quadrado dos
n�meros lidos.
52. Dadas a altura e o sexo de uma pessoa, determinar seu peso ideal, utilizando as
seguintes f�rmulas:
o para homens: (72,7 * altura) - 58
o para mulheres: (62,1 * altura) - 44,7
53. Calcular as ra�zes de uma equa��o do 2o grau, sendo que os valores A, B e C s�o
fornecidos pelo usu�rio, levando em considera��o a an�lise da exist�ncia de
ra�zes reais.
54. Calcular a m�dia final obtida por um aluno, para 4 notas bimestrais,
acrescentando uma mensagem de aprovado para m�dia final maior ou igual a 7,
e reprovado em caso contr�rio.
55. Obter um valor qualquer e perguntar ao usu�rio se este valor � em d�lares ou em
reais. Caso sejam d�lares, convert�-los para reais. Se forem reais, convert�-los
para d�lares. (� importante obter a cota��o do d�lar do dia).
56. Para 2 n�meros quaisquer, informar:
o maior
o menor
o iguais

o qual n�mero � par
o qual n�mero � �mpar
57. Um banco conceder� um cr�dito especial aos seus clientes de acordo com o
saldo m�dio no �ltimo ano. Fa�a um algoritmo que receba o saldo m�dio de um
cliente e calcule o valor do cr�dito, de acordo com a tabela a seguir. Mostre o
saldo m�dio e o valor do cr�dito.

Saldo M�dio Valor do Cr�dito
Acima de R$ 400,00 30% do saldo m�dio
de R$300,00 a R$400,00 25% do saldo m�dio
de R$200,00 a R$300,00 20% do saldo m�dio
at� R$200,00 10% do saldo m�dio

58. Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre, de
acordo com as tabelas a seguir, o novo pre�o e a classifica��o:
Tabela 1 - percentual de aumento
Pre�o Percentual de aumento
at� R$50,00 5
entre R$50,00 e R$100,00 10
acima de R$100,00 15
Tabela 2 - Classifica��es
Novo pre�o Classifica��o
at� R$80,00 barato
entre R$80,00 e R$120,00 (inclusive) normal
entre R$120,00 e R$200,00 (inclusive) caro
acima de R$200,00 muito caro

59. Fa�a um algoritmo que receba a idade de um nadador e mostre a sua categoria
usando as regras a seguir:

Categoria Idade
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 16 a 30
Senior acima de 30

60. Uma empresa decidiu dar uma gratifica��o de natal a seus funcion�rios, baseada
no n�mero de horas extras e no n�mero de horas que o funcion�rio faltou ao
trabalho. O valor do pr�mio � obtido pela consulta na tabela a seguir, em que: H
= n�mero de horas extras-2/3*n�mero de horas-falta
H Gratifica��o
> 2400 R$500,00
de 1800 a 2400 R$400,00
de 1200 a 1800 R$300,00
de 600 a 1200 R$200,00
<600 R$100,00

61. Fa�a um algoritmo que receba: a) o c�digo do estado de origem da carga de um
caminh�o, supondo que a digita��o do c�digo do estado seja sempre v�lida, ou
seja, um n�mero inteiro entre 1 e 5; b) o peso da carga do caminh�o em
toneladas; c) o c�digo da carga, supondo que a digita��o do c�digo da carga seja
sempre v�lida, ou seja, um n�mero inteiro entre 10 e 40.
C�digo do Estado Imposto
1 35%
2 25%
3 15%
4 5%
5 isento
C�digo da carga Pre�o por quilograma
10 a 20 R$ 100,00
21 a 30 R$ 250,00
31 a 40 R$ 340,00

Calcule e mostre:
a) o peso da carga do caminh�o, convertido em quilos;
b) o pre�o da carga do caminh�o;
c) o valor do imposto, sabendo-se que o imposto � cobrado sobre o pre�o da carga
do caminh�o e que depende do estado de origem;
d) o valor total transportado pelo caminh�o (carga mais imposto).


