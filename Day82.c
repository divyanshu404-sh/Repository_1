//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 
//'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum lights {RED=1,YELLOW,GREEN};

int main(){

    int cl;
    printf("Enter option\n1.RED\n2.YELLOW\n3.GREEN\n");
    scanf("%d",&cl);

    switch (cl) {
        case RED: printf("STOP"); break;
        case YELLOW: printf("WAIT"); break;
        case GREEN: printf("GO"); break;
        default: printf("invalid");
    }

    return 0;
}