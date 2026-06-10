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
void straightline();

int main(){
    int choice;
    printf("\n2D_GRAPHIC_EDITOR\n");
    printf("1.diagonal_Line\n");
    printf("2.rectangle\n");
    printf("3.suare\n");
    printf("4.circle\n");
    printf("5.straight line\n");
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
    case 5:
    straightline();
    break;
    default:
    printf("Invalid choice.\n");
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
    int r1,c1,len;
    printf("enter the row to start:\n");
    scanf("%d",&r1);
    printf("enter the clo to start:\n");
    scanf("%d",&c1);
    printf("enter the length  of the digonal line :\n");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        pict[r1+i][c1+i]='*';
    }
}
void rectangle(){
  int r1,c1;
  int len,wid;
  printf("enter the row to start:\n");
  scanf("%d",&r1);
  printf("enter the col tp start:\n");
  scanf("%d",&c1);
  printf("Ente the length od the rect:\n");
  scanf("%d",&len);
  printf("ENter the wid of the rect:\n");
  scanf("%d",&wid);
  for(int i=c1;i<c1+len;i++){
    pict[r1][i]='*';
    pict[r1+wid-1][i]='*';

  }
  for(int i=r1;i<r1+wid;i++){
   pict[i][c1]='*';
   pict[i][c1+len-1]='*';
  }

}
void square(){
  int r1,c1;
  int len;
  printf("Enter the row no to start:\n");
  scanf("%d",&r1);
  printf("enter the col number to start:\n");
   scanf("%d",&c1);
  printf("Enter the length of side:\n");
  scanf("%d",&len);
  for(int i=c1;i<c1+len;i++){
    pict[r1][i]='*';
  }
  for(int i=c1;i<c1+len;i++){
    pict[r1+len-1][i]='*';
  }
  for(int i=r1;i<r1+len;i++){
    pict[i][c1]='*';
  }
  for(int i=r1;i<r1+len;i++){
    pict[i][c1+len-1]='*';
  }

}
void circle(){
    int r1,c1;
    printf("enter the row and col to start:\n");
    scanf("%d %d",&r1,&c1);
    pict[r1-2][c1-1]='*';
    pict[r1-2][c1]='*';
    pict[r1-2][c1+1]='*';
    pict[r1-1][c1-2]='*';
    pict[r1-1][c1+2]='*';
    pict[r1][c1-3]='*';
    pict[r1][c1+3]='*';
    pict[r1+1][c1-2]='*';
    pict[r1+1][c1+2]='*';
    pict[r1+2][c1-1]='*';
    pict[r1+2][c1]='*';
    pict[r1+2][c1+1]= '*';

}
void straightline()
{
    int r1, c1, len;
    printf("Enter the row to start:\n");
    scanf("%d",&r1);
    printf("Enter the col to start:\n");
    scanf("%d",&c1); 
    printf("Enter the  length of line: ");
    scanf("%d", &len);

    for(int i = c1; i < c1 + len; i++)
    {
        pict[r1][i] = '*';
    }
}