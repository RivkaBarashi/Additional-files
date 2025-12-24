/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct book{
    char title [100];
     char author[50];
     int page;
}Book;

Book * createBooksArray(int n )
{
    Book * books =(Book*)malloc(n*sizeof(Book));
    return books;
}

//  (n int ,books* Book(fillBooks v
void fiilBooks(int n , Book *books)
{
    int page;
    char title[100];
    for(int i =0; i< n ; i++)
    {
        printf("\nEnter a title:");
        scanf("%d", &page);
        printf("\nEnter a Page:");
        scanf("%s", title);
        books[i].page=page;
        strcpy(books[i].title,title);
        
    }
}


void printbook(int n , Book *books)
{

    for(int i =0; i< n ; i++)
    {
                printf("\n___________________________________");

        printf("\npage: %d", books[i].page);
        printf("\nname: %s", books[i].title);
       
    }
}



int main()
{
    int  n =2;
      printf("Hello World");
Book* b=createBooksArray(n);
fiilBooks(n, b);
printbook(n, b);
    return 0;
}