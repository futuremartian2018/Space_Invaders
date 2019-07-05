#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
int i, j;
int lifes=3;
int m=0;
int z=15;
int b=0;
int g=1;
int score=0;
int plansza[26][30];


char ghost[10][30]={
"|                            |",
};

char won[20][30]={
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|       !!WYGRALES!!         |",
"|                            |",
"|       [] + [Enter]         |",
"|                            |",
"|  [SPACE] ZAGRAJ PONOWNIE   |",
"|                            |",
"|     [M] WROC DO MENU       |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",

};

char lost[20][30]={
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|     :(  PRZEGRALES :(      |",
"|                            |",
"|       [] + [Enter]         |",
"|                            |",
"|  [SPACE] ZAGRAJ PONOWNIE   |",
"|                            |",
"|     [M] WROC DO MENU       |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",

};

lary:
m=0;
g=1;
z=15;
b=0;
score=0;
lifes=5;
char  menu[20][30]={
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|     SPACE    INVADERS      |",
"|                            |",
"|                            |",
"|      [S] ABY ZACZAC        |",
"|                            |",
"|      [W] ABY WYJSC         |",
"|                            |",
"|                            |",
"|                            |",
"|                            |",
"|         AUTORSTWA:         |",
"|    ARKADIUSZ M. MARTA      |",
"|                            |",
"|      COPYRIGHT  2017       |",
"|                            |",

};

char menu1[20][30]={
"|                            |",
"|         INSTRUKCJA         |",
"|                            |",
"|         STEROWANIE         |",
"|                            |",
"| <-  PORUSZANIE SIE W LEWO  |",
"| ->  PORISZANIE SIE W PRAWO |",
"|  ^  STRZAL                 |",
"|                            |",
"|  ZA ZABICIE NPC OTRZYMASZ  |",
"|        <T> -10pkt          |",
"|   JEZELI OSIAGNIESZ WYNIK  |",
"|          150 pkt           |",
"|         WYGRYWASZ!         |",
"|                            |",
"|W PRZYPADKU GDY NIE UZYSKASZ|",
"|ZADANEGO WYNIKU LUB ZGINIESZ|",
"|  GRA KONCZY SIE PORAZKA    |",
"|                            |",
"|  [D] ROZPOCZNIJ ROZGRYWKE  |",
};

    system("cls");
for(i=0;i<20; i++){
        printf("\n");
    for(j=0; j<30; j++){
        printf("%c", menu[i][j]);
    }
}

int p=getch();

    switch(p){
    case 83: break;
    case 115: break;
    case 87: return 0;
    case 119: return 0;
    default: goto lary;
    }
hary:
 system("cls");
for(i=0; i<20;i++){
        printf("\n");
    for(j=0;j<30;j++){
        printf("%c", menu1[i][j]);
    }
}
p=getch();
switch(p){
    case 68: break;
    case 100: break;
    default: goto hary;}

system("cls");
jedziemy:
system("cls");


for(i=0; i<21; i++){
    for(j=0; j<30; j++){
        if(j==0 || j==29){
            plansza[i][j]=9;
        }
        else plansza[i][j]=0;
    }
}

plansza[19][9]=1; //statek gracza
plansza[19][10]=2;
plansza[19][8]=2;



plansza[2][4]=21;
plansza[2][5]=22;
plansza[2][6]=53;

plansza[2][8]=21;  //NPC
plansza[2][9]=22;
plansza[2][10]=53;

plansza[2][12]=21;
plansza[2][13]=22;
plansza[2][14]=53;

plansza[2][16]=21;
plansza[2][17]=22;
plansza[2][18]=53;


plansza[5][4]=21;
plansza[5][5]=22;
plansza[5][6]=53;

plansza[5][8]=21;  //NPC
plansza[5][9]=22;
plansza[5][10]=53;

plansza[5][12]=21;
plansza[5][13]=22;
plansza[5][14]=53;

plansza[5][16]=21;
plansza[5][17]=22;
plansza[5][18]=53;


plansza[8][4]=21;
plansza[8][5]=22;
plansza[8][6]=53;

plansza[8][8]=21;  //NPC
plansza[8][9]=22;
plansza[8][10]=53;

plansza[8][12]=21;
plansza[8][13]=22;
plansza[8][14]=53;

plansza[8][16]=21;
plansza[8][17]=22;
plansza[8][18]=53;

plansza[8][20]=21;
plansza[8][21]=22;
plansza[8][22]=53;

plansza[5][20]=21;
plansza[5][21]=22;
plansza[5][22]=53;

plansza[2][20]=21;
plansza[2][21]=22;
plansza[2][22]=53;

m=0;
g=1;
z=15;
b=0;
int c=0;
score=0;
lifes=5;

while(score < 150 && lifes>0){
c=0;
for(i=0;i<20;i++){
        for(j=0; j<30; j++){
        if(plansza[i][j]==21){
        c++;
        }
    }
}
if(c==0){
    lifes=0;
}
printf("\n");

for(i=0; i<20; i++){
        printf("\n");
    for(j=0; j<30; j++){
        if(plansza[i][j]==9){
            printf("|");
        }
        if(plansza[i][j]==0){
            printf(" ");
        }
        if(plansza[i][j]==1){
            printf("!");
        }
        if(plansza[i][j]==2){
            printf("_");
        }
        if(plansza[i][j]==3){
            printf("o");
        }
        if(plansza[i][j]==19){
            printf("#");
            plansza[i][j]=0;

        }
        if(plansza[i][j]==50){
            printf("#");
            plansza[i][j]=0;
        }
        if(plansza[i][j]==7){
            printf("$");
            plansza[i][j]=0;
        }
        if(plansza[i][j]==12){
            printf("&");
            plansza[i][j]=0;
        }
        if(plansza[i][j]==13){
            printf("v");

        }
        if(plansza[i][j]==16){
            plansza[i][j]=0;
        }
        if(plansza[i][j]==14){
            lifes--;
            plansza[i][j]=1;
        }
        if(plansza[i][j]==15){
            lifes--;
            plansza[i][j]=2;

        }
        if(plansza[i][j]==20){
            plansza[i][j]=0;
        }
        if (plansza[i][j]==21){
            printf("<");
        }
        if(plansza[i][j]==22){
            printf("T");

        }
        if(plansza[i][j]==53){
            printf(">");
        }
    }
}
for(i=0; i<20; i++){                     //STRZELANIE - GRACZ (przemiesc pocisk)
    for(j=0; j<30; j++){
        if( plansza[i][j]==3){
            plansza[i][j]=0;
            plansza[i-1][j]+=3;
        }
    }
}
for(j=0; j<30; j++){              //POCISK GRACZA nie wychodzi poza tablice
    if(plansza[1][j]==3){
        plansza[1][j]=0;
    }
}


if(GetAsyncKeyState(VK_LEFT)){          //PRZEMIESZCZANIE STATKU W LEWO
    for(i=29;i>0;i--){
        if(i>3 && plansza[19][i]==2){
            plansza[19][i]=0;
            plansza[19][i-1]=0;
            plansza[19][i-2]=0;
            plansza[19][i-1]+=2;
            plansza[19][i-2]+=1;
            plansza[19][i-3]+=2;

            break;
        }
    }
}

if(GetAsyncKeyState(VK_RIGHT)){                     //PRZEMIESZCZANIE STATKU W PRAWO
    for(i=0;i<30;i++){
        if(i<26 && plansza[19][i]==2){
            plansza[19][i]=0;
            plansza[19][i+1]=0;
            plansza[19][i+2]=0;
            plansza[19][i+1]+=2;
            plansza[19][i+2]+=1;
            plansza[19][i+3]+=2;

            break;
        }
    }
}

if(b%7==0){            //STRZELANIE - GRACZ
    b=0;
    if(GetAsyncKeyState(VK_UP)){


    for(i=0; i<30; i++){
        if(plansza[19][i]==1){

            plansza[18][i]=plansza[18][i]+3;
        }
    }}
 }
 b++;

//NPC "<T>"
if(m==0){
        g++;
if(g%8==0){
for(i=19; i>0;i--){              //PRZEMIESZCZANIE NPC ->
    for(j=29; j>0; j--){
            if(j<26&& j>2 && plansza[i][j]==53){
                plansza[i][j]=0;
                plansza[i][j-1]=0;
                plansza[i][j-2]=0;
                plansza[i][j-1]+=21;
                plansza[i][j]+=22;
                plansza[i][j+1]+=53;
            }

    }
}
}
else if(g%31==0){ m=1;
g=0;
for(i=19; i>0; i--){
    for(j=29; j>0; j--){
        if(plansza[i][j]==53){
            plansza[i][j]=0;
            plansza[i][j-1]=0;
            plansza[i][j-2]=0;
            plansza[i+1][j]+=53;
            plansza[i+1][j-1]+=22;
            plansza[i+1][j-2]+=21;
        }
    }
}


}
}

 if(m==1){
    g++;
if(g%8==0){
for(i=0; i<20;i++){              //PRZEMIESZCZANIE NPC <-
    for(j=0; j<30; j++){
            if(j<26&& j>3 && plansza[i][j]==21){
                plansza[i][j]=0;
                plansza[i][j+1]=0;
                plansza[i][j+2]=0;
                plansza[i][j-1]+=21;
                plansza[i][j]+=22;
                plansza[i][j+1]+=53;
            }

    }
}
}

else if(g%31==0){g=0;
m=0;
for(i=19; i>0; i--){
    for(j=29; j>0; j--){
        if(  plansza[i][j]==53){
            plansza[i][j]=0;
            plansza[i][j-1]=0;
            plansza[i][j-2]=0;
            plansza[i+1][j]+=53;
            plansza[i+1][j-1]+=22;
            plansza[i+1][j-2]+=21;
        }
    }
}
}

}

for(i=0; i<20; i++){                          // ZABICIE NPC-1 (EFEKT WYBUCHU)
    for(j=0; j<30; j++){
        if(plansza[i][j]==24){
                plansza[i][j]=50;
                plansza[i-1][j+1]=50;
                plansza[i][j+1]=0;
                plansza[i][j+2]=12;
                plansza[i+1][j+1]=+7;
            score=score+10;
        }

        if(plansza[i][j]==25){
            plansza[i][j]=0;
            plansza[i][j-1]=50;
            plansza[i][j+1]=12;
            plansza[i+1][j]=+50;
            plansza[i-1][j]=7;
            score+=10;

        }
        if(plansza[i][j]==56){
            plansza[i][j]=12;
            plansza[i-1][j-1]=7;
            plansza[i][j-1]=0;
            plansza[i][j-2]=50;
            plansza[i+1][j-1]=+50;
            score+=10;
        }

        }
    }

for(i=0; i<30; i++){
    if(plansza[19][i]==2 && plansza[19][i+1]==50 && plansza[19][i+2]){
        plansza[19][i+1]=1;
    }
}

for(i=0; i<20; i++){                                  //SPRAWDZANIE CZY NPC MOZE STRZELAC
    for(j=0; j<30; j++){
        if(plansza[i][j]==21){

            if(plansza[i+3][j]!=21 && plansza[i+6][j]!=21 ){

        if(z%30==0){
                plansza[i+1][j+1]+=13;
}
}
}
}
}

for(i=19; i>0; i--){                //STRZELANIE NPC cd.
    for(j=29; j>0; j--){
        if( i>0 && plansza[i][j]==13){
            plansza[i+1][j]+=13;
            plansza[i][j]=0;
        }
    }
}


for(j=0; j<30; j++){
     if(plansza[20][j]==13){
        plansza[20][j]=0;
     }

    if(plansza[20][j]==21){
        plansza[20][j]=0;
        plansza[20][j+1]=0;
        plansza[20][j+2]=0;
        lifes--;
        j+=2;
    }
}

for(j=0; j<30; j++){           //KOLIZJA STATKU Z NPC
    if(plansza[19][j]==23 && plansza[19][j-2]==2){           //KOLIZJA Z PRAWEJ NA 1
        plansza[19][j]=2;
        plansza[19][j+1]=0;
        plansza[19][j+2]=0;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==22 && plansza[19][j+1]==24 && plansza[19][j+2]==53 ){        //KOLIZJA Z PRAWEJ NA 2
        plansza[19][j]=1;
        plansza[19][j+1]=2;
        plansza[19][j+2]=0;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==23 && plansza[19][j+1]==23 && plansza[19][j+2]==55){   //KOLIZJA CZOŁOWA
        plansza[19][j]=2;
        plansza[19][j+1]=1;
        plansza[19][j+2]=2;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==54 && plansza[19][j-1]==24){             //KOLIZJA Z LEWEJ NA 2
        plansza[19][j]=1;
        plansza[19][j-1]=2;
        plansza[19][j-2]=0;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==55 && plansza[19][j+1]==1){           //KOLIZJA Z LEWEJ NA 1
        plansza[19][j-1]=0;
        plansza[19][j-2]=0;
        plansza[19][j]=2;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==53 && plansza[19][j+1]==1 && plansza[19][j+2]==23){
        plansza[19][j]=2;
        plansza[19][j+2]=2;
        plansza[19][j-1]=0;
        plansza[19][j-2]=0;
        plansza[19][j+3]=0;
        plansza[19][j+4]=0;
        lifes-=2;
        score+=20;
    }
    if(plansza[19][j]==22 && plansza[19][j+1]==37 && plansza[19][j+2]==53){
        plansza[19][j]=1;
        plansza[19][j]=2;
        plansza[19][j+2]=0;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==21 && plansza[19][j+1]==37 && plansza[19][j+2]==54 ){
        plansza[19][j]=0;
        plansza[19][j+1]=2;
        plansza[19][j+2]=1;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==23 && plansza[19][j+1]==36 && plansza[19][j+2]==55){
        plansza[19][j]=2;
        plansza[19][j+1]=1;
        plansza[19][j+2]=2;
        lifes--;
        score+=10;
    }
    if(plansza[19][j]==21 && plansza[19][j+1]==50){
        plansza[19][j]=0;
        plansza[18][j+2]=0;
        plansza[19][j+1]=2;
        plansza[19][j+2]=1;
        plansza[19][j+3]=2;
        lifes--;
        score+=10;
    }
    /*if(plansza[19][j]==2 && plansza[19][j+1]==22){
        plansza[19][j+1]=1;
        plansza[19][j+2]=2;
        }*/

}

printf("\n Score: %d Zycia: %d", score, lifes);
for(i=0;i<1;i++){
        printf("\n");
    for(j=0; j<30; j++){
        printf("%c", ghost[i][j]);
    }
}
system("cls");
if(z%30==0){
    z=0;
}
z++;
}// KONIEC GLOWNEJ PETLI

int k=0;
if(score==150 && lifes<=0){
    goto otyty;
}
if(score==150){
    goto otyty;
}
if(lifes<=0){
    goto koko;
}


koko:
 k=0;
    system("cls");
   for( i=0; i<20; i++){
        printf("\n");
    for(j=0; j<30; j++){
        printf("%c", lost[i][j]);
    }
}

k=getchar();
switch(k){
    case 32: goto jedziemy;
    case 77: goto lary;
    case 109: goto lary;
    default: goto koko;
}


otyty:
k=0;
    system("cls");
for( i=0; i<20; i++){
        printf("\n");
    for(j=0; j<30; j++){
        printf("%c", won[i][j]);
    }
}

k=getchar();
switch(k){
    case 32: goto jedziemy;
    case 77: goto lary;
    case 109: goto lary;
    default: goto otyty;
}

}
