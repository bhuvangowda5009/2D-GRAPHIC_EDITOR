#include<stdio.h>
#define row 30
#define col 80
char pict[row][col];
void clear_garbage_val();
void display_the_pic();
void diagonal_line();
void rectangle();
void square();

int main(){
    clear_garbage_val();
    diagonal_line();
    rectangle();
   square();
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
