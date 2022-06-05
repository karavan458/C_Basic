#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//3개의 정수 난수 
void Answer(int *arr){
	srand((int)time(NULL));
    arr[0] = rand() % 10;

	do{					
		arr[1] = rand() % 10;
	}while(arr[0] == arr[1]);
	
    do{					
		arr[2] = rand() % 10;
	}while((arr[0] == arr[2]) || (arr[1] == arr[2]));
	
}

int main(){
	
	int comArr[3];		
	int usrArr[3];		
	int result = 0;
    int ball = 0;
    int strike = 0;
    int count = 0;

	printf("Start Game! \n");
	Answer(comArr);

    do {
        ball = 0;
        strike = 0;

        //숫자 입력
        printf("3개의 숫자 선택 : ");
        scanf("%d %d %d", &usrArr[0], &usrArr[1], & usrArr[2]);
        
        //중복 배제
        if(usrArr[0] == usrArr[1] || usrArr[0] == usrArr[2] || usrArr[1] == usrArr[2]) {
            printf("중복되는 값이 존재 다시 입력");
            continue;
        }
        ++count;

        for(int i = 0; i < 3; i++){
		    for(int j = 0; j < 3; j++){
			    if(usrArr[i] == comArr[j]) {
				    i == j? strike++ : ball++;
				    break;
			    }
		    }
	    }
	    printf("%d번째 도전 결과 : %dstrike, %dball!!\n", count, strike, ball);
        printf("\n");


    } while(strike != 3);

	

	printf("Game End! \n");
	return 0;
}

