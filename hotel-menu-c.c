#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct participant{

       int id_number;
       char last_name[10];
       char first_name[10];
       char meal[20];
       char hotel[10];
}participant;


int main()
{

       int choice;
       participant e[100];
       int i, j, n=0, test=0, found;
       int id, hotel_price, meal_price, total_price;
       char stars[10];

       do{
              do{
                     printf("=======================================\n");
                     printf("-----------| HOTEL MENU |--------------\n");
                     printf("=======================================\n");
                     printf("[1]- Add a participant\n");
                     printf("[2]- Calculate a participant's bill\n");
                     printf("[3]- Display participants by hotel stars\n");
                     printf("[4]- Delete a participant by ID\n");
                     printf("[0]- Quit\n");
                     printf("---------------------------------------\n");
                     printf("Enter your choice:");
                     scanf("%d", &choice);
                     printf("=======================================\n");
                     printf("\n");

                     if(choice < 0 || choice > 4){
                            printf("Invalid choice !!");
                     }

                     printf("\n");
              }while(choice < 0 || choice > 4);

              switch(choice){
                     case 1:

                            if(n >= 100){
                                   printf("List is full !!\n");
                                   break;
                            }

                            printf("\n");
                            printf("=======================================\n");
                            printf("--------| Add a participant |----------\n");
                            printf("=======================================\n");
                            printf("\n");
                            do{
                                   printf("Enter the ID card number (8 digits):");
                                   scanf("%d", &e[n].id_number);

                                   printf("\n");

                                   if( e[n].id_number > 99999999 || e[n].id_number < 11111111 ){
                                          printf("Invalid ID number !!");
                                          printf("\n");
                                   }
                            }while(e[n].id_number > 99999999 || e[n].id_number < 11111111 );

                            printf("\n---------------------------------------\n");

                            do{
                                   test=0;
                                   printf("Enter the participant's last name:");
                                   scanf("%9s", e[n].last_name);

                                   printf("\n");

                                   for(i=0 ; strlen(e[n].last_name) > i ; i++){
                                          if(e[n].last_name[i] >= '0' && e[n].last_name[i] <= '9'){
                                                 test=1;
                                          }
                                   }
                                   if(test==1){
                                          printf("Invalid last name !!\n");
                                   }
                            }while(test==1);

                            printf("\n---------------------------------------\n");

                            do{
                                   test=0;
                                   printf("Enter the participant's first name:");
                                   scanf("%9s", e[n].first_name);

                                   printf("\n");

                                   for(i=0 ; strlen(e[n].first_name) > i ; i++){
                                          if(e[n].first_name[i] >= '0' && e[n].first_name[i] <= '9'){
                                                 test=1;
                                          }
                                   }
                                   if(test==1){
                                          printf("Invalid first name !!\n");
                                   }
                            }while(test==1);


                            printf("\n---------------------------------------\n");

                            do{
                                   printf("Enter the meal for %s -- %s (Lunch / Dinner / Lunch and Dinner):", e[n].last_name, e[n].first_name);
                                   scanf(" %19[^\n]", e[n].meal);

                                   printf("\n");

                                   if(strcmp(e[n].meal,"Lunch")!=0 && strcmp(e[n].meal,"Dinner")!=0 && strcmp(e[n].meal,"Lunch and Dinner")!=0 && strcmp(e[n].meal,"")!=0 ){
                                          printf("Meal type not found !!");
                                          printf("\n");
                                   }

                            }while(strcmp(e[n].meal,"Lunch")!=0 && strcmp(e[n].meal,"Dinner")!=0 && strcmp(e[n].meal,"Lunch and Dinner")!=0 && strcmp(e[n].meal,"")!=0 );

                            printf("\n---------------------------------------\n");

                            do{
                                   printf("Enter the hotel stars [1-5]: ");
                                   scanf("%9s", e[n].hotel);

                                   printf("\n");

                                   if(strcmp(e[n].hotel,"1")!=0 && strcmp(e[n].hotel,"2")!=0 && strcmp(e[n].hotel,"3")!=0 && strcmp(e[n].hotel,"4")!=0 && strcmp(e[n].hotel,"5")!=0  && strcmp(e[n].hotel,"")!=0 ){
                                          printf("Hotel type not found !!");
                                          printf("\n");
                                   }

                            }while(strcmp(e[n].hotel,"1")!=0 && strcmp(e[n].hotel,"2")!=0 && strcmp(e[n].hotel,"3")!=0 && strcmp(e[n].hotel,"4")!=0 && strcmp(e[n].hotel,"5")!=0  && strcmp(e[n].hotel,"")!=0 );

                            printf("\n---------------------------------------\n");

                            printf("Saved successfully...\n");

                            n=n+1;
                            break;

                     case 2:

                            printf("\n");
                            printf("=======================================\n");
                            printf("----| Calculate participant's bill |---\n");
                            printf("=======================================\n");
                            printf("\n");

                            if(n == 0){
                                   printf("No participants !!\n");
                                   break;
                            }

                            do{
                                   printf("Enter the participant number [1-%d]:", n);
                                   scanf("%d", &id);

                                   printf("\n");

                                   if( id > n || id < 1){
                                          printf("Participant does not exist !!\n");
                                   }
                            }while( id > n || id < 1);

                            printf("\n---------------------------------------\n");

                            hotel_price=0;
                            meal_price=0;

                            if(strcmp(e[id-1].hotel,"1")==0){
                                   hotel_price=50;
                            }else if(strcmp(e[id-1].hotel,"2")==0){
                                   hotel_price=70;
                            }else if(strcmp(e[id-1].hotel,"3")==0){
                                   hotel_price=100;
                            }else if(strcmp(e[id-1].hotel,"4")==0){
                                   hotel_price=120;
                            }else if(strcmp(e[id-1].hotel,"5")==0){
                                   hotel_price=140;
                            }else if(strcmp(e[id-1].hotel,"")==0){
                                   hotel_price=0;
                            }

                            if(strcmp(e[id-1].meal,"Lunch")==0){
                                   meal_price=20;
                            }else if(strcmp(e[id-1].meal,"Dinner")==0){
                                   meal_price=30;
                            }else if(strcmp(e[id-1].meal,"Lunch and Dinner")==0){
                                   meal_price=50;
                            }else if(strcmp(e[id-1].meal,"")==0){
                                   meal_price=0;
                            }

                            total_price= hotel_price + meal_price;

                            printf("Hotel: %d | Meal: %d | Total bill: %d\n", hotel_price, meal_price, total_price);

                            break;
                     case 3:

                            printf("\n");
                            printf("=======================================\n");
                            printf("------| Display information |----------\n");
                            printf("=======================================\n");
                            printf("\n");

                            do{
                                   printf("Enter the hotel stars [1-5]: ");
                                   scanf("%9s", stars);

                                   printf("\n");

                                   if(strcmp(stars,"1")!=0 && strcmp(stars,"2")!=0 && strcmp(stars,"3")!=0 && strcmp(stars,"4")!=0 && strcmp(stars,"5")!=0){
                                          printf("Hotel type not found !!\n");
                                   }
                            }while(strcmp(stars,"1")!=0 && strcmp(stars,"2")!=0 && strcmp(stars,"3")!=0 && strcmp(stars,"4")!=0 && strcmp(stars,"5")!=0);

                            found=0;
                            for(i=0 ; i<n ; i++){
                                   if(strcmp(e[i].hotel,stars)==0){
                                          printf("ID: %d | Last name: %s | First name: %s | Meal: %s | Hotel: %s stars\n", e[i].id_number, e[i].last_name, e[i].first_name, e[i].meal, e[i].hotel);
                                          found=1;
                                   }
                            }
                            if(found==0){
                                   printf("No participants in this hotel.\n");
                            }

                            break;

                     case 4:

                            printf("\n");
                            printf("=======================================\n");
                            printf("--------| Delete a participant |-------\n");
                            printf("=======================================\n");
                            printf("\n");

                            printf("Enter the ID card number:");
                            scanf("%d", &id);
                            printf("\n");

                            found=0;
                            for(i=0 ; i<n ; i++){
                                   if(e[i].id_number == id){
                                          for(j=i ; j<n-1 ; j++){
                                                 e[j]=e[j+1];
                                          }
                                          n=n-1;
                                          found=1;
                                          printf("Deleted successfully...\n");
                                          break;
                                   }
                            }
                            if(found==0){
                                   printf("Participant does not exist !!\n");
                            }

                            break;
              }

       }while( choice !=0 );

  return 0;
}
