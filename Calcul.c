#include <stdio.h>
#include <string.h>
#include <math.h>
struct num
{
    int a;
    float b;
    char c[5];
};
float add(struct num a1[], int s);
float subtact(float, float);
float sub(float, float);
float multi(struct num a4[], int);
float divi(float, float);
float divi2(float, float);
// float pow(float ,float);5
int main()
    do
    {
        printf("\n");
        int c;
        char opnion[10];
        int opt;
        printf("==========================================\n");
        printf("1. Adding numbers. \n");
        printf("2. subtact the numbers. \n");
        printf("3. Multiply the numbers. \n");
        printf("4. Divide numbers \n");
        printf("5. The power value \n");
        printf("==========================================\n");
        printf("Enter your option :");
        scanf("%d", &opt);
        printf("==========================================\n");
        if (opt == 1)
        {
            int i;
            printf("How many number you want to add :");
            scanf("%d", &i);
            struct num a1[i];
            for (int b = 0; b < i; b++)
            {
                printf("Enter your value :");
                scanf("%f", &a1[b].b);
            }
            add(a1, i);
            //
            // printf("There is your answer :%.2f", add(a1,i));
        }
        else if (opt == 2)
        {
            struct num a2, a3;
            printf("Enter your first value :");
            scanf("%f", &a2.b);
            printf("Enter your second value :");
            scanf("%f", &a3.b);
            getchar();
            printf("You want firs - second (yes or no) :");
            // gets(opnion);
            fgets(opnion, sizeof(opnion), stdin);
            if (strcmp(opnion, "yes") == 1)
            {
                subtact(a2.b, a3.b);
            }
            else if (strcmp(opnion, "no") == 1)
            {
                sub(a3.b, a2.b);
                // printf("Second - first the answer is :%.2f", sub(a3.b,a2.b));
                // printf("You want second - first (yes or no) :");
                // gets(opnion);
                getchar();
            }
            else if (strcmp(opnion, "yes") == 1)
            {
            }
        }
        // }else if(opt == 3){
        //     int c;
        //     struct num a4[c];
        //     printf("How much number you wnat to multiply");
        //     scanf("%d",&c);
        //     for(int h=0 ; h<c ; h++){
        //         printf("Enter your number :");
        //         scanf("%f", &a4[h].b);
        //     }
        //     // mul( a4 , c );
        //     // printf("There is your answer :%.2f",multi(a4,c));
        //     multi(a4,c);
        // }
        else if (opt == 3)
        {
            // struct num a4[c];
            printf("How much number you wnat to multiply :");
            scanf("%d", &c);
            float a4[c];
            for (int h = 0; h < c; h++)
            {
                printf("Enter your number :");
                scanf("%f", &a4[h]);
            }
            float s = 1;
            // mul( a4 , c );
            // printf("There is your answer :%.2f",multi(a4,c));
            for (int d = 0; d < c; d++)
            {
                s = s * a4[d];
            }
            printf("There is your answer :%.2f", s);
        }
        else if (opt == 4)
        {
            //struct num a6, a7;
            float ab;
            float bc;
            char ghoj[5],yes[5] = "yes";
            char no[3]="no";
            printf("Enter the first value :");
            scanf("%f", &ab);
            printf("Enter the second value :");
            scanf("%f", &bc);
            getchar();
            if(ab==0 || bc==0){
                printf("Invalid division");
                main();
            }
            else{
                printf("You want first divide by decond(yes/no) :");
                gets(ghoj);
                if(strcmp(ghoj,yes)==0){
                    divi(ab, bc);
                }
                else if(strcmp(ghoj,no)==0){
                    divi2(ab,bc);
                }
            }
        }
        else if (opt == 5)
        {
            float b;
            float p;
            printf("Enter the base value :");
            scanf("%f", &b);
            printf("Enter the power of %.2f :", b);
            scanf("%f", &p);
            printf("There is your answer :%.2f", pow(b, p));
        }
    } while (1);
    return 0;
}
float add(struct num a1[], int s)
{
    float c = 0;
    for (int i = 0; i < s; i++)
    {
        c = c + a1[i].b;
    }
    printf("There is your answer :%.2f", c);
    return c;
}
float subtact(float b, float c)
{
    printf("There is your answer :%.2f", b - c);
    return b - c;
}
float sub(float b, float a)
{
    printf("There is your answer (second - first) :%.2f", b - a);
    return b - a;
}
float multi(struct num a4[], int c)
{
    float b = 1;
    for (int g = 0; g < c; g++)
    {
        b = b * a4[g].b;
    }
    printf("There is your answer :%.2f", b);
    return b;
}
float divi(float b, float v)
{
    printf("There is your  answer (first/second) :%.2f", b / v);
}
float divi2(float a,float b){
    printf("There is your answer (second/first) :%.2f",b/a);
}
