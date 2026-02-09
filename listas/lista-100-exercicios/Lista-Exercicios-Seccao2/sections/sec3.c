void case3(void){

	//variaveis local da funcao
	int opcao;

	int a,b,c,d,e,f,p,i;
	float aa,bb,cc,dd,ee;


	opcao=1;

	while(opcao!=0){
		printf("escolha qual programa voce quer :(25 a 34)\n");
		printf("diite 0 para sair\n");
		scanf("%d",&opcao);

		switch(opcao){
			//
			case 25:
				continue;
			//
			case 26:

				printf("Digite o primeiro numero: ");
				scanf("%d",&a);
				printf("Digite o segundo numero: ");
				scanf("%d",&b);
				printf("Digite o terceiro numero: ");
				scanf("%d",&c);
				printf("Digite o quarto numero: ");
				scanf("%d",&d);

				if ((a>b)&&(a>c)&&(a>d))
				{
					printf("O maior numero eh: %d\n", a);
				} if ((b>a)&&(b>c)&&(b>d))
				{
					printf("O maior numero eh: %d\n", b);
				} if ((c>a)&&(c>b)&&(c>d))
				{
					printf("O maior numero eh: %d\n", c);
				} if((d>a)&&(d>b)&&(d>c)) {
					printf("O maior numero eh: %d\n", d);
				}
				continue;
			//
			case 27:
				p=0;i=0;
				printf("Insira o primeiro numero: ");
				scanf("%d",&a);
				printf("Insira o segundo numero: ");
				scanf("%d",&b);
				printf("Insira o terceiro numero: ");
				scanf("%d",&c);
				printf("Insira o quarto numero: ");
				scanf("%d",&d);
				printf("Insira o quinto numero: ");
				scanf("%d",&e);
				printf("Insira o sexto numero: ");
				scanf("%d",&f);

				if ((a%2)==0)
				{
					p = p+a;
				} else {
					i = i+a;
				}

				if ((b%2)==0)
				{
					p = p+b;
				} else {
					i = i+b;
				}

				if ((c%2)==0)
				{
					p = p+c;
				} else {
					i = i+c;
				}

				if ((d%2)==0)
				{
					p = p+d;
				} else {
					i = i+d;
				}

				if ((e%2)==0)
				{
					p = p+e;
				} else {
					i = i+e;
				}

				if ((f%2)==0)
				{
					p = p+f;
				} else {
					i = i+f;
				}

				printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
				printf("Soma dos pares: %d\n", p);
				printf("Soma dos impares: %d\n", i);
				continue;
			//
			case 28:

				printf("Digite a nota final(0-100): ");
				scanf("%d",&a);

				if ((a<0)||(a>100))
				{
					printf("\n");
				} else {
				if ((a>=90)&&(a<=100))
				{
					printf("	Conceito A\n");
				}
				if ((a>=80)&&(a<90))
				{
					printf("	Conceito B\n");
				}
				if ((a>=70)&&(a<80))
				{
					printf("	Conceito C\n");
				}
				if ((a>=60)&&(a<70))
				{
					printf("	Conceito D\n");
				}
				if (a<60)
				{
					printf("	Conceito E (reprovado)\n");
				} }
				continue;
			//
			case 29:
				printf("Digite um valor inteiro: ");
				scanf("%d",&a);
				b= a;

				for (i = (a-1); i > 0; i--)
				{
					b=b*i;
				}

				printf("Fatorial de %d = %d\n",a,b);
				continue;
			//
			case 30:
				aa=0,bb=1,cc=0;
				for (i = 1; i <= 50; i++)
					{
						cc= (bb/i);
						aa = aa+cc;
						bb= bb+2;
					}

					printf("S = %f\n",aa);
				
				continue;
			//
			case 31:
				dd=50;
				for (i= 1; i <= 50 ; i++)
				{
					bb = pow(2,i);
					cc = bb/dd;
					aa = aa+cc;
					dd = dd-1;
				}

				printf("S = %.2f\n",aa);
				continue;
			//
			case 32:
				bb=37; cc=38; dd=0;
				for ( i = 1; i <=37; i++)
				{
					printf("(%.0fx%.0f)/%d\n",bb,cc,i);
					aa = bb*cc;
					ee= aa/i;
					dd = dd+ee;
					bb = bb-1;
					cc = cc-1;
				}

				printf("S = %f\n", dd);
				continue;
			//
			case 33:
				a=1000;b=0,c=0;
				for (i= 1; i <= 50; i++)
				{
					if ((a%2)==0) {
						printf(" + "); 
						b = b + (a/i);
					}
					else {
						printf(" - ");
						c = c + (a/i);		
					}
					printf("%d/%d",a,i);
					//printf("\n");
					a = a-3;
				}

				d = b-c;
				printf("\nSoma = %d \n",d);
				continue;
			//
			case 34:
				a=480; b=10;
		        aa=0; bb=0; 	
				for (i = 0; i <= 30; i++)
				{
					if ((a%2)==0)
					{
						printf(" + ");
						aa = aa+(a/b);
					} else {
						printf(" - ");
						bb = bb+(a/b);
					}
					printf("%d/%d",a,b);
					a = a-5;
					b = b+1;
				}

				cc = aa-bb;
				printf("\nSoma = %.2f\n",cc);
				continue;
			//
			
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
