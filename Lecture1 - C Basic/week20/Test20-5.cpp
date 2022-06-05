#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Random(void) {
	srand((int)time(NULL));
}

int Computer() {
    int rsp = (rand() % 3) + 1;
	if(rsp == 1)
		printf("컴퓨터는 바위 선택, ");
	else if(rsp == 2)
		printf("컴퓨터는 가위 선택, ");
	else
		printf("컴퓨터는 보 선택, ");

	return rsp;
}

int main() {
    int win = 0;
    int lose = 0;
    int draw = 0;
    int me, com;
    int result;

    do {
        printf("바위는 1, 가위는 2, 보는 3 \n");
        printf("당신의 선택 : ");
        scanf("%d", &me);

        if(me == 1) {
            printf("당신의 선택은 바위 입니다.\n");
        }
        else if(me == 2) {
            printf("당신의 선택은 가위 입니다.\n");
        }
        else if(me == 3) {
            printf("당신의 선택은 보자기 입니다. \n");
        }
        else{
            printf("잘못 입력했습니다. 다시 입력하세요");
            continue;
        }

        com = Computer();
        result = me - com;

        if(result == 0) {
            printf("무승부 입니다.\n");
            draw ++;
        }
        else if (result == 2 || result == -1) {
            printf("당신의 승리입니다.\n");
            win++;
        }
        else if(result == 1 || result == -2) {
            printf("컴퓨터의 승리입니다.\n");
            lose++;
        }
        printf("총 전적 %d승 %d무 입니다.\n", win, draw);
        printf("\n");
    }while (lose == 0 );
    
    return 0;

}