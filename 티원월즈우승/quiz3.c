// quiz3.c
#include <stdio.h>

int main() {
    short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
    short max = data[0];

    // �迭�� ��ȸ�ϸ� ���� ū �� ã��
    for (int i = 1; i < 9; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    printf("Q3: �迭���� ���� ū ���� %d�Դϴ�.\n", max);

    return 0;
}

