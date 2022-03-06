# include <stdio.h>

const int NOU = 1;
const int CRO = 2;
const int BOR = 3;
const int EMP = 0;
const int Con25[9] = {6,7,8,11,12,13,16,17,18};

void InitBoard(int *board){
    for (int i = 0; i < 25; i++){
        board[i] = BOR;
    }
    for (int i = 0; i < 9; i++){
        board[Con25[i]] = EMP;
    }
}
void PrintBoard(int *board){
    printf("\n Board \n");
    for (int i = 0; i < 25; i++){
        if (i != 0 && i%5 == 0){
            printf("\n\n");
        }
        printf("%4d", board[i]);
    }
    printf("\n");
}
int main(){
    int board[25];
    InitBoard(board);
    PrintBoard(board);
}