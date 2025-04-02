// NACARIO, CARL JOSEPH P.
// BSCS 2-A

/* FINAL PROJECT - DATA STRUCTURES AND ALGORITHMS */


#include <stdio.h>
#include <stdlib.h> // for exit
#include <unistd.h> // for sleep
#include <string.h> // for printcentered

// Function declarations
void print_text();
int getValidOption();
void printCentered(const char* text);

// Global variable for maximum array size and string size
#define max_size 10
#define max_size_string 20

//function decleration used for linear DSA
int getArraySize();
void getArrayElements(int *arr, int size);
void displayArray(int *arr, int size);

void arr_traverse(int *arr, int size);
void arr_insert(int *arr, int *size);
void arr_del(int *arr, int *size);
void arr_search(int *arr, int *size);
void arr_update(int *arr, int *size);

void selection_sort(int *arr, int size);
void insertion_sort(int *arr, int size);
void bubble_sort(int *arr, int size);
void merge_sort(int *arr, int size);
void quick_sort(int *arr, int size);
void counting_sort(int *arr, int size);
void radix_lsd(int *arr, int size);
void bucket_sort(int *arr, int size);
void heap_sort(int *arr, int size);

//function declerations used for strings
void str_length();
void str_search_index();
void str_concat();
void str_compare();
void str_delete();
void str_replace();
void str_sort();
void str_arraySort();

// Node structure for the linked list
struct Node {
	int data;
	struct Node* next;
};

// Node structure for the doubly linked list
struct DNode {
	int data;
	struct DNode* next;
	struct DNode* prev;
};

// Node structure for the cicular linked list
struct CNode {
	int data;
	struct CNode* next;
};

// Node structure for the stack
struct SNode {
	int data;
	struct SNode* next;
};

//singly node
struct Stack {
	struct SNode* top;
};

//queue node
struct Qnode {
	int data;
	struct Qnode* next;
};

//tree node
struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};

//pointers
struct Qnode* front = NULL;
struct Qnode* rear = NULL;

//function decleration for singly
struct Node* createNode(int data);
void linked_Strav(struct Node* head);
void linked_Sinsert_front(struct Node** head);
void linked_insert_end(struct Node** head);
void linked_insert_pos(struct Node** head);
struct Node* linked_Sdel_front(struct Node** head); // Updated to match definition
struct Node* linked_Sdel_end(struct Node** head);   // Updated to match definition
struct Node* linked_Sdel_pos(struct Node** head);    // Updated to match definition
void linked_Supdate(struct Node* head);
int getLinkedListSize();
void getLinkedListElements(int* arr, int size);
void displayLinkedList(struct Node* head);

//function decleration for doubly
struct DNode* createDNode(int data);
void displayDoublyList(struct DNode* head);
void dlinked_insert_front(struct DNode** head);
void dlinked_insert_end(struct DNode** head);
void dlinked_insert_pos(struct DNode** head);
void dlinked_update(struct DNode* head);
struct DNode* dlinked_del_pos(struct DNode** head);
void displayDoublyLinkedList(struct DNode* head);
void traverseDoublyLinkedListReverse(struct DNode* head);

////function decleration for circular
struct CNode* createCNode(int data);
void circular_insert_front(struct CNode** head);
void circular_insert_end(struct CNode** head);
void circular_insert_pos(struct CNode** head);
struct CNode* circular_del_front(struct CNode** head);
struct CNode* circular_del_end(struct CNode** head);
struct CNode* circular_del_pos(struct CNode** head);
void circular_update(struct CNode* head);
void displayCircularLinkedList(struct CNode* head);
void traverseCircularLinkedList(struct CNode* head);

//function decleration for stacks
struct SNode* createSNode(int data);
void initializeStack(struct Stack* stack);
int isEmpty(struct Stack* stack);
void push(struct Stack* stack);
void pop(struct Stack* stack);
void peek(struct Stack* stack);
void display(struct Stack* stack);
void displayStack(struct Stack* stack);

////function decleration for queues
void enqueue(int);
int dequeue();
void displayQue();
struct Qnode* create(int);
int isEmptyQue();
void showQue();

//function decleration for trees
struct TreeNode* createtreeNode(int data);
struct TreeNode* insert(struct TreeNode* root, int data);
void inOrder(struct TreeNode* root);
void preOrder(struct TreeNode* root);
void postOrder(struct TreeNode* root);
struct TreeNode* search(struct TreeNode* root, int key);
void displayTree(struct TreeNode* root);

//function decleration for searching
void linear_search();
void binary_search();

