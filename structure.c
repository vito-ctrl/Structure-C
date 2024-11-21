#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct adress{
    char rue[50];
    char ville[20];
    int code;
};

struct persone{
    int age;
    char name[30];
    struct adress add;
};
//function of displaying info
void ktb(struct persone som){

        printf("\nname : %s\n",  som.name);
        printf("age : %d\n", som.age);
        printf("rue : %s\n", som.add.rue);
        printf("ville : %s\n", som.add.ville);
        printf("code : %d\n", som.add.code);
}

//function for deliting persson

void delete(struct persone som[] , int n, const char name[]){
    int i , j;
    int found;
    for (i = 0; i < n; i++){
        if(strcmp(som[i].name, name) == 0){
            found = 1;
            for(j = 0)
        }
    }
}

void update(struct persone *som){
    printf("\nupdate name of %s !\n", som->name);
    printf("enter new name : ");
    scanf("%s", som->name);
    printf("enter new age : ");
    scanf("%d", &som->age);
    printf("enter new rue : ");
    scanf("%s", som->add.rue);
    printf("enter new ville : ");
    scanf("%s", som->add.ville);
    printf("enter new code : ");
    scanf("%d", &som->add.code);
}
int main(){
    int n ,i ,index, choise;

    printf("enter how meny persson you want : ");
    scanf("%d", &n);

    struct persone som[n];

    // input of infos
    for (int i = 0; i < n; i++){
        printf("\nenter info about persson%d :\n", i + 1);
        printf("name : ");
        scanf("%s", som[i].name);
        printf("age : ");
        scanf("%d", &som[i].age);
        printf("rue : ");
        scanf("%s", som[i].add.rue);
        printf("ville : ");
        scanf("%s", som[i].add.ville);
        printf("code : ");
        scanf("%d", &som[i].add.code);
    }
    // display of infos
    for (i = 0; i < n; i++){
        printf("\nthis is persones%d\n", i + 1);
        ktb(som[i]);
    }
    printf("\nif you want to update an info enter (1 for yes) or (0 for no) : ");
    scanf("%d", &choise);
    while (choise == 1){
        printf("\nenter the number of the person you want to updat (from 1 to %d) : ", n);
        scanf("%d", &index);
        if(index >= 1 && index <= n){
            update(&som[index - 1]);
            printf("\ninfo updated !\n");
            ktb(som[index - 1]);
        }else{
            printf("\nnumber invalide !!!!!!\n");
        }
        printf("\nyou want to update an info enter (1 for yes) or (0 for no) : ");
        scanf("%d", &choise);
    }
}