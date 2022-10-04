#include <stdio.h>
#include<conio.h>

void main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int calChoice;
  float userinputF; 
  float userinputC; 
  float userinputUSDtoEuro; 
  float userinputUSDtoJPY;
  float userinputUSDtoRMB; 
  float userinputUSDtoINR;
  float userinputOunce; 
  float userinputGram;
  float userinputton; 
  float fahrenheitToCelcius; 
  float celciusToFahrenheit; 
  float USDtoEURO; 
  float USDtoJPY;
  float USDtoRMB; 
  float USDtoINR;  
  float ounceToPounds; 
  float gramsToPounds;
  float tontokilograms; 
  float num1,num2;
  float result;
  
  printf("--------WELCOME TO CONVERTER/CALCULATOR-------- \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Press (T) to choose Temperature Converter.\n");
  printf("Press (E) to Exchange Currency.\n ");
  printf("Press (M) to choose Mass Converter.\n ");
  printf("Press (C) to Choose Calculator. \n");
  printf("Please enter the letter you want to use: ");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("____Welcome to Temperature Converter____ \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: ");
          scanf("%f",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %.2f",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: ");
        scanf("%f",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %.2f",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'E') {
      printf("____Welcome to Exchange Currency Converter____ \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      printf("Enter 4 for USB to INR. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: ");
          scanf("%f",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: ");
          scanf("%f",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: ");
        scanf("%f",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.82;
        printf("RMB: %.2f",USDtoRMB);
      }
      else if(currencyChoice == 4){
        printf("Please enter the USD amount: ");
        scanf("%f",&userinputUSDtoINR);
        USDtoINR = userinputUSDtoINR * 81.64;
        printf("INR: %.2f",USDtoINR);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("____Welcome to Mass Converter____ \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      printf("Enter 3 for ton to kilograms. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: ");
          scanf("%f",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: ");
          scanf("%f",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      } 
      else if(massChoice==3){
          printf("Please enter the ton amount: ");
          scanf("%f",&userinputton);
          tontokilograms = userinputton * 1000;
          printf("Kilograms: %.2f",tontokilograms);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  else if(category == 'C') {
    printf("____Welcome to Calculator____ \n");
    printf("Here is the list of calculator to choose from: \n");
    printf("Enter 1 for addition. \n");
    printf("Enter 2 for substraction. \n");
    printf("Enter 3 for multiplication. \n");
    printf("Enter 4 for division. \n");
    scanf("%d",&calChoice); 
    if(calChoice == 1){
      printf("Please enter the first number :");
      scanf("%f",&num1);
      printf("Please enter the second number :");
      scanf("%f",&num2);
      result = num1 + num2;
      printf("Addition: %.2f",result);
    } 
    else if(calChoice == 2){
      printf("Please enter the first number :");
      scanf("%f",&num1);
      printf("Please enter the second number :");
      scanf("%f",&num2);
      result = num1 - num2;
      printf("Substraction: %.2f",result);
    } 
    else if(calChoice == 3){ 
      printf("Please enter the first number :");
      scanf("%f",&num1);
      printf("Please enter the second number :");
      scanf("%f",&num2);
      result = num1 * num2;
      printf("Multiplication: %.2f",result);
    } 
    else if(calChoice == 4){ 
      printf("Please enter the first number :");
      scanf("%f",&num1);
      printf("Please enter the second number :");
      scanf("%f",&num2);
      result = num1 / num2;
      printf("Division: %.2f",result);
    } 
    else 
        printf("Please enter the correct choice. \n");
   } 
    
   printf("\n ----Thank you for using.---- ");
  getch();
}