#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<Windows.h>
const int USERS=10;

struct account
{
	char username[15];
   char password[25];
};

void borders(int n)
{
	randomize();
   textbackground(n);
   for(int i=0; i<80; i++)
   	cprintf(" ");
   for(int i=1; i<40;i++)
   {
   	gotoxy(0,i);
      cprintf("  ");
      gotoxy(79,i);
      cprintf("  ");
   }
   gotoxy(0,40);
   for(int i=0; i<80; i++)
   	cprintf(" ");
   textbackground(BLACK);
}

void wordprint(char wordin[26], int i)
{
	if(i==1){
   for(int i=0; wordin[i]; i++) //line 1
    {
      switch(wordin[i])
      {
         case 'A': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'B': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'C': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'D': cout<<char(219)<<char(219)<<char(219)<<char(219)<<' '; break;
         case 'E': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'F': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'G': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'H': cout<<char(219)<<"   "<<char(219); break;
         case 'I': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'J': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'K': cout<<char(219)<<"   "<<char(219); break;
         case 'L': cout<<char(219)<<"    "; break;
         case 'M': cout<<char(219)<<"   "<<char(219); break;
         case 'N': cout<<char(219)<<"   "<<char(219); break;
         case 'O': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'P': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'Q': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'R': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'S': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'T': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'U': cout<<char(219)<<"   "<<char(219); break;
         case 'V': cout<<char(219)<<"   "<<char(219); break;
         case 'W': cout<<char(219)<<"   "<<char(219); break;
         case 'X': cout<<char(219)<<"   "<<char(219); break;
         case 'Y': cout<<char(219)<<"   "<<char(219); break;
         case 'Z': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case '_': cout<<"     "; break;
         default:
         case ' ': cout<<"   "; break;
      }
      cout<<" ";
    }
   cout<<endl; }

   else if(i==2) {
   for(int i=0; wordin[i]; i++)  //line 2
    {
      switch(wordin[i])
      {
         case 'A': cout<<char(219)<<"   "<<char(219); break;
         case 'B': cout<<char(219)<<"   "<<char(219); break;
         case 'C': cout<<char(219)<<"    "; break;
         case 'D': cout<<char(219)<<"   "<<char(219); break;
         case 'E': cout<<char(219)<<"    "; break;
         case 'F': cout<<char(219)<<"    "; break;
         case 'G': cout<<char(219)<<"    "; break;
         case 'H': cout<<char(219)<<"   "<<char(219); break;
         case 'I': cout<<"  "<<char(219)<<"  "; break;
         case 'J': cout<<"   "<<char(219)<<" "; break;
         case 'K': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'L': cout<<char(219)<<"    "; break;
         case 'M': cout<<char(219)<<char(219)<<" "<<char(219)<<char(219); break;
         case 'N': cout<<char(219)<<char(219)<<"  "<<char(219); break;
         case 'O': cout<<char(219)<<"   "<<char(219); break;
         case 'P': cout<<char(219)<<"   "<<char(219); break;
         case 'Q': cout<<char(219)<<"   "<<char(219); break;
         case 'R': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'S': cout<<char(219)<<"    "; break;
         case 'T': cout<<"  "<<char(219)<<"  "; break;
         case 'U': cout<<char(219)<<"   "<<char(219); break;
         case 'V': cout<<" "<<char(219)<<" "<<char(219)<<" "; break;
         case 'W': cout<<char(219)<<"   "<<char(219); break;
         case 'X': cout<<" "<<char(219)<<" "<<char(219)<<" "; break;
         case 'Y': cout<<" "<<char(219)<<" "<<char(219)<<" "; break;
         case 'Z': cout<<"  "<<" "<<char(219)<<" "; break;
         case '_': cout<<"     "; break;
         default:
         case ' ': cout<<"   "; break;
      }
      cout<<" ";
    }
   cout<<endl; }
   else if(i==3) {
   for(int i=0; wordin[i]; i++)  //line 3
    {
      switch(wordin[i])
      {
         case 'A': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'B': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'C': cout<<char(219)<<"    "; break;
         case 'D': cout<<char(219)<<"   "<<char(219); break;
         case 'E': cout<<char(219)<<char(219)<<char(219)<<"  "; break;
         case 'F': cout<<char(219)<<char(219)<<char(219)<<"  "; break;
         case 'G': cout<<char(219)<<"  "<<char(219)<<char(219); break;
         case 'H': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'I': cout<<"  "<<char(219)<<"  "; break;
         case 'J': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'K': cout<<char(219)<<char(219)<<char(219)<<"  "; break;
         case 'L': cout<<char(219)<<"    "; break;
         case 'M': cout<<char(219)<<" "<<char(219)<<" "<<char(219); break;
         case 'N': cout<<char(219)<<" "<<char(219)<<" "<<char(219); break;
         case 'O': cout<<char(219)<<"   "<<char(219); break;
         case 'P': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'Q': cout<<char(219)<<"   "<<char(219); break;
         case 'R': cout<<char(219)<<char(219)<<char(219)<<"  "; break;
         case 'S': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'T': cout<<"  "<<char(219)<<"  "; break;
         case 'U': cout<<char(219)<<"   "<<char(219); break;
         case 'V': cout<<" "<<char(219)<<" "<<char(219)<<" "; break;
         case 'W': cout<<char(219)<<" "<<char(219)<<" "<<char(219); break;
         case 'X': cout<<"  "<<char(219)<<"  "; break;
         case 'Y': cout<<"  "<<char(219)<<"  "; break;
         case 'Z': cout<<"  "<<char(219)<<"  "; break;
         case '_': cout<<"     "; break;
         default:
         case ' ': cout<<"   "; break;
      }
      cout<<" ";
    }
   cout<<endl; }
   else if(i==4) {
   for(int i=0; wordin[i]; i++)  //line 4
   {
      switch(wordin[i])
      {
         case 'A': cout<<char(219)<<"   "<<char(219); break;
         case 'B': cout<<char(219)<<"   "<<char(219); break;
         case 'C': cout<<char(219)<<"    "; break;
         case 'D': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'E': cout<<char(219)<<"    "; break;
         case 'F': cout<<char(219)<<"    "; break;
         case 'G': cout<<char(219)<<"   "<<char(219); break;
         case 'H': cout<<char(219)<<"   "<<char(219); break;
         case 'I': cout<<"  "<<char(219)<<"  "; break;
         case 'J': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'K': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'L': cout<<char(219)<<"   "<<char(219); break;
         case 'M': cout<<char(219)<<"   "<<char(219); break;
         case 'N': cout<<char(219)<<"  "<<char(219)<<char(219); break;
         case 'O': cout<<char(219)<<"   "<<char(219); break;
         case 'P': cout<<char(219)<<"    "; break;
         case 'Q': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'R': cout<<char(219)<<"  "<<char(219)<<" "; break;
         case 'S': cout<<"    "<<char(219); break;
         case 'T': cout<<"  "<<char(219)<<"  "; break;
         case 'U': cout<<char(219)<<"   "<<char(219); break;
         case 'V': cout<<"  "<<char(219)<<"  "; break;
         case 'W': cout<<char(219)<<" "<<char(219)<<" "<<char(219); break;
         case 'X': cout<<" "<<char(219)<<" "<<char(219)<<" "; break;
         case 'Y': cout<<"  "<<char(219)<<"  "; break;
         case 'Z': cout<<char(219)<<"    "; break;
         case '_': cout<<"     "; break;
         default:
         case ' ': cout<<"   "; break;
      }
      cout<<" ";
    }
   cout<<endl; }
   else {
   for(int i=0; wordin[i]; i++)  //line 5
   {
      switch(wordin[i])
      {
         case 'A': cout<<char(219)<<"   "<<char(219); break;
         case 'B': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'C': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'D': cout<<char(219)<<char(219)<<char(219)<<char(219)<<" "; break;
         case 'E': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'F': cout<<char(219)<<"    "; break;
         case 'G': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'H': cout<<char(219)<<"   "<<char(219); break;
         case 'I': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'J': cout<<char(219)<<char(219)<<char(219)<<char(219)<<" "; break;
         case 'K': cout<<char(219)<<"   "<<char(219); break;
         case 'L': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'M': cout<<char(219)<<"   "<<char(219); break;
         case 'N': cout<<char(219)<<"   "<<char(219); break;
         case 'O': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'P': cout<<char(219)<<"    "; break;
         case 'Q': cout<<"    "<<char(219); break;
         case 'R': cout<<char(219)<<"   "<<char(219); break;
         case 'S': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'T': cout<<"  "<<char(219)<<"  "; break;
         case 'U': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'V': cout<<"  "<<char(219)<<"  "; break;
         case 'W': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case 'X': cout<<char(219)<<"   "<<char(219); break;
         case 'Y': cout<<"  "<<char(219)<<"  "; break;
         case 'Z': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         case '_': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
         default:
         case ' ': cout<<"   "; break;
      }
      cout<<" ";
    }
   cout<<endl;}
}


