#include <stdio.h>

int main(void)
{
    float f = 1023645164;

    // 배열
    //=========================================
    //
    int arr1x_1[3] = {1, 3, 5};
    int arr1x_2[3] = {1, 3};
    double arr1x_3[3] = { 1.1,2.2,3.3 };
    printf("%d \n", arr1x_2[2]);

    // 2차원 배열
    short arr2x_1[2][3] = { {1,1,1 },
                            {2, 2, 2} };
    short arr2x_2[2][3] = { 1,1,1,1,1,1 };
}