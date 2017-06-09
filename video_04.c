#include<stdio.h>
#include<locale.h>
/* 
NOME: Angelo Alfredo Nunes Pereira RA: 2216112268
Nome: Bruno Henrique Pavão Inacio  RA: 2216203495
Nome: Lucio Flavio Nunes Pereira   RA: 2216112269
*/
int main (){
	int i,v,n,n1;
	setlocale(LC_ALL,"Portuguese");

	printf("*****Hábito anti-procrastinação*****\n");
	printf("Primeiro passo defina as tarefas mais importantes do seu dia.\n\n");
	printf("Se já as definiu digite : 1 e se não digite : 2\n");
	while(n!=1){
	scanf("%d",&n);
	if(n==2)
	{
		printf("Então as defina e quando estiver pronto digite 1\n");
		
	}
	if(n>2)
	{
		printf("Numero inválido , digite 1 se estiver pronto e 2 caso nao esteja definido\n");
	}
}
	printf("Pronto, agora o segundo passo é organizar as quais voçê irá começa seu dia\n");
	printf("E volte aqui quando estiver concluído as tarefas...\n\nDigite 1 caso tenha terminado tudo ou Digite 2 caso tenha faltado alguma tarefa\n\n");
	scanf("%d",&n1);
		if(n1==1)
		{
			printf("Parabéns voçê concluiu suas tarefas agora merece uma recompensa, compre algum presente, coma alguma comida que goste ou vá para um lugar que lhe agrada.\n\n");
				
		}	
		if(n1==2)
		{
			printf("Infelizmente você não atingiu seus objetivos, adicione uma conseguência e faça uma tarefa desagradável ou fique sem algo que goste muito\n");
			printf("Mais lembre-se isso é para o seu bem e irá te incentivar, tente melhorar e finalizar suas tarefas na próxima vez.");		
			}


	return 0;
}
