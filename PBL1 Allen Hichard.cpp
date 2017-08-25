/*******************************************************************************
Autor: ALLEN HICHARD MARQUES DOS SANTOS
Componente Curricular: Algoritmos I
Concluido em: 14/04/2014
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>      


main()
{

      /*As variáveis foram criadas com os seus respectivos nomes e fácil no entendimento
      no caso do aprop = aprovado pior para atribuião do codigo, e aprom aprovado melhor
      para atribuião do codigo, tirando esses dois
      tá bastante fácil o entendimento*/
      
      
      int codigo, idade, cargo, pontuacao, doenca, cursos, candidato=0;
      int cur1=0, cur2=0, cur3=0, cur4=0, cur5=0, cur6=0, melhor1=0, melhor2=0, aptos=0;
      int melhor3=0, melhor4=0, melhor5=0, melhor6=0; 
      int aprom1=0, aprop1=0, aprom2=0, aprop2=0, aprom3=0, aprop3=0, aprom4=0, aprop4=0;
      int aprom5=0, aprop5=0, aprom6=0, aprop6=0;
      int pior1=0, pior2=0, pior3=0, pior4=0, pior5=0, pior6=0, quantidade=0;
      float porcentagem;
      /*Aqui será digitado o código o codigo do candidato e a sua idade, são
      considerados vamos inteiros positivos para cadastrado junto com o 0, em caso
      de negativo irá mostrar o relatório   */
      printf("                ************ Alimentos S.A ************\n\n");
      printf("Digite o codigo do candidato :");
      scanf("%d", &codigo);
      while(codigo>=0){
                      pontuacao = 0;
                      printf("\nInforme sua idade :");
                      scanf("%d", &idade);
           
       /* Aqui caso a sua idade seja inválida irá somar um a total de candidato
       e irá voltar para adicionar novos candidato */
     
      if(idade<20 || idade>50){
                               candidato = candidato + 1;
                               printf(" insira um novo codigo \n");
                               getch(); 
                               }
      else{
      printf("\nInforme o cargo pretendido :\n");
      printf(" [1] para Secretaria\n "); 
      printf("[2] para Embalador\n "); 
      printf("[3] para Operador de maquina\n "); 
      printf("[4] para Eletricista\n ");
      printf("[5] para Vendedor\n "); 
      printf("[6] para Tecnico em informatica\n\n ");
      scanf("%i",&cargo); 
      /*Foi criado essa condição já que independente do cargo o questionário são os
      mesmos para todo e qualquer curso */
      
      if(cargo==1 || cargo==2|| cargo==3|| cargo==4|| cargo==5|| cargo==6){
                  if(idade>19 && idade<31){
                                pontuacao = pontuacao + 3;}
                  if(idade>30 && idade<41){
                                pontuacao = pontuacao + 2;}
                  if(idade>40 && idade<51){
                                pontuacao = pontuacao + 1;}
                                }

      printf("               ******** Fase Classificatoria **********\n\n");
      printf("                 ******* Questionario medico ********\n\n");
      printf("1 para sim e 2 para nao :\n\n");
      
      /* só foi criado aqui em aqui em caso de nao por que soma pontos, nao precisa de mais
      informações porque qualquer outra nao entra na condição e não soma pontos */
      printf("Problemas cardiacos:\n ");
      scanf("%d", &doenca);
    
      if(doenca==2)
                   pontuacao = pontuacao + 1;
      
      
      printf("Problemas respiratorios :\n ");
      scanf("%d", &doenca);
     
      if(doenca==2)
                   pontuacao = pontuacao + 1;
      
      
      printf("Problemas diabeticos :\n ");
      scanf("%d", &doenca);
      
      if(doenca==2)
                   pontuacao = pontuacao + 1;
      
     
      printf("Problemas arteriais :\n ");
      scanf("%d", &doenca);
      if(doenca==1)
                   pontuacao = pontuacao + 0;
      if(doenca==2)
                   pontuacao = pontuacao + 1;
                    
           
      /* aqui o que so muda é o numero que acessa a variavel que antes era dois 
      e agora é um ai entra a condição e soma a pontuação*/
      /* Cursos profissionalizante foi o nome que dei a cursos da área realizado
      para a vaga pretendida*/
      printf("         ******** Cursos profissionalizantes ********\n\n");
      printf("curso de curta duracao ate 10 horas :\n ");
      scanf("%d", &cursos);
      
      if(cursos==1){
      printf("quantidades de cursos de curta duracao :\n ");
      scanf("%d", &quantidade);
                  pontuacao = pontuacao + 1 * quantidade;
                  }
     
      printf("curso de media duracao de 11 ate 40 horas :\n ");
      scanf("%d", &cursos);
      
      if(cursos==1){
      printf("quantidade de cursos de media duracao :\n ");
      scanf("%d", &quantidade);
      
                   pontuacao = pontuacao + 2 * quantidade;
                   }
     
      printf("curso de longa duracao acima de 40 horas :\n ");
      scanf("%d", &cursos);
      
      if(cursos==1){
      printf("quantidade de cursos de longa duracao :\n ");
      scanf("%d", &quantidade);
      
                   pontuacao = pontuacao + 3 * quantidade;
                   }
      
      printf("curso areas afins :\n ");
      scanf("%d", &cursos);
      
      if(cursos==1){
      printf("informa a quantidades de cursos de areas afins :\n ");
      scanf("%d", &quantidade);
      
                   pontuacao = pontuacao + 2 * quantidade;
                   }
      
      printf("curso de lingua extrageira :\n ");
      scanf("%d", &cursos);
      if(cursos==1){
      printf("informa a quantidades de cursos de lingua extrageira :\n ");
      scanf("%d", &quantidade);
      
                   pontuacao = pontuacao + 2 * quantidade;
                   }
      
      printf("curso de informatica :\n ");
      scanf("%d", &cursos);
      if(cursos==1){
      printf("informa a quantidades de cursos de informatica :\n ");
      scanf("%d", &quantidade);
     
                   pontuacao = pontuacao + 3 * quantidade;
                   }
     
     /* foi criada condição para cada candidato de cada cargo já que é preciso mostrar
     o relatorio de cada cursos detalhando os candidatos*/
     
      candidato = candidato + 1;
      aptos = aptos + 1;
      getch(); 
      
      if(cargo==1){
      cur1 = cur1 + 1;
      if(melhor1 < pontuacao){
      melhor1 = pontuacao;
      aprom1 = codigo;
      }
      if(pior1 > pontuacao || pior1==0){
           pior1 = pontuacao;
           aprop1 = codigo;
           }
           }
      
      if(cargo==2){
      cur2 = cur2 + 1;
      if(melhor2 < pontuacao){
      melhor2 = pontuacao;
      aprom2 = codigo;
      }
      if(pior2 > pontuacao || pior2==0){
           pior2 = pontuacao;
           aprop2 = codigo;
           }
           }
      
      if(cargo==3){
      cur3 = cur3 + 1;
      if(melhor3 < pontuacao){
      melhor3 = pontuacao;
      aprom3 = codigo;
      }
      if(pior3 > pontuacao || pior3==0){
           pior3 = pontuacao;
           aprop3 = codigo;
           }
           }
      
      if(cargo==4){
      cur4 = cur4 + 1;
      if(melhor4 < pontuacao){
      melhor4 = pontuacao;
      aprom4 = codigo;
      }
      if(pior4 > pontuacao || pior4==0){
           pior4 = pontuacao;
           aprop4 = codigo;
           }
           }
      
      if(cargo==5){
      cur5 = cur5 + 1;
      if(melhor5 < pontuacao){
      melhor5 = pontuacao;
      aprom5 = codigo;
      }
      if(pior5 > pontuacao || pior5==0){
           pior5 = pontuacao;
           aprop5 = codigo;
           }
           }
     
      if(cargo==6){
      cur6 = cur6 + 1;
      if(melhor6 < pontuacao){
      melhor6 = pontuacao;
      aprom6 = codigo;
      }
      if(pior6 > pontuacao || pior6==0){
           pior6 = pontuacao;
           aprop6 = codigo;
           }
           }
  
      printf("  ****** cadastro realizado com sucesso ****** ");
      getch();
      
                                }
      system("cls");
      printf("Digite o codigo do candidato :");
      scanf("%d", &codigo);
                                          }
      /*relatório pedido pelo problema fora da condição porque nao tem a necessidade
      de está em uma condição, porque só precisa ser mstrado uma vez */
      if(codigo<0){
      system("cls");
      printf("O total de candidatos inscritos foram: %d\n\n", candidato);
      
      printf("O total de candidatos para secretario: %d\n", cur1);
      printf("Codigo do melhor candidato a secretaria: %d com: %d pontos\n", aprom1, melhor1);
      printf("Codigo do pior candidato a secretaria: %d com: %d pontos\n\n", aprop1, pior1);
      
      printf("O total de candidatos embalador: %d\n", cur2);
      printf("codigo do melhor candidato a embalador: %d com: %d pontos\n", aprom2, melhor2);
      printf("codigo do pior candidato a embalador: %d com: %d pontos\n\n", aprop2, pior2);
      
      printf("O total de candidatos para oper. de maquina: %d\n", cur3);
      printf("codigo do melhor candidato a oper. de maquina eh: %d com: %d pontos\n", aprom3, melhor3);
      printf("codigo do pior candidato a oper. de maquina eh: %d com: %d pontos\n\n", aprop3, pior3);
      
      printf("O total de candidatos para eletricista: %d\n", cur4);
      printf("codigo do melhor candidato a eletricista eh:  %d com: %d pontos\n", aprom4, melhor4);
      printf("codigo do pior candidato a eletricista eh:  %d com: %d pontos\n\n", aprop4, pior4);
      
      printf("O total de candidatos vendedor: %d\n", cur5);
      printf("codigo do melhor candidato a vendendor eh:  %d com: %d pontos\n", aprom5, melhor5);
      printf("codigo do pior candidato a vendendor eh:  %d com: %d pontos\n\n", aprop5, pior5);
      
      printf("O total de candidatos tec. informatica: %d\n", cur6);
      printf("codigo do melhor candidato tec. informatica eh: %d com %d pontos\n", aprom6, melhor6);
      printf("codigo do pior candidato tec. informatica eh: %d com %d pontos\n\n", aprop6, pior6);
           
      if(candidato > 0){
      porcentagem = (float)aptos*100/candidato;
      printf("a porcentagem de aptos eh %.2f\n", porcentagem);
      }
      
      else{
      printf("nenhum candidato cadastrado sem porcentagem 0.00");
     
      }
      
      getch(); 
      }
         
 getch();                
}
     /* Final do algoritmo*/             
                                
                                
                           
                                
                                
                                
                                
                                
                                
                                
                                
                                
                                
                                
