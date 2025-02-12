#include <stdio.h>

int main() {

    int  a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if(a==1){
        printf("Player chooses the Left path.\n");
        if(b==1){
            printf("Poor choice, Game Over!\n");
            return 0;
        }
        else if(b==2 && c==1){
            printf("Player found a bridge.\n");
            printf("Player crosses the bridge safely.\n");
            if(d==1){
                printf("All that glitters is not gold, Game Over!");
            }
            else if(d==2){
                printf("All your efforts were for nothing, Game Over!");
            }
            else if(d==3){
                printf("Congratulations!! You won the treasure.");
            }
        }
        else if(b==2 && c==2){
            printf("Player found a bridge.\n");
            printf("Poor luck, Game Over!\n");
            return 0;
        }
    }
    else if(a==2){
        printf("Player chooses the Middle path.\n");
        if(b==582){
            printf("Player solved the puzzle.\n");
            if(c==1){
                printf("All that glitters is not gold, Game Over!");
            }
            else if(c==2){
                printf("All your efforts were for nothing, Game Over!");
            }
            else if(c==3){
                printf("Congratulations!! You won the treasure.");
            }
        }
        else{
            printf("Foolish player, Game Over!");
            return 0;
        }
    }
    else if(a==3){
        printf("Player chooses the Right path.\n");
        if(b==30){
            printf("Player solved the puzzle.\n");
            if(c==1){
                printf("All that glitters is not gold, Game Over!");
            }
            else if(c==2){
                printf("All your efforts were for nothing, Game Over!");
            }
            else if(c==3){
                printf("Congratulations!! You won the treasure.");
            }
        }
        else{
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }
    return 0;
}