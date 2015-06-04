//
//  main.c
//  FuzzBizzNezz
//
//  Created by Arsalan Vakili on 2015-06-04.
//  Copyright (c) 2015 Arsalan Vakili. All rights reserved.



// the functionality of this program is for the user to enter 3 numbers
// we want count all the number from 1 to number nezz entered by the user
// if the number in incremntation is multiple of fuzz  and buzz print fuzznezz
// ...............................................fuzz print fuzz
//................................................ bizz print bizz

#include <stdio.h>

int FuzzBizzNezz(int Fuzz, int Bizz, int Nezz);

int main() {
    
    int num1;
    int num2;
    int num3;
    printf("Please enter your first integer Fuzz:");
    scanf("%d",&num1);
    printf("Please enter your second integer Bizz:");
    scanf("%d", &num2);
    printf("Please enter your third integer Nezz:");
    scanf("%d", &num3);
    
    FuzzBizzNezz(num1, num2, num3);
    return 0;
}




// the following function returns if the number is multiples of fuzz and bizz
int FuzzBizzNezz (int Fuzz, int Bizz, int Nezz){
    for (int iii=1; iii < Nezz; iii++) {
        
        if (iii % Fuzz == 0 && iii % Bizz == 0){  // if a number is a multiple of fuzz and bizz
            printf("FuzzBizz\n");
        }
        else if (iii % Fuzz ==0){     // if a number is a multiple of fuzz
            printf("Fuzz\n");
        }
        else if (iii % Bizz == 0){     // if a number is a multiple of bizz
            printf("Bizz\n");
        }
        else
          printf("%d\n", iii);       // return all the number
    }
    return 0;
}