class tictactoe
{
   //3x3 board       //player no.
	char board[3][3]; int player;
   int row, column;

   //SWITCHES PLAYERS
   void updateplayer()
   {
   	player==1 ? player=2 : player=1;
   }

   //RETURNS ROW INDEX BASED ON CELL NO.
   int rowret(int cell)
   {
   	if(cell==1 || cell==2 || cell==3)
      	return 0;
      if(cell==4 || cell==5 || cell==6)
      	return 1;
      if(cell==7 || cell==8 || cell==9)
      	return 2;
   }

   //RETURNS COLUMN INDEX BASED ON CELL NO.
   int colret(int cell)
	{
      if(cell==1 || cell==4 || cell==7)
      	return 0;
      if(cell==2 || cell==5 || cell==8)
      	return 1;
      if(cell==3 || cell==6 || cell==9)
      	return 2;
   }

   void charprint(char a, char b, char c, int n, int &m)
   {
      gotoxy(32,m++);
      switch(n)
      {
      	case 1:
         case 5:{

            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<" ";
            for(int i=0; i<3; i++)
            {
               char p;
               if(i==0) p=a; else if(i==1) p=b; else p=c;
               switch(p)
               {
                  case 'X':cout<<char(219)<<"   "<<char(219); break;
                  case 'O': cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219); break;
                  default: cout<<"     ";
               }
               cout<<" ";
               textbackground(BLUE);
            cprintf(" ");
               textbackground(BLACK);
               cout<<" ";
            }
            break;
            }
         case 4:
         case 2:{

            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<" ";
            for(int i=0; i<3; i++)
            {
               char p;
               if(i==0) p=a; else if(i==1) p=b; else p=c;
               switch(p)
               {
                  case 'X':cout<<" "<<char(219)<<" "<<char(219)<<" "; break;
                  case 'O': cout<<char(219)<<"   "<<char(219); break;
                  default: cout<<"     ";
               }
               cout<<" ";
               textbackground(BLUE);
            cprintf(" ");
               textbackground(BLACK);
               cout<<" ";
            }
            break;
            }
         case 3: {

            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<" ";
            for(int i=0; i<3; i++)
            {
               char p;
               if(i==0) p=a; else if(i==1) p=b; else p=c;
               switch(p)
               {
                  case 'X':cout<<"  "<<char(219)<<"  "; break;
                  case 'O': cout<<char(219)<<"   "<<char(219); break;
                  default: printf("  %c  ", p);
               }
               cout<<" ";
               textbackground(BLUE);
            cprintf(" ");
               textbackground(BLACK);
               cout<<" ";
            }
            break;
            }
      }
   }
   public:

   	//ASSIGNS VALUES TO EACH CELL
   	void initialize()
      {
      	int c=1;
         for(int i=0; i<3; i++)
         {
         	for(int j=0; j<3; j++)
            {
            	board[i][j]='0'+c++;
            }
         }
         player=1;
      }

      //Draws the board
      void draw()
      {
         clrscr();
         borders(7);
         int n=10;
      	for(int i=0; i<3; i++)
         {
            gotoxy(32,n);
            textbackground(BLUE);
            for(int k=0;k<25;k++)
               cprintf(" ");
            textbackground(BLACK);
            gotoxy(32,++n);
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<"       ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<"       ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
         	cout<<"       ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            gotoxy(32,++n);
            for(int k=1; k<=5; k++)
            {
               charprint(board[i][0],board[i][1],board[i][2],k,n);
            }
            gotoxy(32, n);
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<"       ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<"       ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
         	cout<<"       ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            gotoxy(32,++n);
         }
         textbackground(BLUE);
         for(int k=0;k<25;k++)
            cprintf(" ");
         textbackground(BLACK);
         gotoxy(32,++n);
      }

      //Updates the board
      void load()
      {
         int cell, f;
         do
         {
            f=0;
         	printf("Player %i, please input your cell no. :",player);
            cin>>cell;

            if(cell>9 || cell<1)
            	f=1;

            row=rowret(cell); column=colret(cell);

            if(board[row][column]=='X' || board[row][column]=='O')
            {
               printf("Error: cell contains a character\n");
               f=1;
               Sleep(500);
               clrscr();
               draw();
            }
         }
         while(f==1);

         if(player==1)
         	board[row][column]='X';
         else
         	board[row][column]='O';

         updateplayer();
      }

      //Checks for victory and draw
      int check()
      {
      	if(board[0][0]==board[1][0] && board[1][0]==board[2][0])
         	return 0;
         else if(board[0][0]==board[0][1] && board[0][1]==board[0][2])
         	return 0;
         else if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
         	return 0;
         else if(board[1][0]==board[1][1] && board[1][1]==board[1][2])
         	return 0;
         else if(board[0][1]==board[1][1] && board[1][1]==board[2][1])
         	return 0;
         else if(board[2][0]==board[2][1] && board[2][1]==board[2][2])
         	return 0;
         else if(board[0][2]==board[1][2] && board[1][2]==board[2][2])
         	return 0;
         else if(board[2][0]==board[1][1] && board[1][1]==board[0][2])
         	return 0;
         else
         {
         	int f=0;
            for(int i=0; i<3 && f!=1; i++)
            	for(int j=0; j<3; j++)
               {
               	if(board[i][j]>='1' && board[i][j]<='9')
                  	f=1;
               }
            if(f==0)
            {
               int n=1+random(14);borders(n);
               for(int i=1; i<=5; i++)
               {
                  gotoxy(28,2+i);
                  wordprint("TIE",i);
               }
               gotoxy(28, 10);
               cout<<"[Press any character to return to menu]"; getch();
            	return 2;
            }
            else
         		return 1;
         }
      }
      void tstart()
      {
         int status;
         clrscr();
         borders(7);
         for(int i=1; i<=5; i++)
         {
            gotoxy(29,2+i);
         	wordprint("TTT",i);
         }
         Sleep(5000);
         initialize();
         do
         {
            draw();
            load();
            cout<<endl<<"Updating"<<".";Sleep(200);cout<<".";Sleep(200);cout<<".";Sleep(200);cout<<".";Sleep(200);cout<<endl;
            status=check();
            clrscr();
         }
         while(status==1);

         if(status==0)
         {
            int n=1+random(14);borders(n);
            for(int i=1; i<=5; i++)
            {
               gotoxy(20,2+i);
               wordprint("VICTORY",i);
            }
            gotoxy(20, 10);
            cout<<"[Press any character to return to menu]"; getch();
         }
      }
};



