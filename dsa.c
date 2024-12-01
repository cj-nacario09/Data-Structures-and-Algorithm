// NEW UPDATE ON STRINGS - deletion and replacing word in a string
// ALSO NEW UPDATE - Adding of description per operation and name of data structures



// NACARIO, CARL JOSEPH P.
// BSCS 2-A

#include <stdio.h>
#include <stdlib.h> // for exit
#include <unistd.h> // for sleep

//function decleration for ASCII Art 
void print_text();

// function to ask if they want to go back to prev screen or just exit the main program
void ask_retry(char* message) {     
    char choice;
    
    printf("\n%s (y/n): ", message);
    scanf(" %c", &choice);
    
    if (choice == 'y' || choice == 'Y'){
        return; // back to prve screen
    } 

// while
// else if for n or N

    else{
        printf("\e[1;1H\e[2J"); // clears the screen in the terminal
        sleep(1);
    }
}

//functions decleration used for arrays
void arr_traverse(); 
void arr_insert(); 
void arr_del();
void arr_search();
void arr_update();

//function declerations used for sortings
void selection_sort();
void insertion_sort();
void bubble_sort();
void merge_sort();
void quick_sort();

//function declerations used for strings
void str_length();
void str_search_index();
void str_concat();
void str_compare();
void str_delete();
void str_replace();

//function declerations for searching
void linear_search();
void binary_search();

