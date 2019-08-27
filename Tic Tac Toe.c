#include<stdio.h>
#include<windows.h>
void instructins(int play1, int play2);
int input_func(int bo[3][3], int inp, int p1, int p2 , char name[20]);

int main()
{
system ("color F5");

  int player1 = '\1';
  int player2 = '\2';
  int input_value = 0;
  int winner = 0;
  char ask = 0;
  int board[3][3]={};
  char name1[20]="";
  char name2[20]="";

     instructins(player1, player2);

     printf(" Player 1 enter your name   ");
     gets(name1);
     printf(" Player 2 enter your name   ");
     gets(name2);
     printf("\n");

do
{

  board[0][0]=0;
  board[0][1]=0;
  board[0][2]=0;
  board[1][0]=0;
  board[1][1]=0;
  board[1][2]=0;
  board[2][0]=0;
  board[2][1]=0;
  board[2][2]=0;
  printf("\n\n\n\n\n\n");

   winner = input_func(board, input_value, player1, player2 ,name1);

   if ( winner == 1 )
   {
       printf("\t\tCongratulations! %s HAVE WON THE GAME %c \n\n\n",name1,player1);
   }
   else if ( winner == 2 )
   {
       printf("\t\tCongratulations! %s HAVE WON THE GAME %c \n\n\n",name2,player2);
   }
   else if ( winner == 3 )
   {
       printf("\t\t\t\t GAME DRAWN %c %c \n\n\n",player1,player2);
   }

       printf("\t  If you want to play again press Y or y otherwise any key.\n");
       scanf(" %c",&ask);

} while (( ask == 'Y' ) || ( ask == 'y' ));



return 0;
}

                /**     F  U  N  C  T  I  O  N      D  E  F  I  N  I  T  O  I  N  S    **/


void instructins(int play1,int play2)
{
    printf("\n\t\t       * T I C   T A C   T O E   G A M E * \n\n");
    printf(" This is a two player game in which a board is displayed below and input will be given by pressing numbers from 1 to 9. \n\n");

                  printf("\t\t\t     1   |   2   |  3");
                  printf("\n\t\t\t   ______|_______|______\n");
                  printf("\t\t\t     4   |   5   |  6");
                  printf("\n\t\t\t   ______|_______|______\n");
                  printf("\t\t\t     7   |   8   |  9");
                  printf("\n\t\t\t         |       |\n");
                  printf("\n");

    printf(" Press that number where you want to insert your sign.\n");
    printf(" %c sign is for player 1. \n",play1);
    printf(" %c sign is for player 2. \n",play2);
    printf(" NOW GET READY...\n\n");
}

