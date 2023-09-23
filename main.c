/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on September 18, 2023, 10:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "fsmore.h"

int main(int argc, char** argv) {
    int i;
    
    for (i = 0; i < argc; ++i) {
        
        cmore(argv[i]);
       
    }
    
    if (argc == 1) {
        fprintf(stderr, "Error\n");
        return 1;
    }
   
}