int main(){

    int main_menu;
    int linear_menu;
    int arr_menu;
        int sort_menu;
    int string_menu;
    int nonlinear_menu;
    int search_menu;

    while(1){
    // WELCOME SCREEN
    printf("\e[1;1H\e[2J"); //clears the screen in the terminal
    printf("\n\n");
    print_text(); //calls the print text function
    printf("\t\t\t\t\t\t   press Enter to continue.\n");
    getchar(); 

        // MAIN SCREEN
        printf("\e[1;1H\e[2J"); //clears the screen in the terminal
        sleep(1);
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t  DATA STRUCTURES AND ALGORITHM\n");
        printf("\t\tData Structures are used to organise and store data to use it in an effective way when performing data operations.\n\n");
        
        printf("\t\t\t\t\t\tChoose one of the Options below:\n\n");
        printf("\t\t\t\t\t\t    1 => Linear Data Structure\n");
        printf("\t\t\t\t\t\t    2 => Non-Linear Data Structure\n");
        printf("\t\t\t\t\t\t    3 => Strings\n");
        printf("\t\t\t\t\t\t    4 => Searching\n");
        printf("\t\t\t\t\t\t    5 => Quit\n");
        printf("\n\t\t\t\t\t\t  Option: ");
        scanf("%d", &main_menu);

            switch(main_menu){
            
                //Linear DSA
                case 1:
                    while(1){
                    printf("\e[1;1H\e[2J"); //clears the screen in the terminal
                    sleep(1);
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t  LINEAR DATA STRUCTURES\n");
                    printf("\tA linear data structure is a structure in which the elements are stored sequentially, and the elements are connected to the previous and the next element.\n\n");
                    printf("\t\t\t\t\t\tChoose one of the Options below:\n\n");
                    printf("\t\t\t\t\t\t    1 => Arrays\n");
                    printf("\t\t\t\t\t\t    2 => Linked List (working on it po madam)\n");
                    printf("\t\t\t\t\t\t    3 => Stacks (working on it po madam)\n");
                    printf("\t\t\t\t\t\t    4 => Queues (working on it po madam)\n");
                    printf("\t\t\t\t\t\t    5 => Exit\n");
                    printf("\n\t\t\t\t\t\t  Option: ");
                    scanf("%d", &linear_menu);

                        switch(linear_menu){

                            // Arrays
                            case 1:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n\n\n\n\n\n"); 
                                printf("\t\t\t\t\t\t\t  Arrays\n");
                                printf("\nAn array is a linear data structure that stores a collection of elements of the same data type in contiguous memory locations\n\n");
                                printf("\t\t\t\t\t\tChoose one of the Operations below:\n\n");
                                printf("\t\t\t\t\t\t    1 => Traverse\n");
                                printf("\t\t\t\t\t\t    2 => Insertion\n");
                                printf("\t\t\t\t\t\t    3 => Deletion\n");
                                printf("\t\t\t\t\t\t    4 => Search\n");
                                printf("\t\t\t\t\t\t    5 => Update\n");
                                printf("\t\t\t\t\t\t    6 => Sort\n");
                                printf("\t\t\t\t\t\t    7 => Exit\n"); 
                                printf("\n\t\t\t\t\t\t  Option: ");
                                scanf("%d", &arr_menu);

                                switch(arr_menu){
                                    
                                    //traverse
                                    case 1:
                                        printf("\e[1;1H\e[2J");
                                        sleep(1);
                                        printf("\n\n\n");
                                        printf("\t\t\t\t\t\t\tTraverse\n");
                                        printf("Traversal in a Linear Array is the process of visiting each element once. Traversal is done by starting with the first element of the array and reaching to the last.\n\n\n");
                                        arr_traverse();
                                        ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                    break;

                                    //insertion
                                    case 2:
                                        printf("\e[1;1H\e[2J");
                                        sleep(1);
                                        printf("\n\n");
                                        printf("\t\t\t\t\t\t\tInsertion\n\n\n");
                                        arr_insert();
                                        ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                    break;

                                    //deletion
                                    case 3:
                                        printf("\e[1;1H\e[2J");
                                        sleep(1);
                                        printf("\n\n");
                                        printf("\t\t\t\t\t\t\tDeletion\n\n\n");
                                        arr_del();
                                        ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                    break;

                                    //Searching
                                    case 4:
                                        printf("\e[1;1H\e[2J");
                                        sleep(1);
                                        printf("\n\n");
                                        printf("\t\t\t\t\t\t\tSearcing\n\n");
                                        arr_search();
                                        ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                    break;

                                    //Update
                                    case 5:
                                        printf("\e[1;1H\e[2J");
                                        sleep(1);
                                        printf("\n\n");
                                        printf("\t\t\t\t\t\t\tUpdate\n\n");
                                        arr_update();
                                        ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                    break;

                                    //SORTINGS
                                    case 6:
                                        printf("\e[1;1H\e[2J"); // clears the screen in the terminal
                                        sleep(1);
                                        printf("\n\n\n\n\n\n\n\n");
                                        printf("\t\t\t\t\t\t\t  Sortings\n\n");
                                        printf("\t\t\t\t\t\tChoose one of the Options below:\n\n");
                                        printf("\t\t\t\t\t\t    1 => Selection\n");
                                        printf("\t\t\t\t\t\t    2 => Insertion\n");
                                        printf("\t\t\t\t\t\t    3 => Bubble\n");
                                        printf("\t\t\t\t\t\t    4 => Merge\n");
                                        printf("\t\t\t\t\t\t    5 => Quicksort\n");
                                        printf("\t\t\t\t\t\t    6 => Exit\n");
                                        printf("\n\t\t\t\t\t\t  Option: ");
                                        scanf("%d", &sort_menu);

                                        switch(sort_menu){
                            
                                            //Selection sort
                                            case 1: 
                                                printf("\e[1;1H\e[2J");
                                                sleep(1);
                                                printf("\n\n\n"); 
                                                printf("\t\t\t\t\t\t\t  Selection Sort\n\n");
                                                selection_sort();
                                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                            break;

                                            //Insertion sort
                                            case 2:
                                                printf("\e[1;1H\e[2J");
                                                sleep(1);
                                                printf("\n\n\n"); 
                                                printf("\t\t\t\t\t\t\t  Insertion Sort\n\n");
                                                insertion_sort();
                                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                            break;

                                            //Bubble sorrt
                                            case 3:
                                                printf("\e[1;1H\e[2J");
                                                sleep(1);
                                                printf("\n\n\n"); 
                                                printf("\t\t\t\t\t\t\t  Bubble Sort\n\n");
                                                bubble_sort();
                                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                            break;

                                            //Merge sort
                                            case 4:
                                                printf("\e[1;1H\e[2J");
                                                sleep(1);
                                                printf("\n\n\n"); 
                                                printf("\t\t\t\t\t\t\t  Merge Sort\n\n");
                                                merge_sort();
                                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");;
                                            break;

                                            //Quick soert
                                            case 5:
                                                printf("\e[1;1H\e[2J");
                                                sleep(1);
                                                printf("\n\n\n"); 
                                                printf("\t\t\t\t\t\t\t  Quick Sort\n\n");
                                                quick_sort();
                                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                                            break;

                                            //back to prev screen
                                            case 6:
                                                printf("\e[1;1H\e[2J");
                                                sleep(.5);
                                            break;

                                            default:
                                                printf("Not an option, Try Again\n");
                                                sleep(.5);
                                            break;

                                        } // end of sort menu

                                    default:
                                        printf("Not an option, Try Again\n");
                                        sleep(.5);
                                    break;

                                } // end array menu
                                
                            break; 

                            // Linked list
                            case 2:
                                printf("\e[1;1H\e[2J");
                                sleep(.5);
                                printf("\n\n\n"); 
                                printf("\t\t\t\t\t\t\t  Linked List\n\n");
                                printf("\t\t\t\t\t\t      working on it po madam");
                            break;

                            // Stacks
                            case 3:
                                printf("\e[1;1H\e[2J");
                                sleep(.5);
                                printf("\n\n\n"); 
                                printf("\t\t\t\t\t\t\t  Stacks\n\n");
                                printf("\t\t\t\t\t\t      working on it po madam");
                            break;

                            // Queues
                            case 4:
                                printf("\e[1;1H\e[2J");
                                sleep(.5);
                                printf("\n\n\n"); 
                                printf("\t\t\t\t\t\t\t  Queues\n\n");
                                printf("\t\t\t\t\t\t      working on it po madam");
                            break;

                            // back to main screen
                            case 5:
                                printf("\e[1;1H\e[2J");
                            break;

                            default:
                                printf("Not an option, Try Again\n");
                                sleep(1);
                            break;
                        }//linear menu

                        if (linear_menu == 5){
                            break;
                        } // flag for while loop to try current screeen again

                }// while lopp
                break;

                // Non-linear DSA        
                case 2:
                    while(1){
                    printf("\e[1;1H\e[2J"); // clears the screen in the terminal
                    sleep(.5);
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t  NON-LINEAR DATA STRUCTURES\n\n");
                    printf("\t\t\t\t\t\t    1 => Trees (working on it po madam)\n");
                    printf("\t\t\t\t\t\t    2 => Graph (working on it po madam)\n");
                    printf("\t\t\t\t\t\t    3 => Exit\n");
                    printf("\n\t\t\t\t\t\t  Option: ");
                    scanf("%d", &nonlinear_menu);

                    switch (nonlinear_menu){
                            
                        //trees
                        case 1: 
                            printf("\e[1;1H\e[2J");
                            sleep(.5);
                            printf("\n\n\n"); 
                            printf("\t\t\t\t\t\t\t  Trees\n\n");
                            printf("\t\t\t\t\t\t    working on it po madam"); 
                        break;

                        //graph
                        case 2: 
                            printf("\e[1;1H\e[2J");
                            sleep(.5);
                            printf("\n\n\n"); 
                            printf("\t\t\t\t\t\t\t  Graph\n\n");
                            printf("\t\t\t\t\t\t    working on it po madam");
                        break;

                        //back to main menu
                        case 3: 
                                printf("\e[1;1H\e[2J");
                        break;

                        default:
                            printf("Not an option, Try Again\n");
                            sleep(.5);
                        break;
                    }// non-linear menu

                    if (nonlinear_menu == 3){
                        break;
                    }// flag for while loop to try current screeen again

                }//while loop
                break;
            
                // Strings
                case 3:
                    while(1){
                    printf("\e[1;1H\e[2J"); //clears the screen in the terminal
                    sleep(1);
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t  STRINGS\n\n");
                    printf("\t\t\t\t\t\tChoose one of the Options below:\n\n");
                    printf("\t\t\t\t\t\t    1 => String Length\n");
                    printf("\t\t\t\t\t\t    2 => Search Index\n");
                    printf("\t\t\t\t\t\t    3 => Concatenate\n");
                    printf("\t\t\t\t\t\t    4 => Compare\n");
                    printf("\t\t\t\t\t\t    5 => Delete\n");
                    printf("\t\t\t\t\t\t    6 => Replace\n");
                    printf("\t\t\t\t\t\t    7 => Exit\n");
                    printf("\n\t\t\t\t\t\t  Option: ");
                    scanf("%d", &string_menu);

                        switch(string_menu){
                            
                            //length
                            case 1:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n");
                                printf("\t\t\t\t\t\t\tString Length\n\n\n");
                                str_length();
                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                            // search
                            case 2:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n");
                                printf("\t\t\t\t\t\t\tSearch Index\n\n\n");
                                str_search_index();
                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                            // concatenation
                            case 3:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n");
                                printf("\t\t\t\t\t\t\tConcatenation\n\n\n");
                                str_concat();
                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                            // compare
                            case 4:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n");
                                printf("\t\t\t\t\t\t\tCompare\n\n\n");
                                str_compare();
                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                            // delete
                            case 5:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n");
                                printf("\t\t\t\t\t\t\tDeletion\n\n\n");
                                str_delete();
                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                            // replace
                            case 6:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                                printf("\n\n\n");
                                printf("\t\t\t\t\t\t\tReplace\n\n\n");
                                str_replace();
                                ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                            case 7:
                                printf("\e[1;1H\e[2J");
                                sleep(1);
                            break;

                            default:
                                printf("Not an option, Try Again\n");
                                sleep(1);
                            break;

                        }// end of sring menu

                        if (string_menu == 7){
                        break;
                        }// flag for while loop to try current screeen again

                    }// while loop
                break;

                // sEARCHING
                case 4:
                    while(1){
                    printf("\e[1;1H\e[2J"); // clears the screen in the terminal
                    sleep(1);
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\t\t\t\t\t\t\t SEARCHING\n\n");
                    printf("\t\t\t\t\t\tChoose one of the Options below:\n\n");
                    printf("\t\t\t\t\t\t    1 => Linear Search\n");
                    printf("\t\t\t\t\t\t    2 => Binary Search\n");
                    printf("\t\t\t\t\t\t    3 => Exit\n");
                    printf("\n\t\t\t\t\t\t  Option: ");
                    scanf("%d", &search_menu);

                    switch(search_menu){
                        
                        //linear search
                        case 1:
                            printf("\e[1;1H\e[2J");
                            sleep(1);
                            printf("\n\n\n");
                            printf("\t\t\t\t\t\t\t Linear Search\n\n\n");
                            linear_search();
                            ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                            break;

                        // binary search
                        case 2:
                            printf("\e[1;1H\e[2J");
                            sleep(1);
                            printf("\n\n\n");
                            printf("\t\t\t\t\t\t\t Binary Search\n\n\n");
                            binary_search();
                            ask_retry("\n\n\t\t\t\tDo you want to go back to the previous screen? ");
                        break;

                        case 3:
                            printf("\e[1;1H\e[2J");
                            sleep(1);
                        break;

                        default:
                            printf("Not an option, Try Again\n");
                            sleep(1);
                        break;
                    } // end of search menu

                    if (search_menu == 3){
                        break;
                    }// flag for while loop to try current screeen again

                    }//while loop   
                break;

                // Quit Program
                case 5:
                    printf("\e[1;1H\e[2J"); // clears the screen in the terminal
                    sleep(1);
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\n\n\n\t\t\t\t\t\t Quiting from the program. Goodbye!\n");
                    printf("\n\n\n\n\n\n\n\n");
                    sleep(1);
                    exit(0);
                break;

                default:
                    printf("Not an option, Try Again\n");
                    sleep(1);
                break;

            }// end switch(main menu)

    }// while loop
    return 0;

}// end main

