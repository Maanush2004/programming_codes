Input
Mumbai Chennai 500
Chennai Vijayawada 100
Vijayawada Pune 400
Vijayawada Chennai

Output
100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bus {
  char source[20];
  char destination[20];
  int time_req;
};

int main() {
    struct bus *p;
    p = (struct bus*)malloc(sizeof(struct bus)*6);
    for (int i=0;i<6;i+=2) {
        scanf("%s",(p+i)->source);
        scanf("%s",(p+i)->destination);
        scanf("%d",&(p+i)->time_req);
        strcpy((p+i+1)->source,(p+i)->destination);
        strcpy((p+i+1)->destination,(p+i)->source);
        (p+i+1)->time_req = (p+i)->time_req;
    }
    char source[20];
    char destination[20];
    scanf("%s", source);
    scanf("%s", destination);
    for (int i=0; i < 6; i++) {
        if (strcmp(source,(p+i)->source)==0 && strcmp(destination,(p+i)->destination)==0) {
            printf("%d", (p+i)->time_req);
            break;
        }
    }
}