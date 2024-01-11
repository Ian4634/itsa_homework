#include <stdio.h>
#include<stdlib.h>
// 考試成績排名

struct student{
    int id;
    int math;
    int english;
};

typedef struct student Student;


int main(){
    int n;
    scanf("%d", &n);

    Student *students[n];

    for(int i=0;i<n;i++){
        students[i] = malloc(sizeof(Student));
        int id, math, english;
        scanf("%d %d %d", &id, &math, &english);
        students[i]->id = id;
        students[i]->math = math;
        students[i]->english = english;
    }

    // sort
    for(int i=0;i<n;i++){
        int max_index = i;
        for(int j=i;j<n;j++){
            if(students[max_index]->math < students[j]->math ||(students[max_index]->math == students[j]->math && students[max_index]->english < students[j]->english)){
                max_index = j;
            }
        }
        // swap;
        Student *temp = students[i];
        students[i] = students[max_index];
        students[max_index] = temp;
    }

    for(int i=0;i<n;i++){
        printf("%d %d %d\n", students[i]->id, students[i]->math, students[i]->english);
    }
    return 0;
}