int main() {

	//initialization for linear arrays so that it can be dynamic and be pass by value
	int size;
	int *arr = NULL;
	int isArrayInitialized = 0;

	//initialization of switch menus
	int main_menu;
	int linear_menu;
	int arr_menu;
	int sort_menu;
	int linked_menu;
	int linked_singly_menu;
	int linked_doubly_menu;
	int linked_circular_menu;
	int stacks_menu;
	int queues_menu;
	int non_linear_menu;
	int trees_menu;
	int tryAgain;
	int string_menu;
	int search_menu;

	while (1) {
		// Main menu screen
		printf("\e[1;1H\e[2J"); //this one is for clearing the screen can be use for both linux and windos OS for flexibility
		printf("\n\n");
		print_text(); // Welcome message
		printCentered("Press Enter to continue.\n");
		getchar();

		// Main menu
		printf("\e[1;1H\e[2J"); // Clears the screen
		sleep(1);
		printf("\n\n\n\n");
		printCentered("DATA STRUCTURES AND ALGORITHM\n");
		printf("\n\n");
		printCentered("Choose one of the Options below:");
		printf("\n\n");
		printf("\t\t\t 1 => Linear Data Structure\n");
		printf("\t\t\t 2 => Non-Linear Data Structure\n");
		printf("\t\t\t 3 => Strings\n");
		printf("\t\t\t 4 => Searching\n");
		printf("\t\t\t 5 => Quit\n\n\n");
		printCentered("Option:");
		main_menu = getValidOption(); //this getvalidOption is a error handling function

		switch (main_menu) {

		// Linear Data Structure
		case 1:
			while (1) {
				printf("\e[1;1H\e[2J");
				sleep(1);
				printf("\n\n\n\n");
				printCentered("LINEAR DATA STRUCTURES\n");
				printCentered("Choose one of the Options below:");
				printf("\n\n");
				printf("\t\t\t 1 => Arrays\n");
				printf("\t\t\t 2 => Linked List\n");
				printf("\t\t\t 3 => Stacks\n");
				printf("\t\t\t 4 => Queues\n");
				printf("\t\t\t 5 => Exit\n\n\n");
				printCentered("Option: ");
				linear_menu = getValidOption();

				switch (linear_menu) {
				// arrays
				case 1:

					// Ask for array size and elements
					size = getArraySize();
					arr = (int *)malloc(size * sizeof(int));
					if (!arr) {
						printCentered("Memory allocation failed. Exiting...\n");
						exit(1);
					}
					getArrayElements(arr, size);
					isArrayInitialized = 1; // Indicate that the array is initialized

					// Array operation menu
					while (isArrayInitialized) {
						printf("\e[1;1H\e[2J");

						printf("\t\t   Current Array: ");
						for (int i = 0; i < size; i++) {
							printf("%d ", arr[i]);
						}

						sleep(1);
						printf("\n\n\n\n\n");
						printCentered("ARRAY OPERATIONS\n");
						printCentered("Choose one of the Operations below:");
						printf("\n\n");
						printf("\t\t\t 1 => Traverse\n");
						printf("\t\t\t 2 => Insertion\n");
						printf("\t\t\t 3 => Deletion\n");
						printf("\t\t\t 4 => Search\n");
						printf("\t\t\t 5 => Update\n");
						printf("\t\t\t 6 => Sort\n");
						printf("\t\t\t 7 => Exit\n\n\n");
						printCentered("Option: ");
						arr_menu = getValidOption();

						switch (arr_menu) {
						 

						//insert
						case 2:
							arr_insert(arr, &size);

							if (isArrayInitialized) {
								printf("\n");

								printCentered("\nDo you want to try another operation on the array? (1 = Yes, 0 = No): ");
								scanf("%d", &tryAgain);

								if (tryAgain == 0) {
									free(arr);
									isArrayInitialized = 0;
								}
							}
							break;

						//delete
						case 3:
							arr_del(arr, &size);

							if (isArrayInitialized) {
								printf("\n");

								printCentered("\nDo you want to try another operation on the array? (1 = Yes, 0 = No): ");
								scanf("%d", &tryAgain);

								if (tryAgain == 0) {
									free(arr);
									isArrayInitialized = 0;
								}
							}
							break;

						//search
						case 4:
							arr_search(arr, &size);

							if (isArrayInitialized) {
								printf("\n");

								printCentered("\nDo you want to try another operation on the array? (1 = Yes, 0 = No): ");
								scanf("%d", &tryAgain);

								if (tryAgain == 0) {
									free(arr);
									isArrayInitialized = 0;
								}
							}
							break;

						//update
						case 5:
							arr_update(arr, &size);

							if (isArrayInitialized) {
								printf("\n");

								printCentered("Do you want to try another operation on the array? (1 = Yes, 0 = No): ");
								scanf("%d", &tryAgain);

								if (tryAgain == 0) {
									free(arr);
									isArrayInitialized = 0;
								}
							}
							break;

						//sorting
						case 6:
							while (1) {
								printf("\e[1;1H\e[2J");

								printf("\t\t   Current Array: ");
								for (int i = 0; i < size; i++) {
									printf("%d ", arr[i]);
								}

								sleep(1);
								printf("\n\n\n\n");
								printCentered("Sortings\n\n");
								printCentered("Choose one of the Options below:\n\n");
								printf("\t\t\t 1 => Selection\n");
								printf("\t\t\t 2 => Insertion\n");
								printf("\t\t\t 3 => Bubble\n");
								printf("\t\t\t 4 => Merge\n");
								printf("\t\t\t 5 => Quicksort\n");
								printf("\t\t\t 6 => Counting sort\n");
								printf("\t\t\t 7 => Radix lsd\n");
								printf("\t\t\t 8 => Bucket sort\n");
								printf("\t\t\t 9 => Heap sort\n");
								printf("\t\t\t 10 => Exit\n\n");
								printCentered("Option: ");
								sort_menu = getValidOption();

								switch (sort_menu) {
								//selection
								case 1:
								{
									// Create a space to copy the original array
									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i]; //copying the array
									}

									selection_sort(arrayCopy, size); //calling selection sort
									free(arrayCopy); //free the copied array
									break;
								}

								//insertion
								case 2:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									insertion_sort(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//bubble
								case 3:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									bubble_sort(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//merge
								case 4:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									merge_sort(arrayCopy, size);
									free(arrayCopy); // Free the copied array
									break;
								}

								//quick
								case 5:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									quick_sort(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//counting
								case 6:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									counting_sort(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//radix
								case 7:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									radix_lsd(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//bucket
								case 8:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									bucket_sort(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//heap
								case 9:
								{

									int *arrayCopy = (int *)malloc(size * sizeof(int));

									for (int i = 0; i < size; i++) {
										arrayCopy[i] = arr[i];
									}

									heap_sort(arrayCopy, size);
									free(arrayCopy);
									break;
								}

								//exit
								case 10:
								{
									printf("\e[1;1H\e[2J");
									sleep(1);
									break;
								}

								default:
									printCentered("Not an option, Try Again\n");
									sleep(1);
									continue; //the use po of continue is to skip the error handling and the program redisplays the sort menu to the user
								}

								//if the user selected option 10 then break out of the while loop
								if (sort_menu == 10) {
									break;
								}

								//ask if the user wants to try another operation or return to the Linear menu
								printf("\n");
								printCentered("Do you want to try another operation on the sorting array? (1 = Yes, 0 = No): ");
								scanf("%d", &tryAgain);

								if (tryAgain == 0) {
									free(arr); //free the array before going back to the linear menu
									arr = NULL; // Set arr to NULL to avoid dangling pointer
									isArrayInitialized = 0; //exit the loop and go back to Linear menu
									break;
								}
							}
							break;

						//exit
						case 7:
							free(arr); //free the array
							arr = NULL;
							isArrayInitialized = 0; //end operations
							break;

						default:
							printCentered("Invalid option. Please try again.\n");
							sleep(1);
							break;
						}

						if (arr_menu == 7) {
							break;
						}

					}
					break;

				//linked list
				case 2:
					while(1) {
						printf("\e[1;1H\e[2J");
						sleep(1);
						printf("\n\n\n\n\n\n");
						printCentered("Linked List\n\n");
						printCentered("Choose one of the Options below:\n\n");
						printf("\t\t\t 1 => Singly Linked List\n");
						printf("\t\t\t 2 => Doubly Linked List\n");
						printf("\t\t\t 3 => Circular Linked List\n");
						printf("\t\t\t 4 => Exit\n\n\n");
						printCentered("Option: ");
						linked_menu = getValidOption();

						switch(linked_menu) {

						//singly
						case 1:
						{
							printf("\e[1;1H\e[2J");
							sleep(1);

							//initialize head of the linked list
							struct Node* head = NULL;

							int size = getLinkedListSize(); //getting the size of linked list
							int* elements = (int*)malloc(size * sizeof(int)); //create space for elements(allocate memory)

							if (!elements) {
								printf("Memory allocation failed. Exiting...\n");
								exit(1);
							}

							getLinkedListElements(elements, size); //calling get the elements of the linked list

							//create the linked list
							for (int i = 0; i < size; i++) {
								struct Node* newNode = createNode(elements[i]);

								if (!head) {
									head = newNode; // Initialize head
								}
								else {
									struct Node* temp = head;
									while (temp->next) {
										temp = temp->next; //traverse to the end of the list
									}
									temp->next = newNode; //link the new node
								}
							}

							//free the allocated memory for elements
							free(elements);
							elements = NULL;

							while(1) {
								printf("\e[1;1H\e[2J");
								sleep(1);
								//call to show current elements in the linked list
								displayLinkedList(head);
								printf("\n\n\n");
								printCentered("Singly Linked List\n\n");
								printCentered("Choose one of the Options below:\n\n");
								printf("\t\t\t 1 => Traverse\n");
								printf("\t\t\t 2 => Insert at start\n");
								printf("\t\t\t 3 => Insert at end\n");
								printf("\t\t\t 4 => Insert at any position\n");
								printf("\t\t\t 5 => Delete at start\n");
								printf("\t\t\t 6 => Delete at end\n");
								printf("\t\t\t 7 => Delete at any position\n");
								printf("\t\t\t 8 => Update\n");
								printf("\t\t\t 9 => Exit\n\n");
								printCentered("Option: ");
								linked_singly_menu = getValidOption();

								switch(linked_singly_menu) {

								//traverse
								case 1:
									printf("\e[1;1H\e[2J");
									sleep(1);
									linked_Strav(head);
									break;

								//insert start
								case 2:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_Sinsert_front(&head);
									break;

								//insert end
								case 3:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_insert_end(&head);
									break;

								//insert in any position
								case 4:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_insert_pos(&head);
									break;

								//delete start
								case 5:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_Sdel_front(&head);
									break;

								//delete end
								case 6:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_Sdel_end(&head);
									break;

								//delete in any position
								case 7:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_Sdel_pos(&head);
									break;

								//update
								case 8:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayLinkedList(head);
									linked_Supdate(head);
									break;

								//exit
								case 9:
									while (head) {
										struct Node* toDelete = head; //creates a temporary pointer to hold cuurrnent head
										head = head->next; //head updates to point to the next node
										free(toDelete); //free the allocated memory from head
									}

									printf("\e[1;1H\e[2J");
									sleep(1);
									break;

								default:
									printf("Not an option, Try Again\n");
									sleep(1);
									break;

								}

								if (linked_singly_menu == 9) {
									break;
								}

							}
						}
						break;

						//doubly
						case 2:
						{
							printf("\e[1;1H\e[2J");
							sleep(1);

							//initialize the head
							struct DNode* head = NULL;

							int size = getLinkedListSize();
							int* elements = (int*)malloc(size * sizeof(int));

							if (!elements) {
								printf("Memory allocation failed. Exiting...\n");
								exit(1);
							}

							getLinkedListElements(elements, size);

							for (int i = 0; i < size; i++) {
								struct DNode* newNode = createDNode(elements[i]);

								if (!head) {
									head = newNode;
								}
								else {
									struct DNode* temp = head;
									while (temp->next) {
										temp = temp->next;
									}
									temp->next = newNode; //link the new node and
									newNode->prev = temp; //link the new node's prev to the last node
								}
							}

							free(elements);
							elements = NULL;

							while(1) {
								printf("\e[1;1H\e[2J");
								sleep(1);
								//call to show current elements in the linked list
								displayDoublyLinkedList(head);
								printf("\n\n\n");
								printCentered("Doubly Linked List\n\n");
								printCentered("Choose one of the Options below:\n\n");
								printf("\t\t\t 1 => Dispaly\n");
								printf("\t\t\t 2 => Insert at start\n");
								printf("\t\t\t 3 => Insert at end\n");
								printf("\t\t\t 4 => Insert at any position\n");
								printf("\t\t\t 5 => Delete at any position\n");
								printf("\t\t\t 6 => Update\n");
								printf("\t\t\t 7 => Traverse in reverse\n");
								printf("\t\t\t 8 => Exit\n\n");
								printCentered("Option: ");
								linked_doubly_menu = getValidOption();

								switch(linked_doubly_menu) {

								//show/display
								case 1:
									printf("\e[1;1H\e[2J");
									sleep(1);
									displayDoublyList(head);
									break;

								//insert start
								case 2:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayDoublyLinkedList(head);
									dlinked_insert_front(&head);
									break;

								//insert end
								case 3:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayDoublyLinkedList(head);
									dlinked_insert_end(&head);
									break;

								//insert at any position
								case 4:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayDoublyLinkedList(head);
									dlinked_insert_pos(&head);
									break;

								//delete in any position
								case 5:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayDoublyLinkedList(head);
									dlinked_del_pos(&head);
									break;

								//update
								case 6:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayDoublyLinkedList(head);
									dlinked_update(head);
									break;

								//traverse in reverse
								case 7:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayDoublyLinkedList(head);
									traverseDoublyLinkedListReverse(head);
									break;

								//exit
								case 8:
									while (head) {
										struct DNode* toDelete = head;
										head = head->next;
										free(toDelete); //free the allocated memory from head
									}

									printf("\e[1;1H\e[2J");
									sleep(1);
									break;

								default:
									printf("Not an option, Try Again\n");
									sleep(1);
									break;
								}
								if (linked_doubly_menu == 8) {
									break;
								}
							}
						}
						break;

						//circular
						case 3:
						{
							printf("\e[1;1H\e[2J");
							sleep(1);

							//initialize the head
							struct CNode* head = NULL;


							int size = getLinkedListSize();
							int* elements = (int*)malloc(size * sizeof(int));

							if (!elements) {
								printf("Memory allocation failed. Exiting...\n");
								exit(1);
							}

							getLinkedListElements(elements, size);


							for (int i = 0; i < size; i++) {
								struct CNode* newNode = createCNode(elements[i]);

								if (!head) {
									head = newNode; //initialize head if the list is empty
								}
								else {
									struct CNode* temp = head;
									// Traverse to the last node
									while (temp->next != head) {
										temp = temp->next;
									}
									temp->next = newNode;
								}
								newNode->next = head; //link the new node to the head to maintain circularity
							}

							free(elements);
							elements = NULL;

							while(1) {
								printf("\e[1;1H\e[2J");
								sleep(1);
								//call to show current elements in the linked list
								displayCircularLinkedList(head);
								printf("\n\n\n");
								printCentered("Circular Linked List\n\n");
								printCentered("Choose one of the Options below:\n\n");
								printf("\t\t\t 1 => Insert at start\n");
								printf("\t\t\t 2 => Insert at end\n");
								printf("\t\t\t 3 => Insert at any position\n");
								printf("\t\t\t 4 => Delete at start\n");
								printf("\t\t\t 5 => Delete at end\n");
								printf("\t\t\t 6 => Delete at any position\n");
								printf("\t\t\t 7 => Update\n");
								printf("\t\t\t 8 => Traverse in circular\n");
								printf("\t\t\t 9 => Exit\n\n");
								printCentered("Option: ");
								linked_circular_menu = getValidOption();

								switch(linked_circular_menu) {

								//insert front
								case 1:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_insert_front(&head);
									break;

								//insert end
								case 2:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_insert_end(&head);
									break;

								//insert at any position
								case 3:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_insert_pos(&head);
									break;

								//delete front
								case 4:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_del_front(&head);
									break;

								//delete end
								case 5:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_del_end(&head);
									break;

								//delete at any postion
								case 6:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_del_pos(&head);
									break;

								//update
								case 7:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									circular_update(head);
									break;

								//traverse in circular
								case 8:
									printf("\e[1;1H\e[2J");
									sleep(1);
									printf("\n\n");
									displayCircularLinkedList(head);
									traverseCircularLinkedList(head);
									break;

								//exit
								case 9:
									if (head != NULL) {
										struct CNode* current = head;
										struct CNode* toDelete;

										//free the circular linked list
										do {
											toDelete = current;
											current = current->next;
											free(toDelete);
										} while (current != head); //continue until we loop back to the head

										head = NULL; //set head to NULL after freeing
									}

									printf("\e[1;1H\e[2J");
									sleep(1);
									break;

								default:
									printf("Not an option, Try Again\n");
									sleep(1);
									break;
								}

								if(linked_circular_menu == 9) {
									break;
								}
							}
						}
						break;

						//exit
						case 4:
							printf("\e[1;1H\e[2J");
							sleep(.5);
							break;

						default:
							printf("Not an option, Try Again\n");
							sleep(1);
							break;

						}// linked menu

						if (linked_menu == 4) {
							break;
						}
					}
					break;

				//stacks
				case 3:
				{
					//declares a variable stack of type struct Stack.
					struct Stack stack;
					initializeStack(&stack); //initializes the stack
					while(1) {
						printf("\e[1;1H\e[2J");
						sleep(1);
						//call to show current elements in the stacks
						displayStack(&stack);
						printf("\n\n\n\n");
						printCentered("Stacks\n\n");
						printCentered("Choose one of the Options below:\n\n");
						printf("\t\t\t 1 => Push\n");
						printf("\t\t\t 2 => Pop\n");
						printf("\t\t\t 3 => Peek\n");
						printf("\t\t\t 4 => Display\n");
						printf("\t\t\t 5 => Exit\n\n");
						printCentered("Option: ");
						stacks_menu = getValidOption();

						switch(stacks_menu) {

						//push
						case 1:
							printf("\e[1;1H\e[2J");
							sleep(1);
							push(&stack);
							break;

						//pop
						case 2:
							printf("\e[1;1H\e[2J");
							sleep(1);
							pop(&stack);
							break;

						//peek
						case 3:
							printf("\e[1;1H\e[2J");
							sleep(1);
							peek(&stack);
							break;

						//display
						case 4:
							printf("\e[1;1H\e[2J");
							sleep(1);
							display(&stack);
							break;

						//exit
						case 5:
							printf("\e[1;1H\e[2J");
							sleep(1);
							break;

						default:
							printf("Not an option, Try Again\n");
							sleep(1);
							break;
						}

						if(stacks_menu == 5) {
							break;
						}
					}
				}
				break;

				//queues
				case 4:
				{
					int user_choice, data; //stroes user choice
					char user_active = 'Y';
					while(user_active == 'Y' || user_active == 'y') {
						printf("\e[1;1H\e[2J");
						sleep(1);
						showQue();
						printf("\n\n\n\n");
						printCentered("Queues\n\n");
						printCentered("Choose one of the Options below:\n\n");
						printf("\t\t\t 1 => Enqueue\n");
						printf("\t\t\t 2 => Dequeue\n");
						printf("\t\t\t 3 => Display\n");
						printf("\t\t\t 4 => Exit\n\n");
						printCentered("Option: ");
						queues_menu = getValidOption();

						switch (queues_menu)
						{
						case 1:
							printf("\e[1;1H\e[2J");
							sleep(1);
							printf("\n\n\n\n\n\n");
							printCentered("Enter Data: ");
							data = getValidOption();
							enqueue(data);
							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin); //the use of this is for clearing the input buffer
							scanf(" %c", &user_active);
							break;

						case 2:
							printf("\e[1;1H\e[2J");
							sleep(1);
							if (!isEmptyQue()) {
								data = dequeue();
								printf("\n\n\n");
								printf("\n\t\t\t\t* %d was removed!\n", data);
							} else {
								printf("\n\n\n\n\n\n");
								printCentered("Queue is Empty!\n");
							}
							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 3:
							printf("\e[1;1H\e[2J");
							sleep(1);
							displayQue();
							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 4:
							printf("\e[1;1H\e[2J");
							sleep(1);
							break;

						default:
							printf("Not an option, Try Again\n");
							sleep(1);
							break;
						}

						if (queues_menu == 4) {
							break;
						}
					}
				}
				break;

				case 5:
					printf("\e[1;1H\e[2J");
					sleep(1);
					break;

				default:
					printf("\n");
					printCentered("Not an option, Try Again\n");
					sleep(1);
					break;
				}
				if (linear_menu == 5) {
					break;
				}


			}
			break;

		case 2:
			while(1) {
				printf("\e[1;1H\e[2J");
				sleep(1);
				printf("\n\n\n\n\n");
				printCentered("Non-Linear DSA\n\n");
				printf("\t\t\t 1 => Binary Tree\n");
				printf("\t\t\t 2 => Exit\n\n");
				printCentered("Option: ");
				non_linear_menu = getValidOption();

				switch(non_linear_menu) {

				case 1:
				{
					//initilize the treenode and set to null
					struct TreeNode* root = NULL;
					int data;
					char user_active = 'Y';
					while(user_active == 'Y' || user_active == 'y') {
						printf("\e[1;1H\e[2J");
						printf("\n\n");
						printf("\n\t\t    Tree elements: ");
						inOrder(root);
						printf("\n\n\n\n");
						printCentered("Binary Tree Operations\n\n");
						printf("\t\t\t 1. Insert Node\n");
						printf("\t\t\t 2. In-Order Traversal\n");
						printf("\t\t\t 3. Pre-Order Traversal\n");
						printf("\t\t\t 4. Post-Order Traversal\n");
						printf("\t\t\t 5. Search Node\n");
						printf("\t\t\t 6. Display Tree Structure\n");
						printf("\t\t\t 7. Exit\n\n");
						printCentered("Choose an option: ");
						trees_menu = getValidOption();

						switch(trees_menu) {
						case 1:
							printf("\e[1;1H\e[2J");
							printf("\n\n\n\n");
							printCentered("Enter value to insert: ");
							data = getValidOption();
							root = insert(root, data);

							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 2:
							printf("\e[1;1H\e[2J");
							printf("\n\n\n\n");
							printCentered("In-Order Traversal: ");
							inOrder(root);
							printf("\n");


							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 3:
							printf("\e[1;1H\e[2J");
							printf("\n\n\n\n");
							printCentered("Pre-Order Traversal: ");
							preOrder(root);
							printf("\n");

							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 4:
							printf("\e[1;1H\e[2J");
							printf("\n\n\n\n");
							printCentered("Post-Order Traversal: ");
							postOrder(root);
							printf("\n");

							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 5:
							printf("\e[1;1H\e[2J");
							printf("\n\n\n\n");
							printCentered("Enter value to search: ");
							data = getValidOption();

							struct TreeNode* foundNode = search(root, data);

							if (foundNode) {
								printf("\n\t\t\tNode %d found in the tree.\n", foundNode->data);
							} else {
								printf("\n\t\t\tNode %d not found in the tree.\n", data);
							}

							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 6:
							printf("\e[1;1H\e[2J");
							printf("\n\n\n\n");
							printCentered("Tree Structure:\n");
							displayTree(root);


							printf("\n\n\n");
							printCentered("Do You want to continue? y/Y for (yes) or n/N for (no)): ");
							fflush(stdin);
							scanf(" %c", &user_active);
							break;

						case 7:
							printf("\e[1;1H\e[2J"); //clears the screen in the terminal
							sleep(1);
							break;

						default:
							printf("Invalid option. Please try again.\n");
							sleep(2);
							break;
						}

						if (trees_menu == 7) {
							break;

						}
					}
				}
				break;

				case 2:
					printf("\e[1;1H\e[2J"); //clears the screen in the terminal
					sleep(1);
					break;

				default:
					printCentered("Invalid option. Please try again.\n");
					sleep(1);
					break;


				}

				if (non_linear_menu == 2) {
					break;
				}

			}
			break;

		// Strings
		case 3:
			while(1) {
				printf("\e[1;1H\e[2J"); //clears the screen in the terminal
				sleep(1);
				printf("\n\n\n\n\n");
				printCentered("Strings\n\n");
				printCentered("Choose one of the Options below:\n\n");
				printf("\t\t\t 1 => String Length\n");
				printf("\t\t\t 2 => Search Index\n");
				printf("\t\t\t 3 => Concatenate\n");
				printf("\t\t\t 4 => Compare\n");
				printf("\t\t\t 5 => Delete\n");
				printf("\t\t\t 6 => Replace\n");
				printf("\t\t\t 7 => Sort a string\n");
				printf("\t\t\t 8 => Sort an array\n");
				printf("\t\t\t 9 => Exit\n\n");
				printCentered("Option: ");
				string_menu = getValidOption();

				switch(string_menu) {

				//length
				case 1:
					printf("\e[1;1H\e[2J");
					sleep(1);
					str_length();
					break;

				// search
				case 2:
					printf("\e[1;1H\e[2J");
					sleep(1);
					str_search_index();
					break;

				// concatenation
				case 3:
					printf("\e[1;1H\e[2J");
					sleep(1);
					str_concat();
					break;

				// compare
				case 4:
					printf("\e[1;1H\e[2J");
					sleep(1);
					str_compare();
					break;

				// delete
				case 5:
					printf("\e[1;1H\e[2J");
					sleep(1);
					str_delete();
					break;

				// replace
				case 6:
					printf("\e[1;1H\e[2J");
					sleep(1);
					str_replace();
					break;

				// sort a string
				case 7:
					printf("\e[1;1H\e[2J");
					sleep(1);

					str_sort();
					break;

				// array of string sort
				case 8:
					printf("\e[1;1H\e[2J");
					sleep(1);


					str_arraySort();
					break;

				case 9:
					printf("\e[1;1H\e[2J");
					sleep(1);
					break;

				default:
					printf("Not an option, Try Again\n");
					sleep(1);
					break;

				}// end of sring menu

				if (string_menu == 9) {
					break;
				}// flag for while loop to try current screeen again

			}// while loop
			break;

		case 4:
			while(1) {
				printf("\e[1;1H\e[2J"); // clears the screen in the terminal
				sleep(1);
				printf("\n\n\n\n");
				printCentered("Searching\n\n");
				printCentered("Choose one of the Options below:\n\n");
				printf("\t\t\t 1 => Linear Search\n");
				printf("\t\t\t 2 => Binary Search\n");
				printf("\t\t\t 3 => Exit\n\n");
				printCentered("Option: ");
				search_menu = getValidOption();

				switch(search_menu) {

				//linear search
				case 1:
					printf("\e[1;1H\e[2J");
					sleep(1);
					printf("\n\n\n");
					linear_search();
					break;
				// binary search
				case 2:
					printf("\e[1;1H\e[2J");
					sleep(1);
					printf("\n\n\n");
					binary_search();
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
				if (search_menu == 3) {
					break;
				}// flag for while loop to try current screeen again
			}//while loop
			break;

		case 5:
			printf("\e[1;1H\e[2J");
			sleep(1);
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printCentered("Quitting the program. Thank You and Goodbye!\n");
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			sleep(2);
			printf("\e[1;1H\e[2J");
			exit(0);
			break;

		default:
			printf("\n");
			printCentered("Not an option, Try Again\n");
			sleep(1);
			break;
		}

		if (main_menu == 5) {
			break;
		}
	}
	return 0;
}

// Welcome message (ASCII Art)
void print_text() {
	printf("\n\n\n");
	printCentered("  __| |_____________________________________________| |__\n");
	printCentered("__   _____________________________________________   __\n");
	printCentered("  | |                                             | |  \n");
	printCentered("  | | WELCOME TO DATA STRUCTURES AND ALGORITHM!!! | |  \n");
	printCentered("__| |_____________________________________________| |__\n");
	printCentered("__   _____________________________________________   __\n");
	printCentered("   | |                                             | |  \n\n");
}

int getValidOption() {
	int option;
	char c; // To check for leftover characters in the buffer

	// Loop until valid input is entered
	while (1) {
		if (scanf("%d", &option) == 1) {
			return option; // Valid integer input
		} else {
			// Clear invalid input
			while ((c = getchar()) != '\n' && c != EOF);

			// Display error and refresh screen
			printf("\n");
			printCentered("Invalid input. Please enter a valid option: ");
			sleep(1);
		}
	}
}

// Function to print centered text in the console
void printCentered(const char* text) {
	int standardConsolewidth = 80; // Adjust to match your console width
	int textLength = strlen(text);
	int padding = (standardConsolewidth - textLength) / 2;

	for (int i = 0; i < padding; i++) {
		printf(" ");
	}
	printf(" %s ", text);
}

// Function to get valid array size
int getArraySize() {
	int size, result;
	while (1) {
		printf("\e[1;1H\e[2J");
		printf("\n\n");
		printCentered("Please enter a size of the array not greater than 10: ");
		result = scanf("%d", &size);
		if (result != 1 || size <= 0) {
			while (getchar() != '\n');
			printf("\n");
			printCentered("Invalid input. Please enter a positive integer for the size.\n\n");
			sleep(3);
		} 
		else if(size > max_size){
			printf("\n");
			printCentered("Invalid input!!! Please enter a size not greater than 10.\n\n");
			sleep(3);
		}
		else {
			break;
		}
	}
	return size;
}

// Function to input array elements
void getArrayElements(int *arr, int size) {
	int i;
	printf("\n\n");
	printf("\t\t\t  Enter %d elements:\n", size);
	printf("\n");
	printCentered("-------------------------------------------\n\n");
	printf("\t\t\t  Array: \n");
	for (i = 0; i < size; i++) {
		while (1) {
			printf("\n");
			printf("\t\t\t\tIndex [%d]: ", i + 1);
			if (scanf("%d", &arr[i]) != 1) {
				while (getchar() != '\n');
				printf("\n");
				printCentered("Invalid input. Please enter a valid integer.\n\n");
			} else {
				break;
			}
		}
	}
}

// Function to display the array elements
void displayArray(int *arr, int size) {

	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n");
	printCentered("The array elements are:\n\n");
	printCentered("-------------------------------------------\n\n");
	for (int i = 0; i < size; i++) {
		printf("\t\t\t\t  Index [%d]: %d \n\n", i + 1, arr[i]);
		sleep(1);
	}
}


/* ==========================================================*/
/* ======================= ARRAYS ===========================*/
/* ==========================================================*/

void arr_traverse(int *arr, int size) {
	printf("\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	displayArray(arr, size);
}

void arr_insert(int *arr, int *size) {
	int i, element, position, result;

	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");

	for (i = 0; i < *size; i++) {
		printf("%d ", arr[i]);  // Access arr directly
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	// Get the element to insert and the position
	while (1) {
		printf("\n\n");
		printCentered("Enter the element to insert: ");
		result = scanf("%d", &element);

		if (result != 1) { // Check if the input is a valid integer
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printf("\n");
			printCentered("Invalid input.\n");
		} else {
			break;
		}
	}

	while (1) {
		printf("\n\t  Enter the position or index (1 to %d) to insert the element: ", *size + 1);
		result = scanf("%d", &position);

		if (result != 1 || position < 1 || position > *size + 1) { // Check if the input is valid
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printf("\n");
			printCentered("Invalid input.\n");
		} else {
			break;
		}
	}

	// Shift elements to the right to make space for the new element
	for (i = *size; i >= position; i--) {
		arr[i] = arr[i - 1]; // Access arr directly without dereferencing
	}

	// Insert the new element
	arr[position - 1] = element; // Access arr directly
	(*size)++; // Increase the size of the array

	printf("\e[1;1H\e[2J"); // Clears the screen
	sleep(1);

	printf("\n\n\t\t  Updated Array: \n\n");
	printCentered("-------------------------------------------\n\n");

	int upd_count = 1;

	for (i = 0; i < *size; i++) {
		printf("\t\t\t\tIndex [%d]: %d \n\n", upd_count, arr[i]); // Access arr directly
		sleep(1);
		upd_count++;
	}

	printCentered("-------------------------------------------\n");

	printf("\n\t\t  The element %d is successfully inserted at index %d.\n", element, position);
}

void arr_del(int *arr, int *size) {
	int element, key = 0, result, i;

	printf("\e[1;1H\e[2J"); // Clears the screen
	sleep(1);

	printf("\n\n\t\t   Current Array: ");

	for (i = 0; i < *size; i++) {
		printf("%d ", arr[i]);  // Access arr directly
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	// Get the element to delete
	while (1) {
		printf("\n\n");
		printCentered("Enter the element you want to delete: ");
		result = scanf("%d", &element);

		if (result != 1) { // Check if the input is a valid integer
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printf("\n");
			printCentered("Invalid input.\n");
		} else {
			break;
		}
	}

	// Traverse to find the key (element to delete)
	key = 0;  // Reset key to 0 for each deletion attempt
	for (i = 0; i < *size; i++) {
		if (arr[i] == element) {
			key = 1;  // Element found
			break;
		}
	}

	// Clear screen for better display (optional)
	printf("\e[1;1H\e[2J");
	sleep(1);

	// If the element is found, delete it by shifting the elements
	if (key) {
		for (int j = i; j < *size - 1; j++) {
			arr[j] = arr[j + 1]; // Shift elements to the left
		}

		// Decrease the size of the array
		(*size)--;

		printf("\n\n\t\t\t   === Element %d is deleted. ===\n", element);
	} else {
		printf("\n\n\t\t\t   ==== Element %d not found in the array. ====\n", element);
	}

	printf("\n");
	// Display the updated array
	printf("\n\n\t\t  Updated Array: \n\n");
	printCentered("-------------------------------------------\n\n");

	int upd_count = 1;
	for (i = 0; i < *size; i++) {
		printf("\t\t\t\t   Index [%d]: %d \n\n", upd_count, arr[i]);
		sleep(1);
		upd_count++;
	}

	printCentered("-------------------------------------------\n");
}

void arr_search(int *arr, int *size) {
	int key = 0, result;
	int i;

	printf("\e[1;1H\e[2J"); // Clears the screen
	sleep(1);

	printf("\n\n\t\t   Current Array: ");

	for (i = 0; i < *size; i++) {
		printf("%d ", arr[i]);  // Access arr directly
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	// Get the element to search
	while(1) {

		printf("\n");
		printCentered("Enter the element of the index you want to search: ");
		result = scanf("%d", &key);

		if (result != 1) { // Check if the input is a valid integer

			while (getchar() != '\n'); // Clear the invalid input from buffer
			printf("\n");
			printCentered("Invalid input.\n");
		}
		else {
			break;
		}

	}

	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\t\t   Searching: %d\n\n", key);

	for (int j = 0; j < *size; j++) {
		printf("\t\t\t\t   Index[%d] = %d\n\n", j + 1, arr[j]);
		sleep(1);
	}

	// traverse to find the key
	for (int j = 0; j < *size; j++) {
		if (arr[j] == key) {
			printf("\n\n\t\t\t   => We found key %d at index %d.\n", key, j + 1);
			return;
		}
	}

	printf("\\n\n\t\t\t   => Key %d not found in the array.\n\n", key);

}

void arr_update(int *arr, int *size) {
	int new_val, result, index;
	int i;

	printf("\e[1;1H\e[2J"); // Clears the screen
	sleep(1);

	printf("\n\n\t\t   Current Array: ");

	for (i = 0; i < *size; i++) {
		printf("%d ", arr[i]);  // Access arr directly
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	while (1) {
		// Prompt the user to enter the index to update
		printf("\n\t\t  Enter the position of the element (1 to %d) to update: ", *size);
		result = scanf("%d", &index);

		if (result != 1) { // Check if the input is a valid integer
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printf("\n");
			printCentered("Invalid input.\n");
		}
		else if (index < 1 || index > *size) { // Validate index range
			printCentered("Invalid index. Please try again.\n");
		}
		else {
			break; // Valid index
		}
	}

	while (1) {
		// Prompt the user to enter the new value for the specified index
		printf("\n\t\t  Enter the new value for index %d: ", index);
		result = scanf("%d", &new_val);

		if (result != 1) { // Check if the input is a valid integer
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printf("\n");
			printCentered("Invalid input. Please enter an integer.\n");
		}
		else {
			break; // Valid input
		}
	}

	// Update the value at the specified index
	arr[index - 1] = new_val;

	printf("\e[1;1H\e[2J");
	sleep(1);

	// Display the updated array
	printf("\n\n\t\t  Updated Array: \n\n");
	printCentered("-------------------------------------------\n\n");

	int upd_count = 1;

	for (i = 0; i < *size; i++) {
		printf("\t\t\t\t   Index [%d]: %d \n\n", upd_count, arr[i]);
		sleep(1);
		upd_count++;
	}

	printCentered("-------------------------------------------\n");

	printf("\n\t\t  The element %d of index %d is successfully updated.\n", new_val, index);

}

/* ==========================================================*/
/* ======================= SORTINGS =========================*/
/* ==========================================================*/

void selection_sort(int *arr, int size) {
	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);  // Access arr directly
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	for (int i = 0; i < size - 1; i++) {
		int minIdx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		// Swap elements
		int temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;

		printf("\n");
		printf("\t\t\t\t=> ");
		sleep(1);
		for (int k = 0; k < size; k++) {
			printf("%d ", arr[k]);
			sleep(1);
		}
		printf("\n");
	}
	printf("\n");
	printCentered("-------------------------------------------\n");
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");

}

void insertion_sort(int *arr, int size) {
	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;

		printf("\n");
		printf("\t\t\t\t=> ");
		sleep(1);
		for (int k = 0; k < size; k++) {
			printf("%d ", arr[k]);
			sleep(1);
		}
		printf("\n");
	}

	printf("\n");
	printCentered("-------------------------------------------\n");
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");
}

void bubble_sort(int*arr, int size) {
	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);  // Access arr directly
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	for (int k = 0; k < size - 1; k++) {
		for (int i = 0; i < size - k - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		printf("\n");
		printf("\t\t\t\t=> ");
		sleep(1);
		for (int k = 0; k < size; k++) {
			printf("%d ", arr[k]);
			sleep(1);
		}
		printf("\n");
	}
	printCentered("-------------------------------------------\n");

	// Final sorted array
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");
}

void counting_sort(int *arr, int size) {
	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	// Find the maximum value in the array
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i]; // Find the maximum value
		}
	}
	printf("\n\t\t\tMaximum value found: %d\n", max);
	printf("\n\t\t\tCreating count array of size %d\n\n", max + 1);

	//  Create count array
	int *count = (int *)calloc(max + 1, sizeof(int)); // Create count array
	int *output = (int *)malloc(size * sizeof(int)); // Output array

	// Count occurrences of each value
	for (int i = 0; i < size; i++) {
		count[arr[i]]++;
	}

	for (int i = 0; i <= max; i++) {
		if (count[i] > 0) {
		}
	}

	// Update count[i] to be the position of this value in the output array
	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}
	for (int i = 0; i <= max; i++) {
	}

	// output array
	for (int i = size - 1; i >= 0; i--) {
		output[count[arr[i]] - 1] = arr[i];
		printf("\t\t\tPlacing %d at output[%d]\n", arr[i], count[arr[i]] - 1);
		count[arr[i]]--;
	}

	// Step 6: Copy the sorted elements back to the original array
	for (int i = 0; i < size; i++) {
		arr[i] = output[i];
	}

	printf("\n");
	printCentered("-------------------------------------------\n");
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");

	// Free allocated memory
	free(count);
	free(output);
}

void counting_sort_radix(int *arr, int size, int exp) {
	int *output = (int *)malloc(size * sizeof(int)); // Output array
	int count[10] = {0}; // Count array for digits

	// Count occurrences of each digit
	for (int i = 0; i < size; i++) {
		count[(arr[i] / exp) % 10]++;
	}

	// Update count[i] to be the position of this digit in the output array
	for (int i = 1; i < 10; i++) {
		count[i] += count[i - 1];
	}

	// Build the output array
	for (int i = size - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	// Copy the sorted elements back to the original array
	for (int i = 0; i < size; i++) {
		arr[i] = output[i];
	}

	free(output);
}

void radix_lsd(int *arr, int size) {
	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	// Find the maximum number to know the number of digits
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	// Apply counting sort to sort elements based on each digit
	for (int exp = 1; max / exp > 0; exp *= 10) {
		counting_sort_radix(arr, size, exp);
		printf("\n");
		printf("\t\t\t\t=> ");
		sleep(1);
		for (int k = 0; k < size; k++) {
			printf("%d ", arr[k]);
			sleep(1);
		}
		printf("\n");
	}

	printf("\n");
	printCentered("-------------------------------------------\n");
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep (1);
	}
	printf("\n\n");
}

void bucket_insertion_sort(int *arr, int size) {

	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;

		printf("\n");
		printf("\t\t\t\t=> ");
		sleep(1);
		for (int k = 0; k < size; k++) {
			printf("%d ", arr[k]);
			sleep(1);
		}
		printf("\n");
	}

	printf("\n");
	printCentered("-------------------------------------------\n");
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");
}

void bucket_sort(int *arr, int size) {
	printf("\e[1;1H\e[2J");
	sleep(1);

	printf("\n\n\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printCentered("-------------------------------------------\n");

	if (size <= 0) return;

	// Create buckets
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	int bucketCount = max / 10 + 1; // Number of buckets
	struct Node** buckets = (struct Node**)malloc(bucketCount * sizeof(struct Node*));

	for (int i = 0; i < bucketCount; i++) {
		buckets[i] = NULL; // Initialize buckets
	}

	// Distribute elements into buckets
	for (int i = 0; i < size; i++) {
		int bucketIndex = arr[i] / 10; // Determine bucket index
		struct Node* newNode = createNode(arr[i]);
		newNode->next = buckets[bucketIndex];
		buckets[bucketIndex] = newNode; // Insert into the bucket
	}

	// Sort each bucket and concatenate
	int index = 0;
	for (int i = 0; i < bucketCount; i++) {
		if (buckets[i] != NULL) {
			// Convert linked list in the bucket to an array for sorting
			int bucketSize = 0;
			struct Node* current = buckets[i];
			while (current != NULL) {
				bucketSize++;
				current = current->next;
			}

			int* bucketArray = (int*)malloc(bucketSize * sizeof(int));
			current = buckets[i];
			for (int j = 0; j < bucketSize; j++) {
				bucketArray[j] = current->data;
				current = current->next;
			}

			// Sort the bucket using insertion sort (or any other sorting algorithm)
			bucket_insertion_sort(bucketArray, bucketSize);

			// Copy the sorted bucket back to the original array
			for (int j = 0; j < bucketSize; j++) {
				arr[index++] = bucketArray[j];
			}

			free(bucketArray); // Free the temporary bucket array
		}
	}

	// Free the buckets
	for (int i = 0; i < bucketCount; i++) {
		struct Node* current = buckets[i];
		while (current != NULL) {
			struct Node* temp = current;
			current = current->next;
			free(temp); // Free each node in the bucket
		}
	}
	free(buckets); // Free the bucket array


}

void heapify(int *arr, int size, int root) {
	int largest = root; // Initialize largest as root
	int left = 2 * root + 1; // left = 2*i + 1
	int right = 2 * root + 2; // right = 2*i + 2

	// If left child is larger than root
	if (left < size && arr[left] > arr[largest]) {
		largest = left;
	}

	// If right child is larger than largest so far
	if (right < size && arr[right] > arr[largest]) {
		largest = right;
	}

	// If largest is not root
	if (largest != root) {
		// Swap root with largest
		int temp = arr[root];
		arr[root] = arr[largest];
		arr[largest] = temp;

		// Recursively heapify the affected sub-tree
		heapify(arr, size, largest);
	}
}

void heap_sort(int *arr, int size) {
    printf("\e[1;1H\e[2J");
    sleep(1);

    printf("\n\n\t\t   Current Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    printCentered("-------------------------------------------\n");

    // Build a maxheap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    printCentered("Step 1: Max heap created:\n");
				printf("\t\t\t\t");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // One by one extract elements from heap
    for (int i = size - 1; i > 0; i--) {
        // Move current root to end
        int temp = arr[0];
        int lastElement = arr[i]; // Store the last element before the swap
        arr[0] = arr[i];
        arr[i] = temp;

        // Print the values before the swap
        printf("\n\t\t\t   Step 2: Swapped %d with %d:\n", lastElement, temp);
		printf("\t\t\t\t");
        for (int k = 0; k < size; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }

    printf("\n");
    printCentered("-------------------------------------------\n");
    printf("\n\t\t   Sorted Array: ");
    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]);
        sleep(1);
    }
    printf("\n\n");
}

void merge(int arr[], int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	// Create temporary arrays
	int *L = (int *)malloc(n1 * sizeof(int));
	int *R = (int *)malloc(n2 * sizeof(int));

	// Copy to temporary arrays
	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	// Merge the temporary arrays
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
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
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy remaining elements of R[]
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}

	// Free temporary arrays
	free(L);
	free(R);
}

