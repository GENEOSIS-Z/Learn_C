#include <stdio.h>

int main()
{
    int soc, math, sci;
    printf("Enter your marks in Social Studies\n");
    scanf("%d", &soc);
    printf("Enter your marks in Mathmatics\n");
    scanf("%d", &math);
    printf("Enter your marks in Science\n");
    scanf("%d", &sci);
    // int totalMarks = 300;
    // int passMarks = 33;
    // int importantMarks = 120;
    int obtainedMarks = soc + math + sci;
    // if ((soc >= passMarks && math >= passMarks && sci >= passMarks) && (obtainedMarks >= importantMarks) && (obtainedMarks <= totalMarks))
    // {
    //     printf("You are pass\n");
    // }
    if ((soc, math, sci >= 33) && (obtainedMarks >= 120) && (obtainedMarks <= 300))
    {
        printf("You are pass\n");
    }
    else
    {
        printf("You are fail\n");
    }
    return 0;
}