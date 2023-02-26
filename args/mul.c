#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int i;
int muls;
int mul = atoi(argv[1]);
int mul2 = atoi(argv[2]);
for (i = mul; i <= mul2; i++){
if (argc != 3)
printf("Error\n");
else
muls = mul * mul2;
printf("%d\n", muls);
return 1;
}
}
