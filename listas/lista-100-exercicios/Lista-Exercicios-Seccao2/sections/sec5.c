
void case5(void){


	//variaveis local da funcao
	int opcao,n,cont;

	opcao=1;

	while(opcao!=0){
		
		printf("escolha qual programa voce quer :(42 a 49)\n");
		printf("diite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//funcionando
			case 42:
				//ler o tamanho do quadrado de asteriscos
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=0;i<n;i++){// mostra uma linha de asteriscos
							printf("* ");
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

				continue;
			//funcionado
			case 43:
				//ler o tamanho do quadrado de numeros
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=0;i<n;i++){// mostra uma linha do numero digitado
							printf("%d ",n);
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

				continue;
			//funcionando
			case 44:
				//ler o tamanho do limite da sequencia do quadrado
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=1;j<=n;j++){
						for(int i=1;i<=n;i++){// mostra uma linha de sequencia ate o numero digitado
							printf("%d ",i);
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");

				continue;
			//funcionando
			case 45:
				//ler o tamanho do limite da sequencia do quadrado
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=1;j<=n;j++){
						for(int i=n;i>=1;i--){// mostra uma linha de sequencia inversa ate 1
							printf("%d ",i);
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				
				continue;
			//funcionando
			case 46:
				//ler o tamanho do cateto de asteriscos
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=n-j;i>=1;i--){// mostra uma linha de asteriscos
							printf("* ");
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			//funcionando
			case 47:
				//ler o tamanho do cateto de asteriscos
				printf("digite o lado do quadrado entre 3 e 15\n");
				scanf("%d",&n);

				//verifica se n esta entre 3 e 15
				if(n>=3&&n<=15){
					for(int j=0;j<n;j++){
						for(int i=1;i<=1+j;i++){// mostra uma linha de asteriscos
							printf("* ");
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			//funcionando
			case 48:
				//ler o tamanho do cateto da sequencia
				printf("digite o lado do cateto entre 2 e 9\n");
				scanf("%d",&n);
				
				//verifica se n esta entre 3 e 15
				if(n>=2&&n<=9){
					for(int j=1;j<=n;j++){
						//para mostrar na sequencia correta ultiliza um cont
						cont=1;
						for(int i=n-j+1;i>=1;i--){// mostra uma linha de sequencia
							printf("%d ",cont);
							cont++;	
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			//funcionando
			case 49:
				//ler o tamanho do cateto da sequencia
				printf("digite o lado do cateto entre 2 e 9\n");
				scanf("%d",&n);
				
				//verifica se n esta entre 3 e 15
				if(n>=2&&n<=9){
					for(int j=1;j<=n;j++){
						//para mostrar na sequencia correta ultiliza um cont
						cont=0;
						for(int i=n-j+1;i>=1;i--){// mostra uma linha de sequencia
							printf("%d ",n-cont);
							cont++;	
						}
						printf("\n");// ao fim de cada linha de asterisco da espaço e começa na linha de baixo
					}
				}
				else
					printf("tamanho invalido \n");
				continue;
			
			case 0:
				printf("voltando ao menu principal....\n\n");
				break;
			default:
				printf("questao invalida  \n");
				continue;



		}
	}
	printf("-----------------\n");

 }
