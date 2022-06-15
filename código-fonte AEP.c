#include<stdio.h>
#include<stdlib.h>

/* Este código-fonte tem por objetivo demonstrar uma das principais funções do   */
/* projeto Hércules (AEP 2022 - TECNOLOGIA PARA O COMBATE AO SEDENTARISMO).      */
/* A função a seguir demonstra uma simulação do combate no nosso aplicativo,     */
/* baseando-se na executação de algumas séries de exercícios.                    */
/* Cada série realizada retira uma porcentagem de vida do inimigo enfrentado,    */
/* o principal objetivo é de realizar tais exercícios e derrotar o seu inimigo.  */
/* Porém, caso não consiga executar o exercício, quem perde vida seria o próprio */
/* personagem do Usuário, podendo ser morto pelo inimigo devido à uma série de   */
/* falhas, para tornar o aplicativo mais objetivo e idealizado, tornando o       */
/* projeto mais competitivo.                                                     */

int main (){

    int vida;
    int exercicio;
    int serie;
    
    float vidaInimigo;
    float vidaUsuario;
    float ataque;

	system("chcp 1252"); /* é um comando que executa comandos no console do Windows
	(1252 é o número do alfabeto que o Windows usa na versão em Português) */
    printf("\n--- Bem-Vindo à Simulação do Combate ---\n\n");
    printf("Você começa atacando...\n\n");
    
    while(serie<=2 || exercicio <=9){
    	printf("Selecione a quantidade de exercícios desejados: ");
    	scanf("%d", &exercicio);
    	printf("Selecione a quantidade de séries desejadas: ");
    	scanf("%d", &serie);
    	if(serie<=2 || exercicio <=9){
    		printf("Você deve realizar pelo menos 3 séries de exercício com pelo menos 10 exercícios para cada série.\n");
		}else {
			printf("%d séries de %d exercícios para atacar o Inimigo!\n\n", serie, exercicio);
		}
	}
	
	
	vidaInimigo = exercicio*serie;
	printf("A vida do seu Inimigo é de: %.2f\n", vidaInimigo);
	
	vidaUsuario = (exercicio*serie)-10;
	printf("A vida do seu Personagem é de: %.2f\n\n\n", vidaUsuario);
	
	
	while(vidaInimigo>0){ 
		printf("\n(Caso termine os exercícios consecutivamente.)");
		printf("\nPara atacar termine sua série de exercício!\n");
		ataque= exercicio*0.75;
		printf("Seu ataque causou %.2f de dano ao Inimigo!\n", ataque); 
	
		vidaInimigo = vidaInimigo - ataque;
		printf("A vida do seu Inimigo é de: %.2f\n", vidaInimigo);
		
		if (vidaInimigo<=0){
			printf("Você derrotou o Inimigo!\n\n\n");
		}
}
	
	while(vidaUsuario >0){ 
		printf("\n(Caso não termine os exercícios consecutivamente.)");
		printf("\nPara atacar termine sua série de exercício!\n");
		ataque= exercicio*0.75;
		printf("Você vacilou e o Inimigo te atacou causando %.2f de dano!\n", ataque);
	
		vidaUsuario = vidaUsuario - ataque;
		printf("A vida do seu Personagem é de: %.2f\n", vidaUsuario);
		
		
		if (vidaUsuario<=0){
			printf("Você foi derrotado pelo Inimigo!");
	}
}

    return 0;
}
