#include<stdio.h>
#include<locale.h>
/* 
NOME: Angelo Alfredo Nunes Pereira RA: 2216112268
Nome: Bruno Henrique Pav�o Inacio  RA: 2216203495
Nome: Lucio Flavio Nunes Pereira   RA: 2216112269
*/
int main (){
	int i,v,n,n1;
	setlocale(LC_ALL,"Portuguese");

	printf("*****H�bito anti-procrastina��o*****\n");
	printf("Primeiro passo defina as tarefas mais importantes do seu dia.\n\n");
	printf("Se j� as definiu digite : 1 e se n�o digite : 2\n");
	while(n!=1){
	scanf("%d",&n);
	if(n==2)
	{
		printf("Ent�o as defina e quando estiver pronto digite 1\n");
		
	}
	if(n>2)
	{
		printf("Numero inv�lido , digite 1 se estiver pronto e 2 caso nao esteja definido\n");
	}
}
	printf("Pronto, agora o segundo passo � organizar as quais vo�� ir� come�a seu dia\n");
	printf("E volte aqui quando estiver conclu�do as tarefas...\n\nDigite 1 caso tenha terminado tudo ou Digite 2 caso tenha faltado alguma tarefa\n\n");
	scanf("%d",&n1);
		if(n1==1)
		{
			printf("Parab�ns vo�� concluiu suas tarefas agora merece uma recompensa, compre algum presente, coma alguma comida que goste ou v� para um lugar que lhe agrada.\n\n");
				
		}	
		if(n1==2)
		{
			printf("Infelizmente voc� n�o atingiu seus objetivos, adicione uma consegu�ncia e fa�a uma tarefa desagrad�vel ou fique sem algo que goste muito\n");
			printf("Mais lembre-se isso � para o seu bem e ir� te incentivar, tente melhorar e finalizar suas tarefas na pr�xima vez.");		
			}


	return 0;
}
