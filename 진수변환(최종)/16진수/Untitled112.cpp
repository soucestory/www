#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int jin, num, d = 0;
    char a[80];
    char r[80];
    int i, j;

    printf("��ȯ�� 10������ �Է��ϼ���: ");
    scanf("%d", &num);

    printf("16�� �Է��ϼ��� : "); 
    scanf("%d", &jin);

    // �������� ����
    d = num;
    for (i = 0; jin <= d; i++)
    {
        r[i] = d % jin;
        d /= jin;
    }
    r[i++] = d;
    r[i] = '\0';

    // �ٽ� ����
    for (i--, j=0; 0 <= i; i--, j++) {
        if (r[i] < 10) {
            a[j] = '0' + r[i];
        }
        else {
            a[j] = 'A' + r[i] - 10;
        }
    }
    a[j] = '\0';

    printf("10���� %d�� %d������ ��ȯ�ϸ� %s�Դϴ�.\n ", num, jin, a);//���� ���� 

    return 0;
} 
