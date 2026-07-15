#include <stdio.h>

int main(){
    int T,L,H;
    float dtb;
    printf("hay nhap vao diem t l h: ");
    scanf("%d%d%d",&T,&L,&H);
    dtb = 1.0 * (T*3 + L*2 + H)/6;
    printf("diem trung binh la %.2f\n",dtb);
    return 0;
}