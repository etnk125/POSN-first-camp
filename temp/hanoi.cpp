#include <stdio.h>
int c=1;
void tower(int n, char fr, char tr, char ar){
    if (n == 1){
        printf("\n Move disk 1 from %c to %c %d", fr, tr,c);c++;
        return;
    }
    tower(n - 1, fr, ar, tr);
    printf("\n Move disk %d from %c to %c %d", n, fr, tr,c);c++;
    tower(n - 1, ar, tr, fr);
}
int main(){
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);

    printf("The sequence of moves involved in the Tower of Hanoi are :\n");

    tower(n, 'A', 'C', 'B'); 
return 0;
}