int input_func(int bo[3][3], int inp, int p1, int p2 , char name[20])
{
    int loop = 0;

                  printf("\n Let's Start with %s\n",name);
                  printf("\t\t\t            |       |   ");
                  printf("\n\t\t\t      ______|_______|______\n");
                  printf("\t\t\t            |       |  ");
                  printf("\n\t\t\t      ______|_______|______\n");
                  printf("\t\t\t            |       |  ");
                  printf("\n\t\t\t            |       |\n");
                  printf("\n\n\n\n\n\n\n\n\n");

      for ( loop=1; loop<=9; ++loop )
      {
          scanf("%d",&inp);

           if( loop%2 == 1 ) // p1
           {

                if( ( inp == 1 ) && ( bo[0][0] == 0 ) )
                {
                   bo[0][0] = p1;
                }
                else if ( ( inp == 2 ) && ( bo[0][1] == 0 ) )
                {
                    bo[0][1] = p1;
                }
                else if ( ( inp == 3 ) && ( bo[0][2] == 0 ) )
                {
                    bo[0][2] = p1;
                }
                else if ( ( inp == 4 ) && ( bo[1][0] == 0 ) )
                {
                    bo[1][0] = p1;
                }
                else if ( ( inp == 5 ) && ( bo[1][1] == 0 ) )
                {
                    bo[1][1] = p1;
                }
                else if ( ( inp == 6 ) && ( bo[1][2] == 0 ) )
                {
                    bo[1][2] = p1;
                }
                else if ( ( inp == 7 ) && ( bo[2][0] == 0 ) )
                {
                    bo[2][0] = p1;
                }
                else if ( ( inp == 8 ) && ( bo[2][1] == 0 ) )
                {
                    bo[2][1] = p1;
                }
                else if ( ( inp == 9 ) && ( bo[2][2] == 0 ) )
                {
                    bo[2][2] = p1;
                }
                else
                {
                    if( inp > 9 )
                    {
                       printf("\t\t\t  Input numbers are from 1 TO 9. \n\n");
                       --loop;
                    }
                    else
                    {
                        printf("\t\t   You cannot insert another value on this position.   \n\n");
                        --loop;
                    }
                }
           }


                else if ( loop%2 == 0 )
                {

                   if ( ( inp == 1 ) && ( bo[0][0] == 0 ) )
                   {
                     bo[0][0] = p2;
                   }
                   else if ( ( inp == 2 ) && ( bo[0][1] == 0 ) )
                   {
                     bo[0][1] = p2;
                   }
                   else if ( ( inp == 3 ) && ( bo[0][2] == 0 ) )
                   {
                     bo[0][2] = p2;
                   }
                   else if ( ( inp == 4 ) && ( bo[1][0] == 0 ) )
                   {
                     bo[1][0] = p2;
                   }
                   else if ( ( inp == 5 ) && ( bo[1][1] == 0 ) )
                   {
                     bo[1][1] = p2;
                   }
                   else if ( ( inp == 6 ) && ( bo[1][2] == 0 ) )
                   {
                     bo[1][2] = p2;
                   }
                   else if ( ( inp == 7 ) && ( bo[2][0] == 0 ) )
                   {
                     bo[2][0] = p2;
                   }
                   else if ( ( inp == 8 ) && ( bo[2][1] == 0 ) )
                   {
                     bo[2][1] = p2;
                   }
                   else if ( ( inp == 9 ) && ( bo[2][2] == 0 ) )
                   {
                     bo[2][2] = p2;
                   }
                   else
                   {
                       if ( inp > 9)
                       {
                          printf("\t\t\t  Input numbers are from 1 TO 9. \n\n");
                          --loop;
                       }
                       else
                       {
                          printf("\t\t   You cannot insert another value on this position. \n\n");
                          --loop;
                       }
                   }

               }

                  printf("\t\t\t      %4c  |%4c   |%4c",bo[0][0],bo[0][1],bo[0][2]);
                  printf("\n\t\t\t      ______|_______|______\n");
                  printf("\t\t\t      %4c  |%4c   |%4c",bo[1][0],bo[1][1],bo[1][2]);
                  printf("\n\t\t\t      ______|_______|______\n");
                  printf("\t\t\t      %4c  |%4c   |%4c",bo[2][0],bo[2][1],bo[2][2]);
                  printf("\n\t\t\t            |       |\n");
                  printf("\n\n\n\n\n\n\n\n\n");


      if  ( ( bo[0][0] == p1 ) && ( bo[0][1] == p1 ) && ( bo[0][2] == p1 )

                                         ||

            ( bo[1][0] == p1 ) && ( bo[1][1] == p1 ) && ( bo[1][2] == p1 )

                                         ||

            ( bo[2][0] == p1 ) && ( bo[2][1] == p1 ) && ( bo[2][2] == p1 )

                                         ||

            ( bo[0][0] == p1 ) && ( bo[1][0] == p1 ) && ( bo[2][0] == p1 )

                                         ||

            ( bo[0][1] == p1 ) && ( bo[1][1] == p1 ) && ( bo[2][1] == p1 )

                                         ||

            ( bo[0][2] == p1 ) && ( bo[1][2] == p1 ) && ( bo[2][2] == p1 )

                                         ||

            ( bo[0][0] == p1 ) && ( bo[1][1] == p1 ) && ( bo[2][2] == p1 )

                                         ||

            ( bo[0][2] == p1 ) && ( bo[1][1] == p1 ) && ( bo[2][0] == p1 )
          )

                                      return 1;



   else if ( ( bo[0][0] == p2 ) && ( bo[0][1] == p2 ) && ( bo[0][2] == p2 )

                                            ||

             ( bo[1][0] == p2 ) && ( bo[1][1] == p2 ) && ( bo[1][2] == p2 )

                                            ||

             ( bo[2][0] == p2 ) && ( bo[2][1] == p2 ) && ( bo[2][2] == p2 )

                                            ||

             ( bo[0][0] == p2 ) && ( bo[1][0] == p2 ) && ( bo[2][0] == p2 )

                                            ||

             ( bo[0][1] == p2 ) && ( bo[1][1] == p2 ) && ( bo[2][1] == p2 )

                                            ||

             ( bo[0][2] == p2 ) && ( bo[1][2] == p2 ) && ( bo[2][2] == p2 )

                                            ||

             ( bo[0][0] == p2 ) && ( bo[1][1] == p2 ) && ( bo[2][2] == p2 )

                                            ||

             ( bo[0][2] == p2 ) && ( bo[1][1] == p2 ) && ( bo[2][0] == p2 )
          )

                                          return 2;

     }


                                          return 3;
}