class maze
{
   char M[12][23]; int x,y;
	public:
      void initialize()
      {
         ifstream fin("MAZE.TXT");
         char ch;
         for(int i=0; i<12; i++)
         	for(int j=0; j<23; j++)
            {
               fin.get(ch);
               if(ch!='\n')
            		M[i][j]=ch;
               else
               	j--;
            }
      }
   	void draw()
      {
      	for(int i=0 ;i<12; i++)
         {
         	for(int j=0; j<23; j++)
            {
              if(M[i][j]=='1')
              {
              		textcolor(RED);
                  cprintf("%c", char(178));
                  textcolor(WHITE);
              }
              else if(isalpha(M[i][j]))
              {
               	textcolor(GREEN);
                  cprintf("%c", M[i][j]);
                  textcolor(WHITE);
              }
              else
              {
              	cout<<" ";
              }
            }
            cout<<endl;
         }
         cout<<endl;
      }
      bool validate( int x, int y, int changex, int changey)
      {
      	if(M[x+changex][y+changey]=='1')
         	return false;
         else
         	return true;
      }
      void move()
      {
          gotoxy(2,0);
          x=2; y=0;
          int win=1;
          while(win)
          {
             clrscr();
             draw();
             //gotoxy(x,y);
             char ch=_getch();
             int changex,changey, cont=1;
             switch(ch)
             {
                case 'd': changex=+1; changey=0; break;
                case 'u': changex=-1; changey=0; break;
                case 'l': changey=-1; changex=0; break;
                case 'r': changey=+1; changex=0; break;
                default: cont=0;break;
             }

             if(x+changex>=0 && y+changey>=0 && cont==1)
             {
               if(validate(x,y,changex,changey) )
               {
                  M[x][y]=' ';
                  x+=changex; y+=changey;
                  if(M[x][y]=='E')
                  {
                     cout<<'\a';
                     win=0;
                     clrscr();
                     int n=1+random(14);borders(n);
                     for(int i=1; i<=5; i++)
                     {
                        gotoxy(20,2+i);
                        wordprint("VICTORY",i);
                     }
                     gotoxy(20, 10);
                     cout<<"[Press any character to return to menu]"; getch();
                  }
                  else;
                     M[x][y]='X';

               }
               else
               	cout<<"\a";
             }

          }
      }
      void mstart()
      {
           initialize();
           clrscr();
            int n=1+random(14);borders(n);
            for(int i=1; i<=5; i++)
            {
               gotoxy(28,2+i);
               wordprint("MAZE",i);
            }
            gotoxy(20, 10);
            cout<<"\t u-up d-down r-right l-left";
            gotoxy(1,1);
            Sleep(5000);
           move();
      }
};


