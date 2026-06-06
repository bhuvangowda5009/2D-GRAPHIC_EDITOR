#include<stdio.h>
#define row 30
#define col 80
char pict[row][col];
void clear_garbage_val();
void display_the_pic();
void diagonal_line();
void rectangle();

int main(){
    clear_garbage_val();
    diagonal_line();
    rectangl