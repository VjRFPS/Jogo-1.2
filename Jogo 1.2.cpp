#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	int life;
	int money;
	bool espada;

	string choose;
	string user;
	
	cout << "Made by VjR(Vinicius de Jesus)\n\n\n";

	cout << "Ola,Escolha uma das opcoes\n\n";
	cout << "1. Iniciar Jogo\n";
	cout << "2. Sair\n\n";
	cout << "Digite aqui o numero da opcao que deseja escolher: ";
	cin >> choose;
	if (choose == "1")
	{
		system("CLS");
		cout << "Digite aqui o nome do personagem: ";
		cin >> user;

		system("CLS");

		cout << "Ola," << user << ".Escolha a dificuldade.\n\n";
		cout << "1. Facil.\n";
		cout << "2. Dificil(Em Processo de Criacao,NAO ESCOLHA): \n\n";
		cout << "Digite aqui o numero da opcao: ";
		cin >> choose;
		if (choose == "1")
		{
			system("CLS");
			bool espada;
			cout << "Voce escolheu a dificuldade FACIL\n\n";
			system("pause");
			system("CLS");

			cout << "Sua historia:Voce se chama " << user << ".Voce se perdeu de casa aos 11 anos\ne aos 28 anos sua missao e conseguir voltar para casa\n\n";
			system("pause");
			system("CLS");

			cout << "Bem Vindo ao mapa,voce esta em frente a uma loja\n";
			cout << "Deseja entrar ou sair para explorar(entrar/explorar): ";
			cin >> choose;
			if (choose == "entrar")
			{
				system("CLS");
				life = 100;
				money = 5000;
				espada = false;
				cout << "Bem vindo a loja,o que deseja?\n\nSeu saldo:R$" << money << "\nSeu life:" << life << "\n\n";
			
				cout << "1. Pocao de Vida(R$500)\n";
				cout << "2. Espada(R$1500)\n\n";
				cout << "Digite aqui o numero da opcao desejada: ";
				cin >> choose;
				if (choose == "1")
				{
					if (life == 100)
					{
						system("CLS");
						cout << "Sua vida esta cheia,nao tem necessidade de comprar uma pocao de vida\n";
						system("pause");
						system("CLS");
						cout << "Recomendado:Compre uma espada,assim voce tera chances de sobreviver\n";
						cout << "Deseja comprar uma espada?(s/n): ";
						cin >> choose;
						if (choose == "s")
						{
							if (espada == true)
							{
								system("cls");
								money = 5000;
								cout << "Voce ja tem uma espada,perca de tempo.\n";
								cout << "Seu Saldo:R$" << money << "\n\n";
								system("pause");
								system("cls");
							}
							
							
							if (espada == false)
							{
								system("cls");
								espada = true;
								money = 3500;
								cout << "Boa escolha,voce vai precisar dela para viver.\n";
								cout << "Seu saldo:R$" << money << "\n\n";
								system("pause");
								system("cls");
							}
							
							
							
						}


					}

					else
					{
						system("CLS");
						life = 100;
						money = 4500;
						cout << "Voce comprou uma pocao de vida e sua vida foi completada\n\n";
						cout << "Life:" << life << "\nDinheiro:R$" << money << "\n\n";
						system("pause");
						system("CLS");
					}
				}

				if (choose == "2")
				{
					if (espada == false)
					{
						system("CLS");
						cout << "Voce comprou uma espada,boa sorte\n\n";
						money = 3500;
						espada = true;
						cout << "Seu Saldo:R$" << money << "\n\n";
						system("pause");
						system("CLS");
					}



				}

				





			}
			
			else
			{
				cout << "Digite entrar ou explorar\n";
				system("pause");
				exit(0);
			}

			if (choose == "explorar")
			{
				system("cls");
				cout << "Voce decidiu sair para explorar.Infelizmente encontrou um urso e como nao tinha uma espada,foi DESPEDACADO.\n\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				system("pause");
				return 0;


			}
			system("cls");
			cout << "Voce entrou na loja e viu alguns itens,\nmas na hora de sair derrubou uma pocao de vida \ne o vendedor lhe expulsou da loja.\n\n";
			system("pause");
			system("CLS");
			cout << "Ao sair voce deu de cara com um guarda,que logo empunhou a espada.\n\n";
			cout << "Deseja lutar ou correr?(lutar/correr):";
			cin >> choose;
			if (choose == "lutar")
			{
				if (espada == false)
				{
					system("cls");
					cout << "Voce escolheu lutar,porem nao tinha uma espada e foi assassinado.\n\n";
					cout << "GAME OVER!!!\n";
					cout << "GAME OVER!!!\n";
					cout << "GAME OVER!!!\n";
					cout << "GAME OVER!!!\n";
					cout << "GAME OVER!!!\n";
					cout << "GAME OVER!!!\n";
					cout << "GAME OVER!!!\n\n";
					system("pause");
				}
				if (espada == true)
				{
					system("cls");
					life = 70;
					cout << "Voce retirou sua espada da bolsa e atacou o guarda.\n";
					cout << "Voce foi ferido,mas conseguiu vencer o guarda.\n\n";
					cout << "Seu Life:" << life << "%\n";
					cout << "Recomendado:Vá a uma loja e compre uma pocao de vida.\n\n";
					system("pause");
					system("cls");

					cout << "Voce esta em frente a uma loja,deseja entrar?(s/n): ";
					cin >> choose;
					if (choose == "s")
					{
						system("cls");
						cout << "Bem vindo a loja,o que deseja?\n\nSeu saldo:R$" << money << "\nSeu life:" << life << "\n\n";

						cout << "1. Pocao de Vida(R$500)\n";
						cout << "2. Espada(R$1500)\n\n";
						cout << "Digite aqui o numero da opcao desejada: ";
						cin >> choose;
						if (choose == "1")
						{
							system("cls");
							life = 100;
							cout << "Seu Life:" << life << "%\n";
							money = 3000;
							cout << "Seu Saldo:R$" << money << "\n\n";
							system("pause");
							system("cls");


						}
						
						if (choose == "2")
						{
							system("cls");
							cout << "Voce ja tem uma espada\n";
							system("pause");
							system("cls");
						}
					
					
					
					}
					
					if(choose == "n")
					{
						system("cls");
						cout << "Voce nao entrou na loja e decidiu explorar.\n\n";
						cout << "Sua vida nao estava cheia e voce tomou 3 flechadas de outros guardas que estavam te vigiando apos\n";
						cout << "voce ter matado o guarda.\n\n";
						
						cout << "GAME OVER!!!\n";
						cout << "GAME OVER!!!\n";
						cout << "GAME OVER!!!\n";
						cout << "GAME OVER!!!\n";
						cout << "GAME OVER!!!\n";
						cout << "GAME OVER!!!\n\n";
						system("pause");
						system("cls");
						exit(0);
						
						
						
					}
				cout << "Apos ter entrado na loja e ter visto alguns itens,saiu para explorar.\n";
				cout << "Voce encontrou um saco jogado no meio do caminho\n\n";
				cout << "Deseja vasculhar?(s/n) ";
				cin >> choose;
				if(choose == "s")
				{
					system("cls");
					cout << "O Saco era uma distracao para bandidos te roubarem\n";
					cout << "Voce perdeu R$1000\n";
					money = 2000;
					system("pause");
					
				}
				if(choose == "n")
				{
					system("cls");
					cout << "Voce escolheu bem.Aquele saco era uma distracao para bandidos te assaltarem..\n\n";
					system("pause");
					
					
				}
				
					
				}
				
				system("cls");
				cout << "Voce seguiu andando e encontrou um amigo da sua familia,voce o reconheceu e ele ofereceu te levar para casa\n";
				cout << "porem,sua situacao economica esta bem ruim e ele nao consegue te levar de graca.A viagem custara R$3000\n\n";
				cout << "Veja se voce tem dinheiro suficiente digitando 'ver': ";
				cin >> choose;
				if(choose == "ver")
				{
					system("cls");
					cout << "Voce tem R$" << money << "\n";
					system("pause");
					if(money > 2999)
					{
						system("cls");
						cout << "Voce conseguiu ir para casa depois de todos esses anos\n";
						cout << "Esse é o fim do jogo por enquanto <3 \n\n";
						system("pause");
						
					}
					else
					{
						cout << "Voce nao teve dinheiro\n";
						cout << "Voce ficou pra tras,GAME OVER!!!\n";
						system("pause");
						exit(0);
					}
					
					
				}
				
			}

			if (choose == "correr")
			{
				system("cls");
				cout << "Voce escolheu correr,mas um feirante colocou o pe na frente e voce foi preso.\n\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n";
				cout << "GAME OVER!!!\n\n";
				system("pause");
			}
			return 0;
		
		
		}
		else
		{
			system("cls");
			cout << "OPCAO EM PROCESSO DE PROGRAMACAO\n";
			system("pause");
			exit(0);
		}





	}

}