class hangman
{
	char used[26], word[26], guess[26];
   int tries, lineno, win;



   public:
   	void load()
      {
      	tries=0; win=1;
         clrscr();
         int n=1+random(14);borders(n);
         for(int i=1; i<=5; i++)
         {
         	gotoxy(20,2+i);
         	wordprint("HANGMAN",i);
         }
         Sleep(2000);

         gotoxy(20, 10);
			cout<<"Insert Word: "; cin>>word;
         strupr(word);
         Sleep(500);
         int i;
         for(i=0; word[i]; i++)
         	guess[i]='_';
         guess[i]='\0';
         clrscr();
      }
      bool check(char ch)
      {
      	int i=0;
         while(used[i])
         {
         	if(ch==used[i])
            	return true;
            i++;
      	}
         return false;
      }
      void add(ch)
      {
      	int i=0;
         for(i;used[i];i++);
         used[i]=ch;
         used[i+1]='\0';
      }
      void input()
      {
         char ch;
         do
         {
               int c=(80-(strlen(word)*6))/2;
               for(int i=1; i<=5; i++)
               {
               	gotoxy(c, 2+i);
               	wordprint(guess, i);
               }
               gotoxy(c, 10);
      			cout<<"Enter Guess letter: "; cin>>ch;
               ch=toupper(ch);
               if(check(ch)==true)
               {
                  gotoxy(c, 11);
               	cout<<"Letter was already used. Input again";
                  cout<<".";Sleep(250);cout<<".";Sleep(250);cout<<".\n";
                  clrscr();
               }
         }

         while(check(ch));
         add(ch);
         int i=0, f=0;
         for(int i=0; word[i]; i++)
         {
         	if(word[i]==ch)
            {
            	guess[i]=ch;
               f=1;
            }
         }

         if(f==0)
         	tries++;
         if(strcmpi(word,guess)==0)
         	win=0;
         if(tries==10)
         	win=0;
      }
      void draw()
      {
       	switch(tries)
         {
            case 10:cout<< "\n\t\t\t  ================|\n\t\t\t //               |\n\t\t\t ||               |\n\t\t\t ||               |\n\t\t\t ||              _^_\n\t\t\t ||             / ..\\\n\t\t\t ||            [  _  ]\n\t\t\t ||             \\___/\n\t\t\t ||\n\t\t\t ||               ||               \n\t\t\t ||              /||\\\n\t\t\t ||             //||\\\\\n\t\t\t ||            // || \\\\\n\t\t\t ||            *  ||  *\n\t\t\t ||              //\\\\\n\t\t\t ||             //  \\\\\n\t\t\t /\\            //    \\\\\n\t\t\t//\\\\         ***      ***\n\t\t\t/||\\\\\n\t\t\t_||_\\\\\n\t\t\t";  break;
            case 9:cout<<  "\n\t\t\t  ================|\n\t\t\t //               |\n\t\t\t ||               |\n\t\t\t ||               |\n\t\t\t ||              _^_\n\t\t\t ||             / ..\\\n\t\t\t ||            [  _  ]\n\t\t\t ||             \\___/\n\t\t\t ||               ||\n\t\t\t ||              /||\\\n\t\t\t ||             //||\\\\\n\t\t\t ||            // || \\\\\n\t\t\t ||            *  ||  *\n\t\t\t ||              //\n\t\t\t ||             //\n\t\t\t ||            //\n\t\t\t /\\          ***\n\t\t\t//\\\\ \n\t\t\t/||\\\\ \n\t\t\t_||_\\\\\n\t\t\t";  break;
            case 8:cout<<  "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||              /||\\\n ||             //||\\\\\n ||            // || \\\\\n ||            *  ||  *\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 7:cout<<  "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||              /||\n ||             //||\n ||            // ||\n ||            *  ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 6:cout<<  "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||               ||\n ||               ||\n ||               ||\n ||               ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 5:cout<<  "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||               ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 4:cout<<  "\n  ================|\n //               |\n ||               |\n ||               |\n ||              _^_\n ||             / ..\\\n ||            [  _  ]\n ||             \\___/\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 3:cout<<  "\n  ================|\n //               |\n ||               |\n ||               |\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 2:cout<<  "\n  ================\n //\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
            case 1:cout<<  "\n\n\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n ||\n /\\\n//\\\\\n/||\\\\\n_||_\\\\\n";break;
         }
      }
      void hstart()
      {
      	load();
         while(win)
         {
         	input();
            draw();
            Sleep(2500);
            clrscr();
         }
         clrscr();
         if(tries==10)
         {
            int n=1+random(14);borders(n);
            for(int i=1; i<=5; i++)
            {
               gotoxy(20,2+i);
               wordprint("HANGMAN",i);
            }
            gotoxy(20, 10);
         	cout<<"The word was "<<strupr(word)<<" sorry, play again and try beating your score\n";
         }
         else
         {
            int n=1+random(14);borders(n);
            for(int i=1; i<=5; i++)
            {
               gotoxy(20,2+i);
               wordprint("VICTORY",i);
            }
            gotoxy(20, 10);
         	cout<<"you finished it with "<<(10-tries)<<" left";
         }
         gotoxy(20,12);
         cout<<" [Proceed to menu?] "; getch();
      }
};



