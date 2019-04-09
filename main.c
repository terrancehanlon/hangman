#include <stdio.h>
#include <unistd.h>

//intro
void drawText(void){
    printf("|");
    for(int i = 0; i < 5; i++){
        printf(" ");
        if(i == 4){
            printf("H A N G  M A N\n");
        }
    }
}

void drawBaseIntro(void){
    for(int i = 0; i < 8; i++){
        printf("|\n");
        if(i == 4){
            drawText();
        }
    }

    for(int i = 0; i < 15; i++){
        printf("-");
    }
}

void drawNooseSetUp(void){
    printf("\n|");
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("|\n");
        }else{
            printf(" ");
        }
    }
    printf("|");
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("|\n");
        }else{
            printf(" ");
        }
    }
    printf("|");
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("O\n");
        }else{
            printf(" ");
        }
    }

    drawBaseIntro();
}

void draw(void){
    printf("|");
    for(int i = 0; i < 20; i++){
        printf("-");
        if(i == 19){
            drawNooseSetUp();
        }
    }
}
void drawNoose(void){
    printf("\n|");
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("|\n");
        }else{
            printf(" ");
        }
    }
    printf("|");
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("|\n");
        }else{
            printf(" ");
        }
    }
    printf("|");
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("O\n");
        }else{
            printf(" ");
        }
    }
}

void drawOutLine(void){
    for(int i = 0; i < 20; i++){
        printf("-");
        if(i == 19){
            drawNoose();
            printf("\n");
        }
    }

    for(int i = 0; i < 8; i++){
        printf("|\n ");
    }
}

void drawHead(void){
    for(int i = 0; i < 20; i++){
        if(i == 19){
            printf("O\n");
        }
        else{
            printf(" ");
        }
    }
}


void zero(void){
    for(int i = 0; i < 15; i++){
        printf("-");
        if(i == 14){
            for(int j = 0; j < 15; j++){
                if(j == 14)
                    printf("|");
            }
            printf("\n|");
            for(int k = 0; k < 15; k++){
                if(k == 14)
                    printf("|");
                else
                    printf(" ");
            }
            printf("\n|");
//            for(int l = 0; l < 15; l++){
//                if(l == 14)
//                    printf("O");
//                else
//                    printf(" ");
//            }
        }

    }
    for(int i = 0; i < 7; i++)
        printf("\n|");
}

void one(void){
    for(int i = 0; i < 15; i++){
        printf("-");
        if(i == 14){
            for(int j = 0; j < 15; j++){
                if(j == 14)
                    printf("|");
            }
            printf("\n|");
            for(int k = 0; k < 15; k++){
                if(k == 14)
                    printf("|");
                else
                    printf(" ");
            }
            printf("\n|");
            for(int l = 0; l < 15; l++){
                if(l == 14)
                    printf("O");
                else
                    printf(" ");
            }
        }

    }
    for(int i = 0; i < 7; i++)
        printf("\n|");
}

void two(void){
    for(int i = 0; i < 15; i++){
        printf("-");
        if(i == 14){
            for(int j = 0; j < 15; j++){
                if(j == 14)
                    printf("|");
            }
            printf("\n|");
            for(int k = 0; k < 15; k++){
                if(k == 14)
                    printf("|");
                else
                    printf(" ");
            }
            printf("\n|");
            for(int l = 0; l < 15; l++){
                if(l == 14)
                    printf("O");
                else
                    printf(" ");
            }

            printf("\n|");
            for(int j = 0; j < 15; j++){
                if(j == 14)
                    printf("&");
                else
                    printf(" ");
            }
        }

    }
    for(int i = 0; i < 7; i++)
        printf("\n|");
}


void drawSetUp(){
    drawOutLine();
}

void drawHangMan(int numberOfMistakes){
    /*
        # of mistakes:
        1) draw head
        2) draw body
        3) draw left arm
        4) draw right arm
        5) draw left leg
        6) draw right left
     */

    switch(numberOfMistakes){
        case 0:
            ;
        case 1:
            two();
    }
}


char *setUp(void){
    char name[20];
    printf("\n Who are you? : ");
    scanf("%s", name);
    sleep(2.5);

    printf("Hello %s", name, "\n");
    return 0;
}


int main() {
    printf("Hello, World and Welcome to Hangman!!\n");
    //draw();
    //setUp();
//    printf("-===========================================================-");
    drawHangMan(1);
    return 0;
}