/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include<stdio.h>
#include <stdlib.h>
void cmore(const char *filename) {
  
    FILE *fp = fopen(filename, "r");//reads file
    //code snippet used from the instructions in the HW 
    //checks to makesure that file pointer is null and if so gives an error 
    if (fp == NULL) {
        fprintf(stderr, "cannot open file %s\n", filename);
        exit(1);
    }
  // the char and while loop are taken straight from the fscat project 
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        //putchar is a built in command in the standard input library all it does is that it just writes ch into standard output into terminal
        //in other words, no putchar = no files being shown on the terminal
        putchar(ch);
        //when ch encounters a new line throughout the file add line count by incrementing page
        if(ch == '\n'){
            printf("----------PRESS KEY TO CONTINUE----------\n");
            // reads the inputed char aka all the lines the in text to the terminal 
            getchar();
        }
    }
    fclose(fp);
    printf("----------PROGRAM COMPLETE----------\n");
}