class fifteen
{
      // board
      int board[4][4];
      int d;
      //position of space
      int blax,blay;
      void charprint(int a, int b, int c, int d, int &n)
      {
         gotoxy(17,n);
         cout<<" ";
         textbackground(BLUE);
         cprintf(" ");
         textbackground(BLACK);
         cout<<"   ";
         for(int i=0; i<4; i++)
         {
            int p;
            if(i==0) p=a; else if(i==1) p=b; else if(i==2) p=c; else p=d;
            if(p==0)
            	printf(" __ ");
            else
					printf(" %2i ", p);
            cout<<"   ";
            textbackground(BLUE);
            cprintf(" ");
            textbackground(BLACK);
            cout<<"   ";
         }
         n++;
      }

      public:
      int fstart()
      {
         d=4;
          // greet user with instructions
          greet();

          // initialize the board
          init();

          // accept moves until game is won
          while (true)
          {
              // clear the screen
              clrscr();

              // draw the current state of the board
              draw();

              // check for win
              if (won())
              {
                     clrscr();
                     int n=1+random(14);borders(n);
                     for(int i=1; i<=5; i++)
                     {
                        gotoxy(20,2+i);
                        wordprint("FIFTEEN",i);
                     }
                     gotoxy(20, 10);
                     cout<<"Congrats!!!!";
                     gotoxy(20,12);
                     cout<<"[Press any character to return to menu]"; getch();
              }

              // prompt for move
              printf("Tile to move: ");
              int tile; cin>>tile;

              // quit if user inputs 0 (for testing)
              if (tile == 0)
              {
                  break;
              };

              // move if possible, else report illegality
              if (!move(tile))
              {
                  printf("\nIllegal move.\n");
                  Sleep(500);
              }
              Sleep(500);
          }


          // success
          return 0;
      }

