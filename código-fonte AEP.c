#include<stdio.h>
#include<stdlib.h>

/* Este c�digo-fonte tem por objetivo demonstrar uma das principais fun��es do   */
/* projeto H�rcules (AEP 2022 - TECNOLOGIA PARA O COMBATE AO SEDENTARISMO).      */
/* A fun��o a seguir demonstra uma simula��o do combate no nosso aplicativo,     */
/* baseando-se na executa��o de algumas s�ries de exerc�cios.                    */
/* Cada s�rie realizada retira uma porcentagem de vida do inimigo enfrentado,    */
/* o principal objetivo � de realizar tais exerc�cios e derrotar o seu inimigo.  */
/* Por�m, caso n�o consiga executar o exerc�cio, quem perde vida seria o pr�prio */
/* personagem do Usu�rio, podendo ser morto pelo inimigo devido � uma s�rie de   */
/* falhas, para tornar o aplicativo mais objetivo e idealizado, tornando o       */
/* projeto mais competitivo.                                                     */

int main (){

    int vida;
    int exercicio;
    int serie;
    
    float vidaInimigo;
    float vidaUsuario;
    float ataque;

	system("chcp 1252"); /* � um comando que executa comandos no console do Windows
	(1252 � o n�mero do alfabeto que o Windows usa na vers�o em Portugu�s) */
    printf("\n--- Bem-Vindo � Simula��o do Combate ---\n\n");
    printf("Voc� come�a atacando...\n\n");
    
    while(serie<=2 || exercicio <=9){
    	printf("Selecione a quantidade de exerc�cios desejados: ");
    	scanf("%d", &exercicio);
    	printf("Selecione a quantidade de s�ries desejadas: ");
    	scanf("%d", &serie);
    	if(serie<=2 || exercicio <=9){
    		printf("Voc� deve realizar pelo menos 3 s�ries de exerc�cio com pelo menos 10 exerc�cios para cada s�rie.\n");
		}else {
			printf("%d s�ries de %d exerc�cios para atacar o Inimigo!\n\n", serie, exercicio);
		}
	}
	
	
	vidaInimigo = exercicio*serie;
	printf("A vida do seu Inimigo � de: %.2f\n", vidaInimigo);
	
	vidaUsuario = (exercicio*serie)-10;
	printf("A vida do seu Personagem � de: %.2f\n\n\n", vidaUsuario);
	
	
	while(vidaInimigo>0){ 
		printf("\n(Caso termine os exerc�cios consecutivamente.)");
		printf("\nPara atacar termine sua s�rie de exerc�cio!\n");
		ataque= exercicio*0.75;
		printf("Seu ataque causou %.2f de dano ao Inimigo!\n", ataque); 
	
		vidaInimigo = vidaInimigo - ataque;
		printf("A vida do seu Inimigo � de: %.2f\n", vidaInimigo);
		
		if (vidaInimigo<=0){
			printf("Voc� derrotou o Inimigo!\n\n\n");
		}
}
	
	while(vidaUsuario >0){ 
		printf("\n(Caso n�o termine os exerc�cios consecutivamente.)");
		printf("\nPara atacar termine sua s�rie de exerc�cio!\n");
		ataque= exercicio*0.75;
		printf("Voc� vacilou e o Inimigo te atacou causando %.2f de dano!\n", ataque);
	
		vidaUsuario = vidaUsuario - ataque;
		printf("A vida do seu Personagem � de: %.2f\n", vidaUsuario);
		
		
		if (vidaUsuario<=0){
			printf("Voc� foi derrotado pelo Inimigo!");
	}
}

    return 0;
}
