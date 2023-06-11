#include <stdio.h>
 
int main() {
    int arr[100][100];
    int size, save_size;
    int x = 0, y = -1, turn = 1;
    int num=1;
 
    printf("배열 크기 입력 (최대 100) = "); 
    scanf("%d", &size);
    save_size = size;
    
    while(save_size != 0) {
        for(int i = 1; i <= save_size; i++){
            y += turn;
            arr[x][y] = num;
            num++;
        }
 
        save_size--;
 
        for(int i = 1; i <= save_size; i++){
            x += turn;
            arr[x][y]=num;
            num++;
        }
        turn *= -1;
    }
 
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