      /**
       * Greets player.
       */
      void greet(void)
      {
          clrscr();
          int n=1+random(14);borders(n);
          for(int i=1; i<=5; i++)
          {
          	gotoxy(20,2+i);
          	wordprint("FIFTEEN",i);
          }
          gotoxy(20,10);
          cout<<"Press 0 to exit";
          Sleep(2000);
      }

      /**
       * Initializes the game's board with tiles numbered 1 through d*d - 1
       * (i.e., fills 2D array with values but does not actually print them).
       */
      void init(void)
      {
          //largest no, in grid
          int n=d*d-1;

          //Assigns values to each cell
          for(int i=0; i<d; i++)
          {
              for(int j=0; j<d; j++)
              {
                  //Inserted in descending order
                  board[i][j]=n--;
              }
          }


          //0 is value used in place of the space character
          board[d-1][d-1]=0;

          //Stores initial coordinates of space character
          blax=d-1;
          blay=d-1;
      }

      /**
       * Prints the board in its current state.
       */
      void draw(void)
      {
          borders(7);
          gotoxy(17,10);
          int k=10;
          for(int i=0; i<d; i++)
          {
          		cout<<" ";
               textbackground(BLUE);
               for(int k=0;k<45;k++)
                  cprintf(" ");
               textbackground(BLACK);
               cout<<endl;

               gotoxy(17,++k);
               cout<<" ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               gotoxy(17,++k);

          		charprint(board[i][0],board[i][1],board[i][2],board[i][3],k);

               gotoxy(17,k);
               cout<<" ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               cout<<"          ";
               textbackground(BLUE);
               cprintf(" ");
               textbackground(BLACK);
               gotoxy(17,++k);
          }
         cout<<" ";
         textbackground(BLUE);
         for(int m=0;m<45;m++)
            cprintf(" ");
         textbackground(BLACK);
         gotoxy(17,++k);
      }

