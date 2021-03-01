/* _ _ _ _ _ _ _ _
9 10 11 12 13 14 15 16
1 2 3 4 5 6 7 8
Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра */
#include <stdio.h>
#include <stdlib.h>
 
void printField(int **field, int row, int col);
int** moveFunc(int **field, int number, char *direction, int *numRow, int *numCol);
void getPosition(int **field, int num, int *numRow, int *numCol, int row, int col);
int validate(int **field, int *numRow, int *numCol, int row, int col, char *direction);
int isEnd(int **field, int row, int col);
 
int main(void){
    int i, j, row = 3, col = 8;
    int num, numRow, numCol;
    char direction[6];
    int **field = (int **)malloc(row * sizeof(int *)); 
    for (i=0; i<row; i++){ 
        field[i] = (int *)malloc(col * sizeof(int));
    }
 
    int num2 = 1;
    int num1 = 9;
    for (i = 0; i < row; i++){ 
        for (j = 0; j < col; j++){
            if(i == 2){
                field[i][j] = num2;
                num2 ++;
            }
            if(i == 1){
                field[i][j] = num1;
                num1 ++;
            }
            if(i == 0){
                field[i][j] = 0;
            }
        }
    }
 
    printField(field, row, col);
 
    while(isEnd(field, row, col)){
        printf("\nWich number do you want to move?\nNumber: ");
        scanf(" %d", &num);
        printf("In which direction do you want to move it?\n'u' for up | 'd' for down | 'l' for left | 'r' for right\nDirection: ");
        scanf(" %c", &direction);
        getPosition(field, num, &numRow, &numCol, row, col);
        moveFunc(field, num, direction, &numRow, &numCol);
        printField(field, row, col);
    }
    
    free(field);
    
    return 0;
}
 
/* Function to print the field */
void printField(int **field, int row, int col){
    int i, j;
    printf("~~~~ Your field looks like this now ~~~~");
    for (i = 0; i < row; i++){
        printf("\n");
        for(j = 0; j < col; j++){ 
            printf(" %-3d ", field[i][j]);
        }
    }
    printf("\n");
}
 
/* Funcion to actually do the movement */
int** moveFunc(int **field, int number, char *direction, int *numRow, int *numCol){
    if(validate(field, numRow, numCol, 3, 8, direction)){
        if(*direction == 'u'){
            field[*numRow][*numCol] = 0;
            field[*numRow-1][*numCol] = 0;
            field[*numRow-2][*numCol] = number;
        }
        else if (*direction == 'd'){
            field[*numRow][*numCol] = 0;
            field[*numRow+1][*numCol] = 0;
            field[*numRow+2][*numCol] = number;
        }
        else if (*direction == 'l'){
            field[*numRow][*numCol] = 0;
            field[*numRow][*numCol-1] = 0;
            field[*numRow][*numCol-2] = number;
        }
        else if (*direction == 'r'){
            field[*numRow][*numCol] = 0;
            field[*numRow][*numCol+1] = 0;
            field[*numRow][*numCol+2] = number;
        }
    }
    return field;
}
 
/* Function to het the position of the number we want to move */
void getPosition(int **field, int num, int *numRow, int *numCol, int row, int col){
    int i, j;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            if(field[i][j] == num){
                *numRow = i;
                *numCol = j;
            }
        }
    }
}
 
/* Function to validade if the move we want to do is actually possible */
int validate(int **field, int *numRow, int *numCol, int row, int col, char *direction){
    int newRow, newCol, midRow, midCol;
    if(*direction == 'u'){
        newRow = *numRow - 2;
        newCol = *numCol;
        midRow = *numRow - 1;
        midCol = *numCol;
    }
    else if (*direction == 'd'){
        newRow = *numRow + 2;
        newCol = *numCol;
        midRow = *numRow + 1;
        midCol = *numCol;
    }
    else if (*direction == 'l'){
        newRow = *numRow;
        newCol = *numCol - 2;
        midRow = *numRow;
        midCol = *numCol - 1;
    }
    else if (*direction == 'r'){
        newRow = *numRow;
        newCol = *numCol + 2;
        midRow = *numRow;
        midCol = *numCol + 1;
    }
 
    /* Contidion, not to let the player get the number one out of the game, bacause the idea is the only number left to be 1 */
    if (field[midRow][midCol] == 1){
        printf("\nINVALID MOVE!\nYou are trying to get 1 out of the game!\n\n");
        return 0;
    }
    
    if ((newRow >= 0 && newRow < 3) && (newCol >= 0 && newCol < 8) && (field[newRow][newCol] == 0)){
        return 1;
    }
    
    else{
        printf("\nINVALID MOVE!\n\n");
        return 0;
    }
}
 
/* Function to chech if the game is finished - on the fiel the only number left is number 1 */
int isEnd(int **field, int row, int col){
    int i, j;
    int counter = 0;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            if(field[i][j] > 1){
                counter++;
            }
        }
    }
 
    if(counter > 0){
        return 1;
    }
    else{
        printf("GAME OVER! CONGRATULATIONS!");
        return 0;
    }
}