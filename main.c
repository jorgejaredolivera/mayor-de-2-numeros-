/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 28 de agosto de 2018, 06:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a,b;
    printf("dame 2 numeros y\nte dire cual de ellos es mayor");
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("el mayor es %d",a);
    }
    else {
        printf("el mayor es %d",b);
    }
    
    
    return 0;
}

