// quiz2.c
#include <stdio.h>

int main() {
    short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
    int sum = 0;

    for (int i = 0; i < 9; i += 2) {
        sum += data[i];
    }

    printf("Q2: ¦�� ��° ����� ���� %d�Դϴ�.\n", sum);

    return 0;
}


