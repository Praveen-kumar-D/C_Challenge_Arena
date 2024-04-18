#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[20];
	int grade;
};
int comparator(const void* p, const void* q)
{
    return (strcmp(((struct Student*)p)->name,
                  ((struct Student*)q)->name));
}

int main()
{
  int i,n,check_grade;
          printf("enter the number of students:" );
          scanf("%d",&n );
          struct Student stud2[20];
       for (i = 0; i < n; i++){
            printf("Enter your name and grade(ex:thor 2)\n");
	        scanf ("%s",&stud2[i].name);
	        scanf ("%d", &  stud2[i].grade);
       }

          printf("\nWhich grade do you want to check\n" );
          scanf("%d", &check_grade );
          printf("\nThe students in that grade are :\n");
       for(i=0;i<n;i++){
            if (stud2[i].grade==check_grade){
                printf("%s\n",stud2[i].name );
       }
}
          printf("\nStudent Records sorted by Grade and Name:\n");
       for(int j=1;j<13;j++){
            for (i = 0; i < n; i++){
                qsort(stud2, n, sizeof(struct Student), comparator);
                if(stud2[i].grade==j){
                    printf("%s\n", stud2[i].name);
       }
   }
}
          printf("\n");
  return 0;

}
