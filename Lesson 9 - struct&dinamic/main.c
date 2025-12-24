/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

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
    Person Person1;
    
    
    return 0;
}