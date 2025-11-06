#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ch07_eg03_student_grades.h"

int main(void)
{
    srand(time(NULL));
    struct studentStruct classRoom[5];
    
    initStudents(classRoom);

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            double grade = (rand() % 11) * 0.5 + 1.0;
            addGradeByID(classRoom, classRoom[i].ID, grade);
        }
    }
    
    showClass(classRoom, 5);

    struct studentStruct bestStudent = findBest(classRoom, 5);
    printf("\nBest student ID: %d with average: %.2f\n", bestStudent.ID, bestStudent.moyenne);
    
    return 0;
}

void initStudents(struct studentStruct classRoom[])
{
    int IDs[5] = {29472, 23849, 23203, 23942, 23841};

    for (int i = 0; i < 5; i++)
    {
        classRoom[i].ID = IDs[i];
        for (int j = 0; j < 4; j++)
        {
            classRoom[i].notes[j] = -1.0;
        }
        classRoom[i].moyenne = -1.0;
    }
    
}

void addGradeByID(struct studentStruct myS[], int studentID, double grade)
{
    for (int i = 0; i < 5; i++)
    {
        if(myS[i].ID == studentID)
        {
            for (int j = 0; j < 4; j++)
            {
                if(myS[i].notes[j] < 0.0)
                {
                    myS[i].notes[j] = grade;
                    computeAverage(myS);
                    return;
                }
            }
        }
    }
    
}

void computeAverage(struct studentStruct myS[])
{
    for (int i = 0; i < 5; i++)
    {
        double sum = 0.0;
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if(myS[i].notes[j] > 0.0)
            {
                sum += myS[i].notes[j];
                count++;
            }
        }
        if(count > 0)
        {
            myS[i].moyenne = sum / count;
        }
        else
        {
            myS[i].moyenne = -1.0;
        }
    }
    
}

void showClass(const struct studentStruct tab[], int n)
{
    printf("ID\t\tGrades\t\tAverage\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", tab[i].ID);
        for (int j = 0; j < 4; j++)
        {
            if(tab[i].notes[j] >= 0.0)
            {
                printf("%.1f ", tab[i].notes[j]);
            }
            else
            {
                printf("- ");
            }
        }
        if(tab[i].moyenne >= 0.0)
        {
            printf("\t%.2f\n", tab[i].moyenne);
        }
        else
        {
            printf("\t-\n");
        }
    }
}

struct studentStruct findBest(const struct studentStruct tab[], int n)
{
    struct studentStruct bestStudent = tab[0];
    for (int i = 1; i < n; i++)
    {
        if(tab[i].moyenne > bestStudent.moyenne)
        {
            bestStudent = tab[i];
        }
    }
    return bestStudent;
}