      /**
       * If tile borders empty space, moves tile and returns true, else
       * returns false.
       */
      bool move(int tile)
      {
          int x,y, found =1, space=1;
          //searches for the tile
          for(int i=0; i<d && found==1; i++)
          {
              for(int j=0; j<d; j++)
              {
                  if(tile==board[i][j])
                  {
                      y=i;
                      x=j;
                      found=0;
                  }
              }
          }

          //Error if tile isn't found
          if(found==1)
              return true;

          //Checks for a valid move
          if(x>0 && board[y][x-1]==0)
              space=0;
          else if(x<d-1 && board[y][x+1]==0)
              space=0;
          else if(y>0 && board[y-1][x]==0)
              space=0;
          else if(y<d-1 && board[y+1][x]==0)
              space=0;
          if(space==1)
              return false;
          else
          {
              //swaps space and number selected
              board[blay][blax]=board[y][x];
              board[y][x]=0;
              blay=y;
              blax=x;
              return true;
          }
      }

      /**
       * Returns true if game is won (i.e., board is in winning configuration),
       * else false.
       */
      bool won(void)
      {
          int prev=board[0][0];

          //Checks if the game is over (short version)
          if(board[d-1][d-1]!=0)
              return false;

          for(int i=0; i<d; i++)
          {
              for(int j=0; j<d; j++)
              {
                  //Ensures ascending order
                  if(board[i][j]<prev)
                  {
                      return false;
                  }
                  prev=board[i][j];

                  //excludes the space character
                  if(i==d-1 && j+1==d-1)
                      break;
              }
          }
          return true;
      }
};



class game: public fifteen, public maze, public tictactoe, public hangman
{
	public:
   	void fifteen() { fstart(); }
      void hangman() { hstart(); }
      void tictactoe() { tstart(); }
      void maze() { mstart(); }
};

void open()
{
   randomize();
   int n=9+random(7);
	borders(n);
   gotoxy(28,18);
   cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
   gotoxy(28,19);
   cout<<char(219)<<"     "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
   gotoxy(28,20);
   cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"  ";
   gotoxy(28,21);
   cout<<"    "<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
   gotoxy(28,22);
   cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"   "<<char(219);
   gotoxy(1,1);

   gotoxy(28,24);
   cout<<"Loading...";
   gotoxy(28,26);
   textbackground(GREEN);
   for(int i=0; i<23; i++)
   {
   	cprintf(" ");
      Sleep(250);
   }
   textbackground(BLACK);
   Sleep(2500);
   clrscr();

	borders(n);
   gotoxy(25,20);

   cout<<"Star Games - Created by Jaidev Shriram";gotoxy(1,1);
   Sleep(5000);
   clrscr();
}