//welcome to DSA ASCII Art
void print_text(){
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t    __| |_____________________________________________| |__\n");
    printf("\t\t\t\t    __   _____________________________________________   __\n");
    printf("\t\t\t\t      | |                                             | |  \n");
    printf("\t\t\t\t      | | WELCOME TO DATA STRUCTURES AND ALGORITHM!!! | |  \n");
    printf("\t\t\t\t    __| |_____________________________________________| |__\n");
    printf("\t\t\t\t    __   _____________________________________________   __\n");
    printf("\t\t\t\t      | |                                             | |  \n\n\n\n"); 
}// print_text

//for traversing the array
void arr_traverse() {
    int i, size;
    int count = 1;
    int result;

    while (1) {
        printf("\t\t\t\t\tEnter the size of the array: ");
        result = scanf("%d", &size);
        
        if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }

    // Declare the array with the valid size
    int arr_val[size];

    // Prompt for the elements of the array with error checking
    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");
    printf("\t\t\t\t\tArray: \n");

    for (i = 0; i < size; i++) {
        while (1) {
            printf("\n\t\t\t\t\t\tElement %d: ", count);
            result = scanf("%d", &arr_val[i]);
            
            if (result != 1) { // Check if the input is a valid integer

                while (getchar() != '\n'); // Clear the invalid input from buffer

                printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
            } 
            else {
                break;
            }
        }
        count++;
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");
    printf("\n\t\t\t\t\t\tThe original array elements are:\n\n");

    // Display the array elements
    for (i = 0; i < size; i++) {
        printf("\n\t\t\t\t\t\t    index[%d] = %d\n", i, arr_val[i]);
        sleep(1);
    }
}// traverse

// for inserting elements in the array
void arr_insert(){

    int size, i, element, position;
    int count = 1;
    int result;

        while (1) {
        printf("\t\t\t\t\tEnter the size of the array: ");
        result = scanf("%d", &size);
        
        if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }
    // Define the array with a maximum size to allow space for insertion
    int arr[size + 1];

    // read the elements of the array
    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");
    printf("\t\t\t\t\tArray: \n");

    for (i = 0; i < size; i++) {

        while (1) {
            printf("\n\t\t\t\t\t\tElement %d: ", count);
            result = scanf("%d", &arr[i]);
            
            if (result != 1) { // Check if the input is a valid integer

                while (getchar() != '\n'); // Clear the invalid input from buffer

                printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
            } 
            else {
                break;
            }
        }
        count++;
        
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Get the element to insert and the position
    while(1){
    printf("\n\t\t\t\t\tEnter the element you want to insert: ");
    result = scanf("%d", &element);
    
        if (result != 1) { // Check if the input is a valid integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
        } 
        else {
            break;
        }
    }
    
    while(1){
    printf("\n\t\t\t\t\tEnter the position (1 to %d) to insert the element: ", size + 1);
    result = scanf("%d", &position);

        if (result != 1) { // Check if the input is a valid integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
        } 
        else {
            break;
        }
    }

    // Adjust position for 0-based indexing in C
    position--;

    // Shift elements to the right to make space for the new element
    for (i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;
    size++; // Increase the size of the array

    printf("\e[1;1H\e[2J");
    sleep(1);

    // Display the updated array
    printf("\n\n\t\t\t\t\tArray after insertion:\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");
    printf("\t\t\t\t\tUpdated Array: \n");

    int upd_count = 1;

    for (i = 0; i < size; i++) {
        printf("\n\t\t\t\t\t\tElement %d: ", upd_count);
        printf("%d \n", arr[i]);
        sleep(1);
        upd_count++;
    }
    printf("\n\n\t\t\t\t\t-------------------------------------------\n");

}// insertion array

// for deleting elements in the arry
void arr_del(){
    
    int size, i, element;
    int key = 0;
    int count = 1;
    int result;

    while (1) {

        printf("\t\t\t\t\tEnter the size of the array: ");
        result = scanf("%d", &size);
        
        if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }

    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Array: \n");
    
    for (i = 0; i < size; i++) {

        while (1) {
            printf("\n\t\t\t\t\t\tElement %d: ", count);
            result = scanf("%d", &arr[i]);
            
            if (result != 1) { // Check if the input is a valid integer

                while (getchar() != '\n'); // Clear the invalid input from buffer

                printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
            } 
            else {
                break;
            }
        }
        count++;
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");
    
    // Get the element to delete
    while(1){
    printf("\n\t\t\t\t\tEnter the element you want to delete: ");
    result = scanf("%d", &element);

        if (result != 1) { // Check if the input is a valid integer

            while (getchar() != '\n'); // Clear the invalid input from buffer

            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
        } 
        else {
            break;
        }

    }

    // traverse to find the key
    for (i = 0; i < size; i++){
        if (arr[i] == element){
            key = 1;
            break;
        }
    }

    printf("\e[1;1H\e[2J");
    sleep(1);

    //condition if the key is found, then delete it by shifting the elements
    if (key){

        for (int j = i; j < size - 1; j++){
            arr[j] = arr[j + 1];
        }

        //decrease the size of arrauy
        size--;
        printf("\n\n\t\t\t\t\t\t=== Element %d is deleted. ===\n", element);

    }

    else{
        printf("\n\n\t\t\t\t\t==== Element %d not found in the array. ====\n", element);
      
    }

    printf("\n\n\t\t\t\t\tArray after deletion:\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Updated Array: \n");

    int upd_count=1;
    for (i = 0; i < size; i++) {
        printf("\n\t\t\t\t\t\tElement %d: ", upd_count);
        printf("%d \n", arr[i]);
        sleep(1);
        upd_count++;
    }
    printf("\n\n\t\t\t\t\t-------------------------------------------\n");

}// deletion array

// for searching a key in the arrray
void arr_search(){
    int size, key;
    int count = 1;
    int result;

   while (1) {

        printf("\t\t\t\t\tEnter the size of the array: ");
        result = scanf("%d", &size);
        
        if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }

    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Array: \n");

    for (int i = 0; i < size; i++) {

        while (1) {

            printf("\n\t\t\t\t\t\tElement %d: ", count);
            result = scanf("%d", &arr[i]);
            
            if (result != 1) { // Check if the input is a valid integer

                while (getchar() != '\n'); // Clear the invalid input from buffer

                printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
            } 
            else {
                break;
            }
        }
        count++;
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Get the element to search
    while(1){
    printf("\n\t\t\t\t\tEnter the element you want to search: ");
    result = scanf("%d", &key);

     if (result != 1) { // Check if the input is a valid integer

        while (getchar() != '\n'); // Clear the invalid input from buffer

        printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
    } 
    else {
        break;
    }

    }

    printf("\e[1;1H\e[2J");
    sleep(1);

    printf("\n\t\t\t\t\tSearching: %d\n", key);

    for (int j = 0; j < size; j++) {
        printf("\n\t\t\t\t\t\tindex[%d] = %d\n", j, arr[j]);
        sleep(1);
        }

    // traverse to find the key
    for (int j = 0; j < size; j++){
        if (arr[j] == key){
            printf("\n\n\t\t\t\t\t    => We found key %d at index %d.\n", key, j);
            return;
        }
    }

    printf("\n\n\t\t\t\t\t    => Key %d not found in the array.\n\n", key);

}// Searching array

// for updating element in the array
void arr_update(){
    int size, index, new_val;
    int count = 1;
    int result;

while (1) {

        printf("\t\t\t\t\tEnter the size of the array: ");
        result = scanf("%d", &size);
        
        if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }

    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Original Array: \n");

    for (int i = 0; i < size; i++) {
        while (1) {

            printf("\n\t\t\t\t\t\tElement %d: ", count);
            result = scanf("%d", &arr[i]);
            
            if (result != 1) { // Check if the input is a valid integer

                while (getchar() != '\n'); // Clear the invalid input from buffer

                printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
            } 
            else {
                break;
            }
        }
        count++;
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Ask for the index to update
    while(1){
    printf("\n\t\t\t\t\tEnter the index of element (1 to %d) to update: ", size);
    result = scanf("%d", &index);

    if (result != 1) { // Check if the input is a valid integer

        while (getchar() != '\n'); // Clear the invalid input from buffer

        printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
    } 
    else  if (index < 1 || index > size) {
        printf("\n\n\t\t\t\t\t\t=> Invalid index, try again.\n");
    }
    else {
        break;
    }
    }

    // Validate the index

    

    // Ask for the new value
    while(1){
    printf("\n\t\t\t\t\tEnter the new value for index %d: ", index);
    result = scanf("%d", &new_val);

    if (result != 1) { // Check if the input is a valid integer

        while (getchar() != '\n'); // Clear the invalid input from buffer

        printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");
    } 
    else {
        break;
    }
    }

    // Update the array
    arr[index - 1] = new_val;

    printf("\e[1;1H\e[2J");
    sleep(1);

    printf("\n\n\t\t\t\t\tUpdating index %d to %d", index, new_val);

    printf("\n\n\t\t\t\t\t-------------------------------------------\n\t\t\t\t\t");
    
    // Display the updated array
    int upd_count = 1;
    printf("\n\t\t\t\t\tUpdated Array: \n");
    for (int i = 0; i < size; i++) {

        printf("\n\t\t\t\t\t\tIndex %d: %d\n", upd_count, arr[i]);
        sleep(1);
        upd_count++;
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");

}// update array


//string lentgh
void str_length(){
    char sometext[100]; // Array to store the user's input

    printf("\t\t\t\t\tEnter a string or word: ");
    
    // i used a format specifier to read until newline is encountered for scanf to handle spaces
    if (scanf(" %[^\n]", sometext) != EOF){

        // Calculate the length of the string
        int length = 0;
        while (sometext[length] != '\0') {
            length++;
        }

        printf("\n\t\t\t\t\t-------------------------------------------\n\n");
        printf("\t\t\t\t\tThe entered string is: \"%s\"\n\n", sometext);
        printf("\t\t\t\t\tThe length of the string is: %d characters\n\n", length);
        printf("\t\t\t\t\t-------------------------------------------\n");
    }
    else {
        printf("\n\t\t\t\t\tNo input detected or EOF encountered.\n");
    }
}// str length

//for search index
void str_search_index(){
    char str[100];
    char search;
    int found = 0; //flag if index is found

    printf("\t\t\t\t\tEnter a string or word: ");
 
    if (scanf(" %[^\n]", str) != EOF){

        // Calculate the length of the string (strlen string function)
        int length = 0;
        while (str[length] != '\0') {
        length++;
        }
        // clear the buffer
        getchar();

        printf("\n\t\t\t\t\tEnter the character to find: ");
        scanf("%c", &search);

        printf("\n\t\t\t\t\t-------------------------------------------\n");

        for(int i = 0; str[i] !='\0'; i++){
            printf("\t\t\t\t\t\t\tIndex %d: %c\n", i, str[i]);
        
            if (str[i] == search){
                printf("\n\t\t\t\t\t    => We found character '%c' at index %d.\n", search, i);
                found = 1;
                break;
            }
        }

        if (!found){
            printf("\n\t\t\t\t\t    => Character '%c' not found in the string.\n\n", search);
        }
        printf("\n\t\t\t\t\t-------------------------------------------\n");

    }
    else {
        printf("\n\t\t\t\t\tNo input detected or EOF encountered.\n");
    }

}// search index

// for concatenation of two strings
void str_concat(){
    char str1[100];
    char str2[100];

    printf("\t\t\t\t\tEnter the first string or word: ");
    
    // for str1
    if (scanf(" %[^\n]", str1) != EOF){
        getchar();

        printf("\n\t\t\t\t\tEnter the second string or word: ");

        // for str2
        if (scanf(" %[^\n]", str2) != EOF){
            getchar();

            //concat
            int i = 0;
            while (str1[i] != '\0'){

                i++;
            }

            int j = 0;
            while (str2[j] != '\0'){
                str1[i] = str2[j];
                i++;
                j++;

            }
            str1[i] = '\0';

            //total lenth of thw two strings
            int str_length = 0;
            while (str1[str_length] != '\0'){

                str_length++;
            }

            printf("\n\t\t\t\t\t-------------------------------------------\n");
            printf("\n\t\t\t\t\tConcatenated string: %s\n", str1);
            printf("\n\t\t\t\t\tTotal index (length) of the concatenated string: %d\n\n", str_length);
            printf("\t\t\t\t\t-------------------------------------------\n");

        } // str2
        else {
            printf("\n\t\t\t\t\tNo input detected or EOF encountered.\n");
        }

    } // str1
    else {
        printf("\n\t\t\t\t\tNo input detected or EOF encountered.\n");
    }

} // concatenation

// FOR COMPARING
// function for comparing two strings
int compare_strings(char str1[], char str2[]){
    int i = 0;

    // Compare characters one by one
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return 0;
        }
        i++;
    }

    // If both strings end at the same time, they are equal
    if (str1[i] == '\0' && str2[i] == '\0'){
        return 1;  
    } 
    else {
        return 0; 
    }
}
 
void str_compare(){
    char str1[100], str2[100];

    printf("\t\t\t\t\tEnter the first string or word: ");
    
    // for str1
    if (scanf(" %[^\n]", str1) != EOF){
        getchar();

        printf("\n\t\t\t\t\tEnter the second string or word: ");
        
        // for str2
        if (scanf(" %[^\n]", str2) != EOF){
            getchar();

            //funcrion call to compare
            if (compare_strings(str1, str2)){
                printf("\n\t\t\t\t\t-------------------------------------------\n");
                printf("\n\t\t\t\t\tThe strings are equal.\n");
                printf("\n\t\t\t\t\t-------------------------------------------\n");
            } 
            else {
                printf("\n\t\t\t\t\t-------------------------------------------\n");
                printf("\n\t\t\t\t\tThe strings are not equal.\n");
                printf("\n\t\t\t\t\t-------------------------------------------\n");
            }
        } 
        else{
            printf("\n\t\t\t\t\tNo input detected or EOF encountered.\n");
        }
    } 
    else {
        printf("\n\t\t\t\t\tNo input detected or EOF encountered.\n");
    }
}//COMPARE

// for deletion
void str_delete(){

    int i, j = 0, k = 0, n = 0;
    int flag = 0;
    int found = 0;

    char str[100], updated[100], word[100];

    printf("\t\t\t\t\tEnter a string or sentence: ");
    if (scanf(" %[^\n]", str) != EOF) {

        printf("\n\t\t\t\t\tEnter the word you want to remove: ");
        if (scanf(" %[^\n]", word) != EOF) {

            // Calculate the string lentgh
            int length = 0;

            while (word[length] != '\0'){
                length++;

            }

            for (i = 0; str[i] != '\0'; i++) {
                k = i;

                // Check if the current sequence matches the word to delete
                while (str[i] == word[j] && str[i] != '\0' && word[j] != '\0'){

                    i++;
                    j++;

                    // If the entire word is matched
                    if (j == length && (str[i] == ' ' || str[i] == '\0')){

                        // Mark match strings
                        flag = 1; 
                        found = 1;
                        break;
                    }

                }
                  
                j = 0;

                if (flag == 0)
                {
                    i = k; // Reset if no match
                    updated[n++] = str[i];

                }
                else {

                    // Reset flag for the next match
                    flag = 0; 
                    i--; // process reamaining chars
                }
            }

            // terminate the updated string
            updated[n] = '\0';

            printf("\n\t\t\t\t\t-------------------------------------------\n");

            if (found) {

                printf("\n\t\t\t\t\tAfter Removing Word From String: %s\n", updated);
                printf("\n\t\t\t\t\t-------------------------------------------\n");
            } 
            else {

                printf("\n\t\t\t\t\tThere's no word in the string.\n");
                printf("\n\t\t\t\t\t-------------------------------------------\n");
            }

        } 
    
        else {
            printf("\nError: No word detected for removal.\n");
        }
    }
     
    else {
        printf("\nError: No string or sentence detected.\n");
    }

}// delete

//for replace
void str_replace() {

    int i, j = 0, k = 0, n = 0; 
    int length = 0;
    int replace_length = 0;
    int flag = 0, found = 0;

    char str[100], word[100], replacement[100];
    char updated[100] = {0};

    // Prompt for the input string
    printf("\t\t\t\t\tEnter a string or sentence: ");
    if (scanf(" %[^\n]", str) != EOF) {

        // Prompt for the word to replace
        printf("\n\t\t\t\t\tEnter the word you want to replace: ");
        if (scanf(" %[^\n]", word) != EOF) {

            // Prompt for the replacement word
            printf("\n\t\t\t\t\tEnter the replacement word: ");
            if (scanf(" %[^\n]", replacement) != EOF) {

                // Calculate the lengths of the word to replace and replacement
                while (word[length] != '\0') {
                length++;
                }

                while (replacement[replace_length] != '\0') {
                replace_length++;
                }

                for (i = 0; str[i] != '\0'; i++) {
                    k = i;

                    // Check if the current sequence matches the word to replace
                    while (str[i] == word[j] && str[i] != '\0' && word[j] != '\0') {
                        i++;
                        j++;

                        // If the entire word is matched
                        if (j == length && (str[i] == ' ' || str[i] == '\0')){
                            flag = 1;
                            found = 1;
                            break;
                        }
                    }

                    j = 0;

                    if (flag == 0){

                        i = k; // Reset if no match
                        updated[n++] = str[i];
                    } 
                    else {

                        // Copy the replacement word to the updated string
                        for (int r = 0; r < replace_length; r++) {
                            updated[n++] = replacement[r];
                        }

                        // Reset flag for the next match
                        flag = 0; 
                        i--; // process the remaining chars
                    }
                }

                // Terminate the updated string
                updated[n]='\0';

                printf("\n\t\t\t\t\t-------------------------------------------\n");

                if (found) {
                    printf("\n\t\t\t\t\tAfter Replacing Word In String: %s\n", updated);
                    printf("\n\t\t\t\t\t-------------------------------------------\n");
                } else {
                    printf("\n\t\t\t\t\tThe word was not found in the string.\n");
                    printf("\n\t\t\t\t\t-------------------------------------------\n");
                }

            } else {
                printf("\nError: No replacement word detected.\n");
            }

        } else {
            printf("\nError: No word detected for replacement.\n");
        }
    } else {
        printf("\nError: No string or sentence detected.\n");
    }

} // replace


//for selection sort
void selection_sort(){  
    int size;
    int count = 1;
    int result;

    while(1){
    printf("\t\t\t\t\tEnter the size of the array: ");
    result = scanf("%d", &size);

        if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }

    }

    // store the size of the array
    int arr[size];
    
    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Original Array: \n");

    for (int i = 0; i < size; i++){
        while(1){
        printf("\n\t\t\t\t\t\tElement %d: ", count);
        result = scanf("%d", &arr[i]);

         if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
        }
        count++;
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");
       
    printf("\e[1;1H\e[2J");
    printf("\n\n\t\t\t\t\tProcessing...");

    printf("\n\n\t\t\t\t\tArray: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // get max for comparing elemtns
    for (int i = 0; i < size - 1; i++){ 
        int maxIdx = i;
        for (int j = i + 1; j < size; j++){ 
            if (arr[j] < arr[maxIdx]) {
                maxIdx = j;
            }
        }
        // Swap elements
        int temp = arr[i]; 
        arr[i] = arr[maxIdx]; 
        arr[maxIdx] = temp;

        printf("\n\n");
        printf("\t\t\t\t\t\t=> ");
        sleep(1);
        // Print the array after each iteration
        for (int k = 0; k < size; k++){ 
            printf("%d ", arr[k]);
            sleep(1);
        }
        printf("\n");
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Final sorted array
    printf("\n\t\t\t\t\tSorted Array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
        sleep(1);
    }
    printf("\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");
} // selection sort

// for Insertion sort
void insertion_sort(){
    int size;
    int count = 1;
    int result;

    while(1){
    printf("\t\t\t\t\tEnter the size of the array: ");
    result = scanf("%d", &size);

     if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }
    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Original Array: \n");

    for (int i = 0; i < size; i++){

        while(1){
        printf("\n\t\t\t\t\t\tElement %d: ", count);
        result = scanf("%d", &arr[i]);

         if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
        }
        count++;
    }
    
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    printf("\e[1;1H\e[2J");
    printf("\n\n\t\t\t\t\tProcessing...");

    printf("\n\n\t\t\t\t\tArray: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    for (int i = 1; i < size; i++){
        int value = arr[i];
        int hole = i;
        while (hole > 0 && arr[hole - 1] > value){
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }
        arr[hole] = value;

        printf("\n");
        printf("\t\t\t\t\t\t\t=> ");
        // Print the array after each iteration
        for (int k = 0; k < size; k++){ 
            printf("%d ", arr[k]);
            sleep(1); 
        }
        printf("\n");
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Final sorted array
    printf("\n\t\t\t\t\tSorted Array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
        sleep(1);
    }
    printf("\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");
}// insertion sort

// for bubble sort
void bubble_sort(){
    int size;
    int count = 1;
    int result;

    while(1){
    printf("\t\t\t\t\tEnter the size of the array: ");
    result = scanf("%d", &size);

     if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }

    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Original Array: \n");

    for (int i = 0; i < size; i++){

        while(1){
        printf("\n\t\t\t\t\t\tElement %d: ", count);
        result = scanf("%d", &arr[i]);

         if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
        }
        count++;
    }
    
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    printf("\e[1;1H\e[2J");
    printf("\n\n\t\t\t\t\tProcessing...");

    printf("\n\n\t\t\t\t\tArray: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    for (int k = 0; k < size - 1; k++) {
        for (int i = 0; i < size - k - 1; i++){
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        printf("\n");
        printf("\t\t\t\t\t\t\t=> ");
        // Print the array after each iteration
        for (int k = 0; k < size; k++){ 
            printf("%d ", arr[k]);
            sleep(1); 
        }
        printf("\n");
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Final sorted array
    printf("\n\t\t\t\t\tSorted Array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
        sleep(1);
    }
    printf("\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n\n");

} // bubblw osrt

//counting sort

//bucket sort

//radix lsd

// for merge sort
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[]
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[]
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort_recursive(int arr[], int left, int right){
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort the first and second halves
        merge_sort_recursive(arr, left, mid);
        merge_sort_recursive(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);

        // Print the array after each merge
        printf("\n");
        printf("\t\t\t\t\t\t\t=> ");
        for (int i = left; i <= right; i++){
            printf("%d ", arr[i]);
            sleep(1);
        }
        printf("\n");
    }
}

void merge_sort(){
    int size;
    int count = 1;
    int result;

    while(1){
    printf("\t\t\t\t\tEnter the size of the array: ");
    result = scanf("%d", &size);

     if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }
    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Original Array: \n");

    for (int i = 0; i < size; i++){

        while(1){
        printf("\n\t\t\t\t\t\tElement %d: ", count);
        result = scanf("%d", &arr[i]);

         if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
        }
        count++;
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    printf("\e[1;1H\e[2J");
    printf("\n\n\t\t\t\t\tProcessing...");

    printf("\n\n\t\t\t\t\tArray: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // call to execute merge sort
    merge_sort_recursive(arr, 0, size - 1);

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Final sorted array
    printf("\n\t\t\t\t\tSorted Array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
        sleep(1);
    }
    printf("\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n");

}// merge sort

// for Quick sort
int partition(int arr[], int low, int high){
    int pivot = arr[high]; // make the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++){
        if (arr[j] <= pivot) {
            i++;

            // Swapping
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swapping
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quick_sort_recursive(int arr[], int low, int high){

    if (low < high) {

        int pi = partition(arr, low, high); // Partition index

        //left bound, rightbound and pivot
        printf("\n\n\t\t\t\t\tLeft index (Low): %d, Right index (High): %d\n", low + 1, high + 1);
        printf("\t\t\t\t\tPivot: %d (Position: %d)\n", arr[pi], pi + 1);

        //current arr
        printf("\t\t\t\t\tCurrent Segment Being Partitioned: ");

        for (int i = low; i <= high; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        //first half
        if (pi > low){

            printf("\n\t\t\t\t\tFirst Half (Left): ");
            for (int i = low; i < pi; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        //second half
        if (pi < high){
            
            printf("\n\t\t\t\t\tSecond Half (Right): ");
            for (int i = pi + 1; i <= high; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        // Recursively sort the elements before and after the partition
        quick_sort_recursive(arr, low, pi - 1);
        quick_sort_recursive(arr, pi + 1, high);

    }
}


void quick_sort(){
    int size;
    int count = 1;
    int result;

    while(1){
    printf("\t\t\t\t\tEnter the size of the array: ");
    result = scanf("%d", &size);

     if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
    }
    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Original Array: \n");

    for (int i = 0; i < size; i++){

        while(1){
        printf("\n\t\t\t\t\t\tElement %d: ", count);
        result = scanf("%d", &arr[i]);

         if (result != 1 || size <= 0) { // Check if the input is a positive integer

            while (getchar() != '\n'); // Clear the invalid input from buffer
            
            printf("\n\n\t\t\t\t\tInvalid input. Please enter a positive integer for the size.\n\n");

        } 
        else {
            break;
        }
        }
        count++;
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    printf("\e[1;1H\e[2J");
    printf("\n\n\t\t\t\t\tProcessing...");

    printf("\n\n\t\t\t\t\tOriginal Array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // call to execute quick sort
    quick_sort_recursive(arr, 0, size - 1);

    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Final sorted array
    printf("\n\t\t\t\t\tSorted Array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
        sleep(1);
    }
    printf("\n");
    printf("\n\t\t\t\t\t-------------------------------------------\n");

} // quick sort

//for linear search
void linear_search(){
        int size, key;
        int count = 1;

    printf("\t\t\t\t\tEnter the size of the array: ");
    scanf("%d", &size);

    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Array: \n");

    for (int i = 0; i < size; i++) {
        printf("\n\t\t\t\t\t\tIndex %d: ", count);
        scanf("%d", &arr[i]);
        count++;
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Get the element to search
    printf("\n\t\t\t\t\tEnter the element of the index you want to search(key): ");
    scanf("%d", &key);

    printf("\e[1;1H\e[2J");
    sleep(1);

    printf("\n\n\t\t\t\t\tSearching: %d\n", key);
    
    for (int j = 0; j < size; j++) {
        printf("\n\t\t\t\t\t\tindex[%d] = %d\n", j + 1, arr[j]);
        sleep(1);
        }

    // traverse to find the key
    for (int j = 0; j < size; j++){
        if (arr[j] == key){
            printf("\n\n\t\t\t\t\t    => We found key %d at index %d.\n", key, j + 1);
            return;
        }
    }

    printf("\n\n\t\t\t\t\t    => Key %d not found in the array.\n\n", key);
} // linear search

// for binaray search
void binary_search(){
    int size, key;
    int count = 1;

    printf("\t\t\t\t\tEnter the size of the array: ");
    scanf("%d", &size);

    // store the size of the array
    int arr[size];

    printf("\n\t\t\t\t\tEnter %d elements in ascending order!:\n", size);
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("Array: ");

    for (int i = 0; i < size; i++) {
        printf("\n\t\t\t\t\t\tIndex %d: ", count);
        scanf("%d", &arr[i]);
        count++;
    }
    printf("\n\t\t\t\t\t-------------------------------------------\n");

    // Get the element to search
    printf("\n\t\t\t\t\tEnter the elementof the index you want to search: ");
    scanf("%d", &key);

    //binary algo
    int first = 0;
    int last = size - 1;
    int mid = (first + last)/2;

    printf("\e[1;1H\e[2J");
    sleep(1);

    printf("\n\n\t\t\t\t\tSearching: %d\n", key);
    
    for (int j = 0; j < size; j++) {
        printf("\n\t\t\t\t\t\tindex[%d] = %d\n", j + 1, arr[j]);
        sleep(1);
        }

    //iterative binary using while loop
    while (first <= last){

        if (arr[mid] < key){
            first = mid + 1;
        }
        else if (arr[mid] == key){

            printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
            printf("\n\t\t\t\t\t    => We found key %d at index %d.\n", key, mid + 1);
            return;
        }
        else{
            last = mid - 1;
        }
        mid = (first + last)/2;

    } // end while loop
    printf("\n\t\t\t\t\t-------------------------------------------\n\n\t\t\t\t\t");
    printf("\n\t\t\t\t\t    => Key %d not found in the array.\n\n", key);

} // binary search
