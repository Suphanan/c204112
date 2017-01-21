#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN_n 40

void update(FILE *fp, int pos, char name[]);
void delete(FILE *fp, int pos);
void print(FILE *fp, int pos, char fac_name[]);
void list(FILE *fp, int pos);

int main()
{
    FILE *fp;
    fp = fopen("faculty.txt", "w+");
    int no_op;
    scanf("%d", &no_op);
    int i = 0;
    char commamd[2];
    char fac_id[3];
    int fac;
    char fac_name[LEN_n + 1];


    for (i = 0; i < no_op; i++) {
        scanf("%s", commamd);
        switch (commamd[0]) {
        case 'U':
            //printf("[UPDATE]\n ");
            scanf("%s", fac_id);
            fac = atoi(fac_id);
            //printf("faculty id= %d\n", fac);
            getchar();
            fgets(fac_name, LEN_n, stdin);
            int len = strlen(fac_name);
            if (fac_name[len - 1] == '\n') {
                fac_name[len - 1] = '\0';
            }
            //printf("faculty name=|%s|\n", fac_name);
            update(fp, pos, name);

            break;
        case 'P': print(fp, pos);
            break;
        case 'D': delete(fp, pos);
            break;
        case 'L': list(fp, pos);
            break;

        }
    }

    return 0;

}

void update(FILE *fp, int pos, char name[])
{
    int Max_fac;
    int i = 1;
    FILE *fp;
    fp = fopen("faculty.txt", "w+");
    if (pos < Max_fac) {
        for (i < Max_fac) {
            printf("%-40s", "");
        }
    }
    Max_fac = pos;
    fseek( fp, pos, SEEK_SET );
    fputs("%s", name, fp);
    fclose(fp);

    return (0);
}

void Print(FILE *fp, int pos, char fac_name[])
{
    FILE *fp;
    fp = fopen("faculty.txt", "r");
    fseek( fp, pos, SEEK_SET );
    for (i = 0; i < pos; i++) {
        if (i == pos) {
            fprintf(fac_name[pos]);
        } else {
            fprintf("not found\n");
        }
    }
}


void Delete(FILE *fp, int pos)
{
    //how to del
    int i;
    for (i = 0; i < pos, i++) {
        if(i == pos){
         //-------------ทำไรซักอย่าง--
        }
        else{
            fprintf("not found\n");
        }
    }
}

void List(){
    FILE *fp;
    fp = fopen("faculty.txt", "r");
    printf("listing all faculty names");
    while( fp != EOF){
        fscanf();
        
    }