void protection(account sample[], int n)                                        //PASSWORD PROTECTION
{
   char user[10], pass[25];
   int found=1, nc=1+random(14);
	borders(nc);

   gotoxy(28,3);
      cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
   gotoxy(28,4);
      cout<<char(219)<<"     "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
   gotoxy(28,5);
      cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"  ";
   gotoxy(28,6);
      cout<<"    "<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
   gotoxy(28,7);
      cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"   "<<char(219);

   while(found)
   {
      gotoxy(27,9);
   		cout<<"Welcome to the Star Games";
      gotoxy(23,10);
   		cout<<"Choose from amazing four games!!";

      gotoxy(18,12);
			cout<<"Please enter your username and password";
      gotoxy(28,14);
			cout<<"Username-";gets(user);
      gotoxy(28,15);
		cout<<"Password-";
      //password hashing taken from http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1045691686&id=1043284392
      int ch;
      int i = 0;
      fflush(stdout);

      while ((ch = getch()) != EOF && ch != '\n' && ch != '\r' && i < sizeof(pass) - 1)
      {
      	if (ch == '\b' && i > 0)
        {
          printf("\b \b");
          fflush(stdout);
          i--;
          pass[i] = '\0';
        }
        else if (isalnum(ch))
        {
          putchar('*');
          pass[i++] = (char)ch;
        }
      }

      pass[i] = '\0';

      gotoxy(28,16);
      	cout<<"Loading Please Wait";Sleep(500);cout<<'.';Sleep(500);cout<<'.';Sleep(500);cout<<'.';Sleep(500);cout<<'.';
		for(int k=0;k<n && found;k++)
			if(strcmpi(sample[k].username,user)==0 && strcmp(sample[k].password,pass)==0)
				found=0;
		if(found==1)
		{
         gotoxy(28,18);
			cout<<"Incorrect Password";
         gotoxy(28,19);
			cout<<"[Enter any character to retry]"; getch();
			clrscr();
         borders(nc);

         gotoxy(28,3);
            cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
         gotoxy(28,4);
            cout<<char(219)<<"     "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
         gotoxy(28,5);
            cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"  ";
         gotoxy(28,6);
            cout<<"    "<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
         gotoxy(28,7);
            cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"   "<<char(219);
         gotoxy(1,10);

		}
      else
      {
         gotoxy(28,18);
      	cout<<"Access Granted";
         Sleep(1000);
         gotoxy(28,19);
         cout<<"Logging In";
         Sleep(250);cout<<'.';Sleep(250);cout<<'.';Sleep(250);cout<<'.';Sleep(250);cout<<'.'<<endl;
         clrscr();
      }
   }
}

void main()
{
    open(); cout<<"\a";
    game a;
    account sample[USERS]={{"user","pass"},{"Jaidev","hello!@#"},{"BIKRAM","1234abc"},{"FAIPS","P@ssw0rd"}};
    int nusers=4;
    protection(sample,nusers);

    int ch=1;
    do
	{
      clrscr(); int c=1+random(14);
      borders(c);
      gotoxy(28,3);
   		cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
      gotoxy(28,4);
      	cout<<char(219)<<"     "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
      gotoxy(28,5);
      	cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"  ";
      gotoxy(28,6);
      	cout<<"    "<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
      gotoxy(28,7);
      	cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"   "<<char(219);

      gotoxy(28,15);
			cout<<"1. Play Game of Fifteen";
      gotoxy(28,16);
			cout<<"2. Play Hangman";
      gotoxy(28,17);
			cout<<"3. Play Tic Tac Toe";
      gotoxy(28,18);
			cout<<"4. Play Maze";
      gotoxy(28,19);
      	cout<<"5. Log Out and Switch User";
      gotoxy(28,21);
			cout<<"Option?  "; cin>>ch;

		switch(ch)
		{
			case 1: a.fifteen(); break;
			case 2: a.hangman(); break;
			case 3: a.tictactoe(); break;
			case 4: a.maze(); break;
         case 5: {
         				clrscr();
         			   randomize();
                     int n=9+random(7);
                     borders(n);
                     gotoxy(28,18);
                     cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
                     gotoxy(28,19);
                     cout<<char(219)<<"     "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
                     gotoxy(28,20);
                     cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(219)<<char(219)<<char(219)<<"  ";
                     gotoxy(28,21);
                     cout<<"    "<<char(219)<<" "<<"  "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<" ";
                     gotoxy(28,22);
                     cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<"   "<<char(219)<<" "<<char(219)<<"   "<<char(219);
                     gotoxy(1,1);

                     gotoxy(28,24);
                     cout<<"Logging Out..";
                     gotoxy(28,26);
                     textbackground(RED);
                     for(int i=0; i<23; i++)
                     {
                        cprintf(" ");
                        Sleep(250);
                     }
                     textbackground(BLACK);
                     Sleep(2500);
                     clrscr();
                     protection(sample,nusers);
                     break;
         		}
      }
	}
	while(ch);
}
