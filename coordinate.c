#include <stdio.h>
int main() {
        int x=0, y=0;
        scanf("%d %d", &x, &y);

        if(x>0 && y>0){
                printf("1");
        }
        else if(x>0 && y<0){
                printf("4");
        }
        else if(x<0 && y>0){
                printf("2");
        }
	else{
                printf("3");
	}
        return 0;
}

