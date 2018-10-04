#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int jin, num, d = 0;
    char a[80];
    char r[80];
    int i, j;

    printf("변환할 10진수를 입력하세요: ");
    scanf("%d", &num);

    printf("16을 입력하세요 : "); 
    scanf("%d", &jin);

    // 역순으로 저장
    d = num;
    for (i = 0; jin <= d; i++)
    {
        r[i] = d % jin;
        d /= jin;
    }
    r[i++] = d;
    r[i] = '\0';

    // 다시 역순
    for (i--, j=0; 0 <= i; i--, j++) {
        if (r[i] < 10) {
            a[j] = '0' + r[i];
        }
        else {
            a[j] = 'A' + r[i] - 10;
        }
    }
    a[j] = '\0';

    printf("10진수 %d을 %d진수로 변환하면 %s입니다.\n ", num, jin, a);//한턴 끝남 

    return 0;
} 
