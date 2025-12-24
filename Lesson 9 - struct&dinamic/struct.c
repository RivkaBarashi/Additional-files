/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

 typedef struct point{
    int x;
    int y ; 
}Point;

typedef struct person{
    int id;
    int age ;
    // char[] name;
}Person;



int main()
{
      printf("Hello World");
    //שימוש במהנה הכנסת ערכים ידנית , הקצאה באמצעות struct 
    struct point p1;
    p1.x=3;
    p1.y =8;
    
    printf("\n%d",p1.x);
    printf("\n%d",p1.y);
    
    //שימוש ב typedef 
    Point p2;
    p2.x=3;
    p2.y =8;
        
    printf("\n%d",p2.x);
    printf("\n%d",p2.y);
    
    //הכנסת ערכים מידית כמו בנאי מלא
    Point p3={1,2};
    printf("\n%d",p3.x);
    printf("\n%d",p3.y);    

//אם התקבל ערך אחד הוא יכנס לראשון - לשני בהתאמה 
    Point p4={1};
    printf("\n%d",p4.x);
    printf("\n%d",p4.y);      


    
    
    //מערך מבנים 
    Person persons[5];
    Person person1={1234, 18};
    Person person2={1235, 2};
    Person person3={1236, 34};
    Person person4={1237, 67};
    
    persons[0]=person1;
    persons[1]=person1;
    persons[2]=person1;
    persons[3]=person1;
    persons[4]=person1;
    
    
    persons[4].id=98989;
    
    
    for(int i =0; i< 5; i++)
    {
        printf("\nid= %d", persons[i].id);
    }
    
    
    //הקצאת מערך מסוג מבנה בצורה דיאנמית 
    int n =10;
    Person* class;
    class=(Person*)malloc(n*sizeof(Person));
    for(int i =0; i< n; i++)
    {
        printf("\nid= %d", class[i].id);
    }
    
    class[0]=person1;
    class[1]=person1;
    class[2]=person1;
    class[3]=person1;
    class[4]=person1;
    
    
    for(int i =0; i< n; i++)
    {
        printf("\nid= %d", class[i].id);
    }
    
    
    
    return 0;
}