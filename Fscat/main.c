/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on February 11, 2024, 10:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

void program(){
    //variables
    char temp;
    
    //opens the file in question
    FILE *open=fopen("example.txt","r");
    
    //checks to see if the file is there if not will repot that there is no file there
    if(open==NULL){
        fprintf(stderr,"ERROR FILE NOT FOUND\n");
        exit(1);
    }
    
    //reads each character in the file and prints it
    while((temp=fgetc(open))!=EOF){
        putchar(temp);
    }
    
    //closes the file when they are done with the code
    fclose(open);
}
/*
 * 
 */
int main(int argc, char** argv) {
    if(argc==1){
        fprintf(stderr,"ARGUEMENT NOT FOUND");
        exit(1);
    }
    program();
    return (EXIT_SUCCESS);
}