void merge_sort_recursive(int arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		// Sort the first and second halves
		merge_sort_recursive(arr, left, mid);
		merge_sort_recursive(arr, mid + 1, right);

		// Merge the sorted halves
		merge(arr, left, mid, right);

		// Print the array after each merge
		printf("\n");
		printf("\t\t\t\t=> ");
		sleep(1);
		for (int i = left; i <= right; i++) {
			printf("%d ", arr[i]);
			sleep(1);
		}
		printf("\n\n");
	}
}

void merge_sort(int *arr, int size) {
	printf("\e[1;1H\e[2J");
	printf("\n\n\t\t   Processing...");

	printf("\n\n\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printCentered("-------------------------------------------\n");

	// Call to execute merge sort
	merge_sort_recursive(arr, 0, size - 1);

	printCentered("-------------------------------------------\n");

	// Final sorted array
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high]; // make the last element as pivot
	int i = low - 1;       // Index of smaller element

	for (int j = low; j < high; j++) {
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

void quick_sort_recursive(int arr[], int low, int high) {

	if (low < high) {

		int pi = partition(arr, low, high); // Partition index

		//left bound, rightbound and pivot
		printf("\n\n\t\t   Left index (Low): %d, Right index (High): %d\n", low + 1, high + 1);
		printf("\t\t   Pivot: %d (Position: %d)\n", arr[pi], pi + 1);
		sleep(1);

		//current arr
		printf("\t\t   Current Segment Being Partitioned: ");

		for (int i = low; i <= high; i++) {
			printf("%d ", arr[i]);
			sleep(1);
		}
		printf("\n");

		//first half
		if (pi > low) {

			printf("\n\t\t   First Half (Left): ");
			for (int i = low; i < pi; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}

		//second half
		if (pi < high) {

			printf("\n\t\t   Second Half (Right): ");
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

void quick_sort(int *arr, int size) {

	printf("\e[1;1H\e[2J");
	printf("\n\n\t\t   Processing...");

	printf("\n\n\t\t   Current Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printCentered("-------------------------------------------\n");

	// call to execute quick sort
	quick_sort_recursive(arr, 0, size - 1);

	printf("\n");
	printCentered("-------------------------------------------\n");

	// Final sorted array
	printf("\n\t\t   Sorted Array: ");
	for (int k = 0; k < size; k++) {
		printf("%d ", arr[k]);
		sleep(1);
	}
	printf("\n\n");

}

/* ==========================================================*/
/* ======================= STRINGS ==========================*/
/* ==========================================================*/


void str_length() {

	char text[max_size_string];
	char choice;

	do {
		printf("\n\n\n\n");
		printCentered("Enter a string or word (up to only 20 characters): ");
		printCentered(" ");
		printCentered(" ");
		printCentered(" ");

		// i used a format specifier to read until newline is encountered for scanf to handle spaces
		if (scanf(" %[^\n]", text) != EOF) {

			// Calculate the length of the string
			int length = 0;
			while (text[length] != '\0') {
				length++;
			}

			printf("\n");
			printCentered("-------------------------------------------\n");
			printf("\n\t\t   The entered string is: \"%s\"\n\n", text);
			printf("\t\t   The length of the string is: %d characters\n\n", length);
			printCentered("-------------------------------------------\n\n");
		}
		else {
			printCentered("No input detected or EOF encountered.\n");
		}

		do {
			printCentered("Do you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);
			printf("\n");

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {

				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');


		printf("\e[1;1H\e[2J");


	} while (choice == 'n' || choice == 'N');
}// str length

void str_search_index() {
	char str[max_size_string];
	char search;
	int found = 0; //flag if index is found
	char choice;

	do {
		printf("\n\n\n\n");
		printCentered("Enter a string or word (up to only 20 characters): ");

		if (scanf(" %[^\n]", str) != EOF) {

			// Calculate the length of the string (strlen string function)
			int length = 0;
			while (str[length] != '\0') {
				length++;
			}
			// clear the buffer
			getchar();

			printf("\n\t\t   Enter the character to find: ");
			scanf("%c", &search);

			printCentered("-------------------------------------------\n\n");

			for(int i = 0; str[i] !='\0'; i++) {
				printf("\t\t   Index %d: %c\n", i + 1, str[i]);

				if (str[i] == search) {
					printf("\n\t\t\t=> We found character '%c' at index %d.\n\n", search, i + 1);
					found = 1;
					break;
				}
			}

			if (!found) {
				printf("\n\t\t\t=> Character '%c' not found in the string.\n\n", search);
			}
			printCentered("-------------------------------------------\n");

		}
		else {
			printCentered("No input detected or EOF encountered.\n");
		}

		do {
			printCentered("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);
			printf("\n");

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {

				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

		found = 0;
		printf("\e[1;1H\e[2J");


	} while (choice == 'n' || choice == 'N');

}// search index

// for concatenation of two strings
void str_concat() {
	char str1[max_size_string];
	char str2[max_size_string];
	char choice;

	do {
		printf("\n\n\n\n");
		printCentered("Enter the first string or word (up to only 20 characters): ");
		
		// for str1
		if (scanf(" %[^\n]", str1) != EOF) {
			printf("\n");
			printCentered("Enter the second string or word (up to only 20 characters): ");

			// for str2
			if (scanf(" %[^\n]", str2) != EOF) {
				// Concatenate str2 to str1
				int i = 0;
				while (str1[i] != '\0') {
					i++;
				}

				int j = 0;
				while (str2[j] != '\0') {
					str1[i] = str2[j];
					i++;
					j++;
				}
				str1[i] = '\0';

				// Total length of the two strings
				int str_length = 0;
				while (str1[str_length] != '\0') {
					str_length++;
				}

				printf("\n");
				printCentered("-------------------------------------------\n");
				printf("\n\t\t   Concatenated string: %s\n", str1);
				printf("\n\t\t   Total index (length) of the concatenated string: %d\n\n", str_length);
				printCentered("-------------------------------------------\n");

			} else {
				printCentered("No input detected or EOF encountered.\n");
			}

		} else {
			printCentered("No input detected or EOF encountered.\n");
		}

		// Ask if the user wants to continue
		do {
			printf("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);
			printf("\n");

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

		printf("\e[1;1H\e[2J"); // Clear the screen

	} while (choice == 'n' || choice == 'N');

} // concatenation


// function for comparing two strings
int compare_strings(char str1[], char str2[]) {
	int i = 0;

	// Compare characters one by one
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return 0;
		}
		i++;
	}

	// If both strings end at the same time, they are equal
	if (str1[i] == '\0' && str2[i] == '\0') {
		return 1;
	}
	else {
		return 0;
	}
}

void str_compare() {
	char str1[max_size_string], str2[max_size_string];
	char choice;

	do {
		printf("\n\n\n\n");
		printCentered("Enter the first string or word (up to only 20 characters): ");

		// for str1
		if (scanf(" %[^\n]", str1) != EOF) {
			printf("\n");
			printCentered("Enter the second string or word (up to only 20 characters): ");

			// for str2
			if (scanf(" %[^\n]", str2) != EOF) {

				//funcrion call to compare
				if (compare_strings(str1, str2)) {
					printf("\n");
					printCentered("-------------------------------------------\n\n");
					printf("\t\t\t   The strings are equal.\n\n");
					printCentered("-------------------------------------------\n\n");
				}
				else {
					printf("\n");
					printCentered("-------------------------------------------\n\n");
					printf("\t\t\t   The strings are not equal.\n\n");
					printCentered("-------------------------------------------\n\n");
				}
			}
			else {
				printCentered("No input detected or EOF encountered.\n");
			}
		}
		else {
			printCentered("No input detected or EOF encountered.\n");
		}

		// Ask if the user wants to continue
		do {
			printf("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);
			printf("\n");

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');


		printf("\e[1;1H\e[2J");
		sleep(1);

	} while (choice == 'n' || choice == 'N');
}//COMPARE

void str_delete() {
	int i, j, n;
	char choice;

	do {

		char str[max_size_string], updated[50];
		char word[50];

		printf("\n\n\n\n");
		printf("Enter a string (and add space if two or more words, up to only 20 characters): \n\n");
		printCentered(" ");

		if (scanf(" %[^\n]", str) != EOF) {

			printf("\n\t\t   Enter the word you want to remove: ");
			if (scanf(" %[^\n]", word) != EOF) {

				n = 0;
				int length = 0;

				// Calculate the length of the word to remove
				while (word[length] != '\0') {
					length++;
				}

				int found = 0; // To track if the word was found

				for (i = 0; str[i] != '\0';) {
					j = 0; // Reset j for each new character in str

					// Check if the current sequence matches the word to delete
					while (str[i + j] == word[j] && str[i + j] != '\0' && word[j] != '\0') {
						j++;
					}

					// If the entire word is matched and followed by a space or end of string
					if (j == length && (str[i + j] == ' ' || str[i + j] == '\0')) {
						found = 1; // Mark that we found the word
						i += j;

						while (str[i] == ' ') {
							i++;
						}
					} else {
						// If no match, copy the character to updated string
						updated[n++] = str[i++];
					}
				}

				// Terminate the updated string
				updated[n] = '\0';

				printf("\n");
				printCentered("-------------------------------------------\n");

				if (found) {
					printf("\n\t\t   After Removing Word From String: %s\n\n", updated);
					printCentered("-------------------------------------------\n");
				} else {
					printf("\n\t\t   There's no word in the string.\n\n");
					printCentered("-------------------------------------------\n");
				}
			} else {
				printCentered("Error: No word detected for removal.\n");
			}
		} else {
			printCentered("Error: No string or sentence detected.\n");
		}

		do {
			printCentered("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);
			printf("\n");
			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

		printf("\e[1;1H\e[2J");
		sleep(1);

	} while (choice == 'n' || choice == 'N');
}

//for replace
void str_replace() {
	int i, j, k, n;
	char choice;

	char str[max_size_string], word[max_size_string], replacement[max_size_string];
	char updated[20] = {0};

	do {

		printf("\n\n\n\n");


		// Prompt for the input string
		printf("Enter a string (and add space if two or more words, up to only 20 characters): \n\n");
		printCentered(" ");
		if (scanf(" %[^\n]", str) != EOF) {

			// Prompt for the word to replace
			printf("\n\t\t   Enter the word you want to replace: ");
			if (scanf(" %[^\n]", word) != EOF) {

				// Prompt for the replacement word
				printf("\n\t\t   Enter the replacement word: ");
				if (scanf(" %[^\n]", replacement) != EOF) {

					// Calculate the lengths of the word to replace and replacement
					int length = 0;
					int replace_length = 0;

					while (word[length] != '\0') {
						length++;
					}

					while (replacement[replace_length] != '\0') {
						replace_length++;
					}

					n = 0; // Reset n for the updated string
					int found = 0; // To track if the word was found

					for (i = 0; str[i] != '\0';) {
						j = 0; // Reset j for each new character in str

						// Check if the current sequence matches the word to replace
						while (str[i + j] == word[j] && str[i + j] != '\0' && word[j] != '\0') {
							j++;
						}

						// If the entire word is matched and followed by a space or end of string
						if (j == length && (str[i + j] == ' ' || str[i + j] == '\0')) {
							found = 1; // Mark that we found the word
							// Copy the replacement word to the updated string
							for (int r = 0; r < replace_length; r++) {
								updated[n++] = replacement[r];
							}
							i += j; // Move past the word
							// Skip any additional spaces after the word
							while (str[i] == ' ') {
								i++;
							}
						} else {
							// If no match, copy the character to updated string
							updated[n++] = str[i++];
						}
					}

					// Terminate the updated string
					updated[n] = '\0';
					printf("\n");
					printCentered("-------------------------------------------\n");

					if (found) {
						printf("\n\t\t   After Replacing Word In String: %s\n", updated);
						printf("\n");
						printCentered("-------------------------------------------\n");
					} else {
						printf("\n\t\t   The word was not found in the string.\n");
						printf("\n");
						printCentered("-------------------------------------------\n");
					}

				} else {
					printCentered("Error: No replacement word detected.\n");
				}

			} else {
				printCentered("Error: No word detected for replacement.\n");
			}

		} else {
			printCentered("\t\t   Error: No string or sentence detected.\n");
		}

		do {
			printCentered("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");

				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');


		printf("\e[1;1H\e[2J");
		sleep(1);

	} while (choice == 'n' || choice == 'N');

} // replace

// Sort a string using selection sort
void str_sort() {
	char str[max_size_string]; // Declare the string to be sorted
	char choice;

	do {
		printf("\n\n\n\n\n");
		printCentered("Enter a string to sort (only 20 characters): ");
		scanf(" %[^\n]", str); // Using regex to read input with spaces

		// Calculate length of string
		int n = 0;
		while (str[n] != '\0') {
			n++;
		}

		printf("\e[1;1H\e[2J");
		sleep(1);

		printf("\n\t\t   Current String:\n");
		for (int i = 0; i < n; i++) {
			printf("\n");
			printf("\t\t\t\tIndex [%d]: %c\n", i + 1, str[i]);
			sleep(1);
		}

		printf("\n");
		printCentered("-------------------------------------------\n");

		for (int i = 0; i < n - 1; i++) {
			int minIdx = i; // minIdx stands for minimum index
			for (int j = i + 1; j < n; j++) {
				if (str[j] < str[minIdx]) {
					minIdx = j;
				}
			}

			// Swapping
			char temp = str[i];
			str[i] = str[minIdx];
			str[minIdx] = temp;
		}

		printf("\n\t\t   Updated String:\n");
		for (int i = 0; i < n; i++) {
			printf("\n");
			printf("\t\t\t\tIndex [%d]: %c\n", i + 1, str[i]);
			sleep(1);
		}

		do {

			printCentered("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n');
			scanf(" %c", &choice);

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

		printf("\e[1;1H\e[2J");
		sleep(1);

	} while (choice == 'n' || choice == 'N');
}

// Sorting an array of strings using selection sort
void str_arraySort() {
	char arr[100][100]; // Array to hold up to 100 strings, each up to 99 characters
	int size;
	char choice;
	int result;

	do {

		while (1) {
			printCentered("Enter the number of strings you want to sort (max 5): ");

			result = scanf("%d", &size);

			while (getchar() != '\n');

			if (result != 1 || size <= 0) {
				printf("\n");
				printCentered("Invalid input. Please enter a positive integer for the size.\n");
				sleep(2);
				printf("\e[1;1H\e[2J"); // Clear the screen
			}
			else {
				break; //if valid input then exit the loop
			}
		}
		// Input strings from the user
		for (int i = 0; i < size; i++) {
			printf("\n\t\t\t  Enter string %d: ", i + 1);
			scanf(" %[^\n]", arr[i]); // Using regex to read string input with spaces
		}

		printf("\e[1;1H\e[2J");
		sleep(1);

		printf("\n\t\t   Current Array of String:\n");
		for (int i = 0; i < size; i++) {
			printf("\t\t\t\tIndex [%d]: %s\n", i + 1, arr[i]);
			sleep(1);
		}

		printf("\n");
		printCentered("-------------------------------------------\n");

		for (int i = 0; i < size - 1; i++) {
			int minIdx = i; // also keeps track of the smallest element in the array
			for (int j = i + 1; j < size; j++) {
				// Compare strings
				int k = 0;
				while (arr[j][k] != '\0' && arr[minIdx][k] != '\0' && arr[j][k] == arr[minIdx][k]) {
					k++;
				}

				// If arr[j] is less than arr[minIdx] or arr[minIdx] is shorter
				if (arr[j][k] < arr[minIdx][k] || (arr[minIdx][k] == '\0' && arr[j][k] != '\0')) {
					minIdx = j;
				}
			}

			// Swapping
			if (minIdx != i) {
				char temp[100];
				for (int l = 0; l < 100; l++) {
					temp[l] = arr[i][l];
				}
				for (int l = 0; l < 100; l++) {
					arr[i][l] = arr[minIdx][l];
					arr[minIdx][l] = temp[l];
				}
			}
		}

		printf("\n\t\t   Updated Array of String:\n");
		for (int i = 0; i < size; i++) {
			printf("\n");
			printf("\t\t\t\tIndex [%d]: %s\n", i + 1, arr[i]);
			sleep(1);
		}

		printf("\n");

		do {
			printCentered("\nDo you want to go back to the previous screen? (y/Y) or try again (n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf(" %c", &choice);
			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");
			}
		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

		printf("\e[1;1H\e[2J");
		sleep(1);

	} while (choice == 'n' || choice == 'N');
}

/* ==========================================================*/
/* ======================= SEARCHING ========================*/
/* ==========================================================*/

//for linear search
void linear_search() {
	int size, key;
	int count = 1;
	int result;
	char choice;
	do {
		while(1) {
			printCentered("Enter the size of the array: ");
			result = scanf("%d", &size);

			if (result != 1 || size <= 0) {
			while (getchar() != '\n');
			printf("\n");
			printCentered("Invalid input. Please enter a positive integer for the size.\n\n");
			sleep(3);
			printf("\e[1;1H\e[2J");
		} 
		else if(size > max_size){
			printf("\n");
			printCentered("Invalid input!!! Please enter a size not greater than 10.\n\n");
			sleep(3);
			printf("\e[1;1H\e[2J");
		}
		else {
			break;
		}
		}
		// store the size of the array
		int arr[size];

		printf("\n\t\t   Enter %d elements:\n\n", size);
		printCentered("-------------------------------------------\n");
		printf("\n\t\t   Array: \n");

		for (int i = 0; i < size; i++) {

			while(1) {
				printf("\n\t\t\t\t   Index %d: ", count);
				result = scanf("%d", &arr[i]);

				if (result != 1) { // Check if the input is a positive integer

					while (getchar() != '\n'); // Clear the invalid input from buffer

					printCentered("Invalid input. Please enter a positive integer.\n\n");

				}
				else {
					break;
				}
			}
			count++;
		}
		printf("\n");
		printCentered("-------------------------------------------\n\n");

		// Get the element to search
		while(1) {
			printCentered("Enter the element of the index you want to search(key): ");
			result = scanf("%d", &key);

			if (result != 1) { // Check if the input is a positive integer

				while (getchar() != '\n'); // Clear the invalid input from buffer

				printCentered("Invalid input.\n\n");

			}
			else {
				break;
			}
		}

		printf("\e[1;1H\e[2J");

		printf("\n\t\t   Searching: %d\n", key);

		for (int j = 0; j < size; j++) {
			printf("\n\t\t\t\t  index[%d] = %d\n", j + 1, arr[j]);
			sleep(1);
		}

		// traverse to find the key
		int found = 0;
		for (int j = 0; j < size; j++) {
			if (arr[j] == key) {
				printf("\n\n\t\t\t   => We found key %d at index %d.\n", key, j + 1);
				found = 1;
				break;
			}
		}
		if(!found) {
			printf("\n\n\t\t\t   => Key %d not found in the array.\n\n", key);
		}

		do {
			printf("\n");
			printCentered("Do you want to go back to the previous screen? (y/Y or n/N): ");
			while (getchar() != '\n'); // Clear the buffer
			scanf("%c", &choice);

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				printCentered("Invalid input. Please enter 'y', 'Y', 'n', or 'N'.\n");
			}
		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

		count = 1;
		found = 0;
	} while (choice == 'n' || choice == 'N');

} // linear search

// for binaray search
void binary_search() {
	int size, key;
	int count = 1;
	int result;
	char choice;

	do {
		while(1) {
			printCentered("Enter the size of the array: ");
			result = scanf("%d", &size);

if (result != 1 || size <= 0) {
			while (getchar() != '\n');
			printf("\n");
			printCentered("Invalid input. Please enter a positive integer for the size.\n\n");
						sleep(3);
			printf("\e[1;1H\e[2J");
		} 
		else if(size > max_size){
			printf("\n");
			printCentered("Invalid input!!! Please enter a size not greater than 10.\n\n");
						sleep(3);
			printf("\e[1;1H\e[2J");
		}
		else {
			break;
		}
		
		}
		// store the size of the array
		int arr[size];

		printf("\n\t\t   Enter %d elements in ascending order!:\n", size);
		printCentered("-------------------------------------------\n");
		printf("\n\t\t   Array: \n");

		for (int i = 0; i < size; i++) {

			while(1) {
				printf("\n\t\t\t\t   Index %d: ", count);
				result = scanf("%d", &arr[i]);

				if (result != 1) { // Check if the input is a positive integer

					while (getchar() != '\n'); // Clear the invalid input from buffer

					printCentered("Invalid input.\n\n");

				}
				else {
					break;
				}
			}
			count++;
		}
		printCentered("-------------------------------------------\n");

		// Get the element to search
		while(1) {
			printCentered("Enter the element of the index you want to search: ");
			result = scanf("%d", &key);

			if (result != 1) { // Check if the input is a positive integer

				while (getchar() != '\n'); // Clear the invalid input from buffer

				printCentered("Invalid input.\n\n");

			}
			else {
				break;
			}
		}

		//binary algo
		int first = 0;
		int last = size - 1;
		int mid;


		printf("\e[1;1H\e[2J");
		sleep(1);

		printf("\n\t\t   Searching: %d\n", key);

		for (int j = 0; j < size; j++) {
			printf("\n\t\t\t\t   index[%d] = %d", j + 1, arr[j]);
			sleep(1);
		}

		//iterative binary using while loop
		int found = 0;
		while (first <= last) {
			mid = (first + last) / 2;

			printf("\n\t\t   Current state: first = %d, last = %d, mid = %d\n\n", first + 1, last + 1, mid + 1);

			if (arr[mid] < key) {
				first = mid + 1;
			}
			else if (arr[mid] == key) {

				printCentered("-------------------------------------------\n");
				printf("\n\t\t\t   => We found key %d at index %d.\n\n", key, mid + 1);

				found = 1;

				do {
					printCentered("Do you want to go back to the previous screen? (y/Y or n/N): ");
					while (getchar() != '\n'); // Clear the buffer
					scanf(" %c", &choice);

				} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

				printf("\e[1;1H\e[2J");
				sleep(1);
				break;

			}
			else {
				last = mid - 1;
			}
			mid = (first + last)/2;

		} // end while loop
		if (!found) {
			printCentered("-------------------------------------------\n\n");
			printf("\n\t\t\t   => Key %d not found in the array.\n\n", key);

			do {
				printCentered("Do you want to go back to the previous screen? (y/Y or n/N): ");
				while (getchar() != '\n'); // Clear the buffer
				scanf(" %c", &choice);
			} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

			printf("\e[1;1H\e[2J");
			sleep(1);

		}
		count = 1;

	} while (choice == 'n' || choice == 'N');

} // binary search


/* ==========================================================*/
/* ====================== LINKED LIST =======================*/
/* ==========================================================*/

// Function to create a new node (linked list operations - singly)
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (!newNode) {
		printCentered("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// Function to get the size of the linked list
int getLinkedListSize() {
	int size, result;
	printf("\n\n\n");
	while (1) {
		printCentered("Enter the size of the linked list: ");
		result = scanf("%d", &size);
if (result != 1 || size <= 0) {
			while (getchar() != '\n');
			printf("\n");
			printCentered("Invalid input. Please enter a positive integer for the size.\n\n");
			sleep(3);
			printf("\e[1;1H\e[2J");
		} 
		else if(size > max_size){
			printf("\n");
			printCentered("Invalid input!!! Please enter a size not greater than 10.\n\n");
			sleep(3);
			printf("\e[1;1H\e[2J");
		}
		else {
			break;
		}
	}
	return size;
}

// Function to get the elements of the linked list
void getLinkedListElements(int* arr, int size) {
	for (int i = 0; i < size ; i++) {
		int result;
		while (1) {
			printf("\n\t\t\t\t   Enter element %d: ", i + 1);
			result = scanf("%d", &arr[i]);
			if (result != 1) {
				while (getchar() != '\n'); // Clear the invalid input from buffer
				printf("\n");
				printCentered("Invalid input. Please enter an integer.\n");
			} else {
				break;
			}
		}
	}
}


/* ==========================================================*/
/* ================== SINGLY LINKED LIST ====================*/
/* ==========================================================*/

// Function to traverse and display the linked list
void linked_Strav(struct Node* head) {
	printf("\n\n\n\n\n\n");
	printCentered("Traversing Linked List:\n");
	struct Node* current = head;
	if (!current) {
		printCentered("The linked list is empty.\n");
		return;
	}
	printf("\n\t\t\t ");
	while (current) {
		printf("%d -> ", current->data);
		sleep(1);
		current = current->next;
	}
	printf("NULL\n");
	sleep(1);
}

// INSERT FRONT SINGLY
void linked_Sinsert_front(struct Node** head) {
	int data;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the value to insert: ");
	data = getValidOption();

	struct Node* newNode = createNode(data);
	newNode->next = *head; // Insert at the beginning
	*head = newNode; // Update head
	printf("\n\t\t\t   Node with value %d inserted.\n", data);
	sleep(1);
}

// INSERT END SINGLY
void linked_insert_end(struct Node** head) {
	int data;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the data value for the node: ");
	data = getValidOption();

	struct Node* newNode = createNode(data); // Use createNode for consistency
	if (*head == NULL) {
		*head = newNode; // If the list is empty, set the new node as the head
	} else {
		struct Node* ptr = *head;
		while (ptr->next != NULL) {
			ptr = ptr->next; // Traverse to the end of the list
		}
		ptr->next = newNode; // Link the new node at the end
	}

	printf("\n\t\t\t   Node with value %d inserted at the end.\n", data);
	sleep(1);
}

// INSERT ANY POSITION SINGLY
void linked_insert_pos(struct Node** head) {
	int data, pos, result;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the position for the new node to be inserted: ");

	while (1) {
		result = scanf("%d", &pos);
		if (result != 1 || pos < 1) { // Check if the input is valid
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printCentered("Invalid input. Please enter a positive integer.");
		} else {
			break; // Valid input
		}
	}

	printf("\n");
	printCentered("Enter the data value for the node: ");
	data = getValidOption();

	struct Node* newNode = createNode(data); // Use createNode for consistency

	if (pos == 1) {
		newNode->next = *head; // Insert at the beginning
		*head = newNode; // Update head
	} else {
		struct Node* ptr = *head;
		// Traverse to the position just before where the new node will be inserted
		for (int i = 1; i < pos - 1; i++) {
			if (ptr == NULL) {
				printCentered("\nPosition not found: \n");
				free(newNode); // Free the allocated memory for the new node
				return;
			}
			ptr = ptr->next; // Move to the next node
		}

		// Insert the new node at the specified position
		newNode->next = ptr->next; // Link the new node to the next node
		ptr->next = newNode; // Link the previous node to the new node
	}

	printf("\t\t   Node with value %d inserted at position %d.\n", data, pos);
	sleep(1);
}

// DELETE FRONT SINGLY
struct Node* linked_Sdel_front(struct Node** head) {
	if (*head == NULL) {
		printf("The linked list is empty. Nothing to delete.\n");
		return *head; // Return unchanged head
	}

	struct Node* ptr = *head; // Pointer to the node to be deleted
	*head = (*head)->next; // Update head to the next node

	free(ptr); // Free the memory of the deleted node
	return *head; // Return the updated head of the linked list
}

// DELETE END SINGLY
struct Node* linked_Sdel_end(struct Node** head) {
	if (*head == NULL) {
		printf("The linked list is empty. Nothing to delete.\n");
		return *head; // Return unchanged head
	}

	struct Node* ptr = *head;
	if (ptr->next == NULL) {
		// Only one node in the list
		printf("The deleted element is: %d\n", ptr->data);
		free(ptr);
		*head = NULL; // List is now empty
		return *head;
	}

	// Traverse to the second last node
	while (ptr->next->next != NULL) {
		ptr = ptr->next;
	}

	printf("The deleted element is: %d\n", ptr->next->data);
	free(ptr->next); // Free the last node
	ptr->next = NULL; // Set the second last node's next to NULL
	return *head; // Return the updated head of the linked list
}

// DELETE ANY POSITION SINGLY
struct Node* linked_Sdel_pos(struct Node** head) {
	if (*head == NULL) {
		printf("The linked list is empty. Nothing to delete.\n");
		return *head; // Return unchanged head
	}

	int pos, result;
	printf("\n\n\n\n\n");
	printCentered("Enter the position of the node to delete: ");
	result = scanf("%d", &pos);

	if (result != 1 || pos < 1) {
		printCentered("Invalid input. Please enter a positive integer.\n");
		return *head; // Return unchanged head
	}

	if (pos == 1) {
		return linked_Sdel_front(head); // Reuse the delete from beginning function
	}

	struct Node* ptr = *head;
	struct Node* prev = NULL;

	for (int i = 1; i < pos; i++) {
		if (ptr == NULL) {
			printCentered("Position not found.\n");
			return *head; // Return unchanged head
		}
		prev = ptr;
		ptr = ptr->next; // Move to the next node
	}

	if (ptr == NULL) {
		printCentered("Position not found.\n");
		return *head; // Return unchanged head
	}
	prev->next = ptr->next; // Bypass the node to be deleted
	free(ptr); // Free the memory of the deleted node
	return *head; // Return the updated head of the linked list
}

// UPDATE SINGLY
void linked_Supdate(struct Node* head) {
	if (head == NULL) {
		printf("The linked list is empty. Nothing to update.\n");
		sleep(2);
		return;
	}

	int pos, newValue;
	printf("\n\n\n\n");
	printCentered("Enter the position of the node to update: ");
	pos = getValidOption(); // Get the position from the user

	struct Node* current = head;

	// Traverse to the node at the specified position
	for (int i = 1; i < pos; i++) {
		if (current == NULL) {
			printf("\n\t\t  Position %d not found in the linked list.\n", pos);
			return; // Position is out of bounds
		}
		current = current->next; // Move to the next node
	}

	// If the current node is NULL, the position is out of bounds
	if (current == NULL) {
		printf("\n\t\t  Position %d not found in the linked list.\n", pos);
	} else {
		printf("\n");
		printCentered("Enter the new value: ");
		newValue = getValidOption();
		current->data = newValue; // Update the value
		printf("\n\t\t  Node value at position %d updated to %d.\n", pos, newValue);
	}
	sleep(1);
}

// DISPLAY SINGLY
void displayLinkedList(struct Node* head) {
	struct Node* current = head;
	printf("\nCurrent List: ");
	while (current) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL");
}


/* ==========================================================*/
/* ================== DOUBLY LINKED LIST ====================*/
/* ==========================================================*/

// Function to create a new node (doubly linked list operations)
struct DNode* createDNode(int data) {
	struct DNode* newNode = (struct DNode*)malloc(sizeof(struct DNode));
	if (!newNode) {
		printf("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

// INSERT FRONT DOUBLY
void dlinked_insert_front(struct DNode** head) {
	int data;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the value to insert at the front: ");
	data = getValidOption();

	struct DNode* newNode = createDNode(data);
	newNode->next = *head; // Link new node to the current head

	if (*head != NULL) {
		(*head)->prev = newNode; // Update the previous head's prev pointer
	}
	*head = newNode; // Update head to the new node
	printf("\n\t\t\t   Node with value %d inserted at the front.\n", data);
}

// INSERT END DOUBLY
void dlinked_insert_end(struct DNode** head) {
	int data;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the value to insert at the end: ");
	data = getValidOption();

	struct DNode* newNode = createDNode(data);
	if (*head == NULL) {
		*head = newNode; // If the list is empty, set new node as head
	} else {
		struct DNode* ptr = *head;
		while (ptr->next != NULL) {
			ptr = ptr->next; // Traverse to the end of the list
		}
		ptr->next = newNode; // Link the new node at the end
		newNode->prev = ptr; // Set the new node's prev pointer
	}
	printf("\n\t\t\t   Node with value %d inserted at the end.\n", data);
}

// INSERT ANY POSITION DOUBLY
void dlinked_insert_pos(struct DNode** head) {
	int data, pos, result;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the position for the new node to be inserted: ");

	while (1) {
		result = scanf("%d", &pos);
		if (result != 1 || pos < 1) { // Check if the input is valid
			while (getchar() != '\n'); // Clear the invalid input from buffer
			printCentered("Invalid input. Please enter a positive integer.");
		} else {
			break; // Valid input
		}
	}

	printf("\n");
	printCentered("Enter the value for the new node: ");
	data = getValidOption();

	struct DNode* newNode = createDNode(data);

	if (pos == 1) {
		newNode->next = *head; // Link new node to the current head
		if (*head != NULL) {
			(*head)->prev = newNode; // Update the previous head's prev pointer
		}
		*head = newNode; // Update head to the new node
	} else {
		struct DNode* ptr = *head;
		for (int i = 1; i < pos - 1; i++) {
			if (ptr == NULL) {
				printf("\n\t\t   Position %d not found. Insertion failed.\n", pos);
				free(newNode); // Free the allocated memory for the new node
				return;
			}
			ptr = ptr->next; // Move to the next node
		}
		if (ptr == NULL) {
			printf("\n\t\t   Position %d not found. Insertion failed.\n", pos);
			free(newNode); // Free the allocated memory for the new node
			return;
		}
		newNode->next = ptr->next; // Link new node to the next node
		newNode->prev = ptr; // Link new node's prev to the current node
		if (ptr->next != NULL) {
			ptr->next->prev = newNode; // Update the next node's prev pointer
		}
		ptr->next = newNode; // Link the current node to the new node
	}
	printf("\t\t   Node with value %d inserted at position %d.\n", data, pos);
	sleep(1);
}

// DELETE ANY POSITION DOUBLY
struct DNode* dlinked_del_pos(struct DNode** head) {

	if (*head == NULL) {
		printf("The doubly linked list is empty. Nothing to delete.\n");
		return *head; // Return unchanged head
	}

	int pos, result;
	printf("\n\n\n\n\n");
	printCentered("Enter the position of the node to delete: ");
	result = scanf("%d", &pos);

	if (result != 1 || pos < 1) {
		printCentered("Invalid input. Please enter a positive integer.\n");
		return *head; // Return unchanged head
	}


	if (pos == 1) {
		struct DNode* toDelete = *head;
		*head = (*head)->next; // Update head to the next node
		if (*head != NULL) {
			(*head)->prev = NULL; // Update the new head's prev pointer
		}
		free(toDelete); // Free the memory of the deleted node
		return *head; // Return the updated head of the doubly linked list
	}

	struct DNode* ptr = *head;
	for (int i = 1; i < pos; i++) {
		if (ptr == NULL) {
			printf("Position not found.\n");
			return *head; // Return unchanged head
		}
		ptr = ptr->next; // Move to the next node
	}

	if (ptr == NULL) {
		printf("Position not found.\n");
		return *head; // Return unchanged head
	}

	if (ptr->prev != NULL) {
		ptr->prev->next = ptr->next; // Bypass the node to be deleted
	}
	if (ptr->next != NULL) {
		ptr->next->prev = ptr->prev; // Update the next node's prev pointer
	}
	free(ptr); // Free the memory of the deleted node
	return *head; // Return the updated head of the doubly linked list
}

// UPDATE DOUBLY
void dlinked_update(struct DNode* head) {
	if (head == NULL) {
		printf("The doubly linked list is empty. Nothing to update.\n");
		return;
	}

	int pos, newValue;
	printf("\n\n\n\n");
	printCentered("Enter the position of the node to update: ");
	pos = getValidOption();

	struct DNode* current = head;

	// Traverse to the node at the specified position
	for (int i = 1; i < pos; i++) {
		if (current == NULL) {
			printf("\n\t\t  Position %d not found in the doubly linked list.\n", pos);
			return; // Position is out of bounds
		}
		current = current->next; // Move to the next node
	}

	// If the current node is NULL, the position is out of bounds
	if (current == NULL) {
		printf("\n\t\t  Position %d not found in the doubly linked list.\n", pos);
	} else {
		printCentered("Enter the new value: ");
		newValue = getValidOption();
		current->data = newValue; // Update the value
		printf("\n\t\t  Node value at position %d updated to %d.\n", pos, newValue);
	}
}

// DISPLAY DOUBLY
void displayDoublyLinkedList(struct DNode* head) {
	struct DNode* current = head;
	printf("\nCurrent Doubly Linked List: ");
	while (current) {
		printf("%d <-> ", current->data);
		current = current->next;
	}
	printf("NULL");
}

// DISPLAY TRAVERSE DOUBLY
void displayDoublyList(struct DNode* head) {
	struct DNode* current = head;
	printf("\n\n\n\n\n\n");
	printf("\t\t\t  Current Doubly Linked List: ");
	printf("\n\n\t\t\t");
	while (current) {
		printf("%d <-> ", current->data);
		current = current->next;
		sleep(1);
	}
	printf("NULL\n");
	sleep(4);
}

// TRAVERSE REVERSELY
void traverseDoublyLinkedListReverse(struct DNode* head) {
	if (head == NULL) {
		printf("The doubly linked list is empty.\n");
		return;
	}

	struct DNode* current = head;
	// Move to the end of the list
	while (current->next != NULL) {
		current = current->next;
	}
	printf("\n\n\n\n\n\n");
	printCentered("Traversing Doubly Linked List in Reverse: ");
	printf("\n\n\t\t\t");
	while (current) {
		printf("%d <-> ", current->data);
		current = current->prev; // Move to the previous node
		sleep(1);
	}
	printf("NULL");
	sleep(4);
}


/* ==========================================================*/
/* =============== CIRCULAR LINKED LIST =====================*/
/* ==========================================================*/


// Function to create a new node (circular linked list operations)
struct CNode* createCNode(int data) {
	struct CNode* newNode = (struct CNode*)malloc(sizeof(struct CNode));
	if (!newNode) {
		printCentered("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = newNode; // Initialize next to newNode
	return newNode;
}

// INSERT FRONT CIRCULAR
void circular_insert_front(struct CNode** head) {
	int data;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the value to insert at the front: ");
	data = getValidOption();

	struct CNode* newNode = createCNode(data);
	if (*head == NULL) {
		*head = newNode; // If the list is empty, set new node as head
	} else {
		struct CNode* temp = *head;
		while (temp->next != *head) {
			temp = temp->next; // Traverse to the last node
		}
		temp->next = newNode; // Link the last node to the new node
	}
	newNode->next = *head; // Link new node to the head
	*head = newNode; // Update head to the new node
	printf("\n\t\t     Node with value %d inserted at the front.\n", data);
}

// INSERT END CICULAR
void circular_insert_end(struct CNode** head) {
	int data;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the value to insert at the end: ");
	data = getValidOption();

	struct CNode* newNode = createCNode(data);
	if (*head == NULL) {
		*head = newNode; // If the list is empty, set new node as head
	} else {
		struct CNode* temp = *head;
		while (temp->next != *head) {
			temp = temp->next; // Traverse to the last node
		}
		temp->next = newNode; // Link the last node to the new node
	}
	newNode->next = *head; // Link new node to the head
	printf("\n\t\t     Node with value %d inserted at the front.\n", data);
}

// INSERT ANY POSITION CIRCULAR
void circular_insert_pos(struct CNode** head) {
	int data, pos, result;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the position for the new node to be inserted: ");

	while(1) {
		result = scanf("%d", &pos);
		if(result != 1 || pos < 1) {
			while(getchar() != '\n');
			printCentered("Invalid input. Please enter a positive integer.");
		}
		else {
			break;
		}
	}

	printf("\n");
	printCentered("Enter the value for the new node: ");
	data = getValidOption();

	struct CNode* newNode = createCNode(data);
	if (pos == 1) {
		newNode->next = *head; // Link new node to the current head
		if (*head == NULL) {
			newNode->next = newNode; // Point to itself if the list was empty
		} else {
			struct CNode* temp = *head;
			while (temp->next != *head) {
				temp = temp->next; // Traverse to the last node
			}
			temp->next = newNode; // Link the last node to the new node
		}
		*head = newNode; // Update head to the new node
	} else {
		struct CNode* temp = *head;
		for (int i = 1; i < pos - 1 && temp->next != *head; i++) {
			temp = temp->next; // Traverse to the desired position
		}
		newNode->next = temp->next; // Link new node to the next node
		temp->next = newNode; // Link the current node to the new node
	}
	printf("\n\t\t     Node with value %d inserted at position %d.\n", data, pos);
}

// DELETE FRONT CIRCULAR
struct CNode* circular_del_front(struct CNode** head) {
	if (*head == NULL) {
		printf("List is empty. No node to delete.\n");
		return NULL;
	}
	struct CNode* temp = *head;
	if (temp->next == *head) {
		free(temp); // Only one node in the list
		*head = NULL; // Update head to NULL
	} else {
		struct CNode* last = *head;
		while (last->next != *head) {
			last = last->next; // Traverse to the last node
		}
		*head = temp->next; // Update head to the next node
		last->next = *head; // Link last node to the new head
		free(temp); // Free the old head
	}
	return *head;
}

// DELETE END CIRCULAR
struct CNode* circular_del_end(struct CNode** head) {
	if (*head == NULL) {
		printf("List is empty. No node to delete.\n");
		return NULL;
	}
	struct CNode* temp = *head;
	if (temp->next == *head) {
		free(temp); // Only one node in the list
		*head = NULL; // Update head to NULL
	} else {
		struct CNode* secondLast = *head;
		while (secondLast->next->next != *head) {
			secondLast = secondLast->next; // Traverse to the second last node
		}
		free(secondLast->next); // Free the last node
		secondLast->next = *head; // Link second last node to head
	}
	return *head;
}

// DELETE ANY POSITION CICULAR
struct CNode* circular_del_pos(struct CNode** head) {

	if (*head == NULL) {
		printf("The doubly linked list is empty. Nothing to delete.\n");
		return *head; // Return unchanged head
	}

	int pos, result;
	printf("\n\n\n\n\n");
	printCentered("Enter the position of the node to delete: ");
	pos = getValidOption();

	if (result != 1 || pos < 1) {
		printCentered("Invalid input. Please enter a positive integer.\n");
		return *head; // Return unchanged head
	}

	struct CNode* temp = *head;
	if (pos == 1) {
		return circular_del_front(head); // Delegate to delete from front
	} else {
		struct CNode* prev = NULL;
		for (int i = 1; i < pos && temp->next != *head; i++) {
			prev = temp; // Keep track of the previous node
			temp = temp->next; // Move to the next node
		}
		if (temp == *head) {
			printf("Position out of bounds.\n");
			return *head;
		}
		prev->next = temp->next; // Link previous node to the next node
		free(temp); // Free the deleted node
		printf("\t\t     Node deleted from position %d.\n", pos);
	}
	return *head;
}

// UPDATE CIRCULAR
void circular_update(struct CNode* head) {
	if (head == NULL) {
		printf("The list is empty.\n");
		return;
	}

	int pos, newValue;
	printf("\n\n\n\n");
	printCentered("Enter the position of the node to update (1-based index): ");
	pos = getValidOption();

	struct CNode* temp = head;

	// Traverse to the desired position
	for (int i = 1; i < pos && temp->next != head; i++) {
		temp = temp->next; // Move to the next node
	}

	// Check if the position is valid
	if (pos < 1 || temp->next == head && pos > 1) {
		printf("Position out of bounds.\n");
		return;
	}

	printCentered("Enter the new value: ");
	newValue = getValidOption();
	temp->data = newValue; // Update the node's value
	printf("\n\t\t     Node at position %d updated to %d.\n", pos, newValue);
}

// DISPLAY CIRCULAR
void displayCircularLinkedList(struct CNode* head) {
	if (head == NULL) {
		printf("List is empty.\n");
		return;
	}
	struct CNode* temp = head;
	do {
		printf("%d -> ", temp->data);
		temp = temp->next;
	} while (temp != head);
	printf("(back to head: %d)\n", head->data);
}

// TRAVERSE CIRCULARLY
void traverseCircularLinkedList(struct CNode* head) {
	if (head == NULL) {
		printf("List is empty.\n");
		return;
	}
	struct CNode* temp = head;

	printf("\n\n\n\n\n\n");
	printCentered("Traversing Linked List in Circular: ");
	printf("\n\n\t\t\t");
	do {
		printf("%d -> ", temp->data);
		sleep(1);
		temp = temp->next;
	} while (temp != head);
	printf("(back to head: %d)\n", head->data);
	sleep(4);
}


/* ==========================================================*/
/* ========================= STACKS =========================*/
/* ==========================================================*/

// Function to create a new node
struct SNode* createSNode(int data) {
	struct SNode* newNode = (struct SNode*)malloc(sizeof(struct SNode));
	if (!newNode) {
		printf("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// Function to initialize the stack
void initializeStack(struct Stack* stack) {
	stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
	return stack->top == NULL;
}

// Function to push an element onto the stack
void push(struct Stack* stack) {
	int x;
	printf("\n\n\n\n\n\n");
	printCentered("Enter the element to be added onto the stack: ");
	x = getValidOption();

	struct SNode* newNode = createSNode(x);
	newNode->next = stack->top; // Link the new node to the current top
	stack->top = newNode; // Update the top to the new node
	printf("\n\t\t\t\t");
	printf("Pushed %d onto the stack.\n", x);
	sleep(5);
}

// Function to pop an element from the stack
void pop(struct Stack* stack) {
	if (isEmpty(stack)) {
		printf("\n\n\n\n\n\n");
		printCentered("Underflow!!");
	} else {
		struct SNode* temp = stack->top; // Get the current top node
		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("Popped element: %d\n", temp->data);
		stack->top = stack->top->next; // Update the top to the next node
		free(temp); // Free the memory of the popped node
	}
	sleep(5);
}

// Function to peek at the top element of the stack
void peek(struct Stack* stack) {
	if (isEmpty(stack)) {
		printf("\n\n\n\n\n\n");
		printCentered("Underflow!!");
	} else {
		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("Top element: %d\n", stack->top->data);
	}
	sleep(5);
}

// Function to display all elements in the stack with their positions
void display(struct Stack* stack) {
	if (isEmpty(stack)) {
		printf("\n\n\n\n\n\n");
		printCentered("The stack is empty.\n");
	} else {
		printf("\n\n\n\n\n\n");
		printCentered("All elements in the stack with their positions:\n");
		struct SNode* current = stack->top;
		int position = 1; // Start position from 1
		while (current != NULL) {
			printf("\n\t\t\t\t");
			printf("Position %d: %d\n", position, current->data);
			current = current->next; // Move to the next node
			position++;
		}
	}
	sleep(5);
}

// Function to display all elements in the stack with their positions
void displayStack(struct Stack* stack) {
	printf("\nAll elements in the stack:\n");
	struct SNode* current = stack->top;
	int position = 1; // Start position from 1
	while (current != NULL) {
		printf("Stack: %d <- \n", current->data);
		current = current->next; // Move to the next node
		position++;
	}
}


/* ==========================================================*/
/* ========================= QUEUES =========================*/
/* ==========================================================*/

// Creates a new node
struct Qnode* create(int data) {
	struct Qnode* new_node = (struct Qnode*)malloc(sizeof(struct Qnode));
	if (new_node == NULL) {
		printf("\nMemory can't be allocated\n");
		return NULL;
	}
	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}

// Check if the queue is empty
int isEmptyQue() {
	return front == NULL; // If front is NULL, the queue is empty
}

// Inserts an item to the queue
void enqueue(int data) {
	struct Qnode* new_node = create(data);
	if (new_node != NULL) {
		if (rear == NULL) { // If the queue is empty
			front = new_node;
		} else {
			rear->next = new_node; // Link the new node at the end of the queue
		}
		rear = new_node; // Rear pointing to the new node
		printf("\n\t\t\t\t  ");
		printf("%d was inserted!\n", data);
	}
}

// Removes an item from the queue
int dequeue() {
	if (isEmptyQue()) {
		printf("\n\n\n\n\n\n");
		printCentered("Queue is empty\n");
		return -1; // Indicate failure
	}
	int data = front->data; // Get the data from the front node
	struct Qnode* temp = front; // Temporary pointer to free the node
	front = front->next; // Move front to the next node
	if (front == NULL) {
		rear = NULL; // Set rear to NULL if the queue is empty
	}
	free(temp); // Free the memory of the dequeued node
	return data;
}

// Display the queue
void displayQue() {
	if (isEmptyQue()) {
		printf("\n\n\n\n\n\n");
		printCentered("Queue is empty\n");
		return;
	}
	struct Qnode* temp = front;
	printf("\n\n\n\n\n\n\n\t\t\t");
	printf("Queue elements: ");
	while (temp != NULL) {
		printf("%d ", temp->data);
		sleep(1);
		temp = temp->next; // Move to the next node
	}
	printf("\n");
}

// Display the queue
void showQue() {
	struct Qnode* temp = front;
	printf("\n\t\t    Queue elements: ");
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next; // Move to the next node
	}
	printf("\n");
}


/* ==========================================================*/
/* ========================= TREES ==========================*/
/* ==========================================================*/

// Function to create a new tree node
struct TreeNode* createtreeNode(int data) {
	struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	if (!newNode) {
		printf("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

// Function to insert a node in the binary tree
struct TreeNode* insert(struct TreeNode* root, int data) {
	if (root == NULL) {
		printf("\n\t\t\t\tInserting %d as root node.\n", data);
		return createtreeNode(data);
	}

	if (data < root->data) {
		printf("\n\t\t\t\tInserting %d to the left of %d.\n", data, root->data);
		root->left = insert(root->left, data);
	} else {
		printf("\n\t\t\t\tInserting %d to the right of %d.\n", data, root->data);
		root->right = insert(root->right, data);
	}
	return root;
}

// Function to perform in-order traversal
void inOrder(struct TreeNode* root) {
	if (root != NULL) {
		inOrder(root->left);
		printf("%d ", root->data);
		inOrder(root->right);

	}
}

// Function to perform pre-order traversal
void preOrder(struct TreeNode* root) {
	if (root != NULL) {
		printf("%d ", root->data);
		preOrder(root->left);
		preOrder(root->right);

	}
}

// Function to perform post-order traversal
void postOrder(struct TreeNode* root) {
	if (root != NULL) {
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ", root->data);

	}
}

// Function to search for a value in the binary tree
struct TreeNode* search(struct TreeNode* root, int key) {
	if (root == NULL || root->data == key) {
		return root; // Return the node if found or NULL if not found
	}

	if (key < root->data) {
		return search(root->left, key); // Search in the left subtree
	} else {
		return search(root->right, key); // Search in the right subtree
	}
}

// Function to display the tree structure in a simple format
void displayTree(struct TreeNode* root) {
	if (root == NULL) {
		return; // If the tree is empty, return
	}

	// Print the root node
	printf("\n\t\t\t\tRoot: %d\n", root->data);

	// Print children of the root
	if (root->left != NULL) {
		printf("\n\t\t\t\tChild (left) of %d: %d\n", root->data, root->left->data);
	}
	if (root->right != NULL) {
		printf("\n\t\t\t\tChild (right) of %d: %d\n", root->data, root->right->data);
	}

	// Recursively display the children of the left and right subtrees
	if (root->left != NULL) {
		displayTree(root->left);
	}
	if (root->right != NULL) {
		displayTree(root->right);
	}
}

