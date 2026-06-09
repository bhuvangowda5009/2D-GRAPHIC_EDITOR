#include<stdio.h>
#define row 30
#define col 80
char pict[row][col];
void clear_garbage_val();
void display_the_pic();
void diagonal_line();
void rectangle();
void square();
void circle();

int main(){
    int choice;
    printf("\n2D_GRAPHIC_EDITOR\n");
    printf("1.diagonal_Line\n");
    printf("2.rectangle\n");
    printf("3.suare\n");
    printf("4.circle\n");
    printf("Enter your choice :\n");
    scanf("%d",&choice);

    clear_garbage_val();
   switch(choice)
   {
    case 1:
    diagonal_line();
    break;
    case 2:
    rectangle();
    break;
    case 3:
    square();
    break;
    case 4:
    circle();
    break;
   }
    display_the_pic();
    return 0;
}
void clear_garbage_val(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            pict[i][j]='-';
        }
    }
}
void display_the_pic(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%c",pict[i][j]);
        }
        printf("\n");
    }
}
void diagonal_line(){
    for(int i=0;i<12;i++){
        pict[i][i]='*';
    }
}
void rectangle(){
    for(int i=13;i<=30;i++){
        pict[13][i]='*';
    }
    for(int i=13;i<=30;i++){
        pict[17][i]='*';
    }
    for(int i=13;i<=17;i++){
        pict[i][13]='*';
    }
    for(int i=13;i<=17;i++){
        pict[i][30]='*';
    }

}
void square(){
    for(int i=15;i<=27;i++){
        pict[2][i]='*';
    }
    for(int i=15;i<=27;i++){
        pict[7][i]='*';
    }
    
    for(int i=2;i<=7;i++){
        pict[i][15]='*';
    }
    
    for(int i=2;i<=7;i++){
        pict[i][27]='*';
    }
}
void circle(){
    for(int i=42;i<=44;i++){
        pict[20][i]='*';
    }
    for(int i=42;i<=44;i++){
        pict[24][i]='*';
    }
    pict[21][41]='*';
    pict[21][45]='*';
    pict[22][40]='*';
    pict[22][46]='*';
    pict[23][41]='*';
    pict[23][45]='*';
}