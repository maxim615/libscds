#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basicTypes.h"
#include "Stack.h"
#include "BinarySearchTree.h"
#include "DoublyLinkedList.h"
#include "SinglyLinkedList.h"

void print_char(char* a){
     printf("%c\n", *a);
}

DECLARE_BINARYSEARCHTREE(Integer)
DECLARE_BINARYSEARCHTREE(Float)
DECLARE_DOUBLYLINKEDLIST(Double)
DECLARE_STACK(Float)
DECLARE_STACK(char)
DECLARE_SINGLYLINKEDLIST(char)


int main(void){
    int i;
    BinarySearchTree_Integer* tree1 = new_BinarySearchTree_Integer(tree1);
    Integer a = {6};
    Integer b = {3};
    Integer c = {1};
    Integer d = {9};
    addToTree_Integer(tree1, a);
    addToTree_Integer(tree1, b);
    addToTree_Integer(tree1, c);
    addToTree_Integer(tree1, d);
    //print_BinarySearchTree_Integer(tree1);
    destroy_BinarySearchTree_Integer(tree1);

    char character = 'g';
    Stack_char* stack1 = new_Stack_char(stack1);
    stackPush_char(stack1, character);
    destroy_Stack_char(stack1);
    
    BinarySearchTree_Float* tree2 = new_BinarySearchTree_Float(tree2);
    {
    Float aa = {4.5};
    Float bb = {1.5};
    Float cc = {9.9};
    Float dd = {12};
    Float ee = {15.5};
    addToTree_Float(tree2, aa);
    addToTree_Float(tree2, bb);
    addToTree_Float(tree2, cc);
    addToTree_Float(tree2, dd);
    addToTree_Float(tree2, ee);
    }
    print_treeIncreasing_Float(tree2);
    print_treeDecreasing_Float(tree2);
    destroy_BinarySearchTree_Float(tree2);

    
    srand(time(NULL));
    int rand_array[150]; 
    for(i = 0; i < sizeof(rand_array)/sizeof(int); i++) 
    rand_array[i] = rand();
    BinarySearchTree_Integer* tree3 = new_BinarySearchTree_Integer(tree3);
    Integer temp[sizeof(rand_array)/sizeof(int)]; 
    for(i = 0; i < sizeof(rand_array)/sizeof(int); i++){ 
    temp[i].value = rand_array[i];
        addToTree_Integer(tree3, temp[i]);
    }
    print_treeIncreasing_Integer(tree3); 
    destroy_BinarySearchTree_Integer(tree3);
    
    DoublyLinkedList_Double* list0 = new_DoublyLinkedList_Double(list0);
    {
    Double test = {1.5};
    Double test2 = {3.5};
    addToDoublyLinkedList_Double(list0, test);
    addToDoublyLinkedList_Double(list0, test2);
    }
    print_DoublyLinkedList_Double(list0);
    destroy_DoublyLinkedList_Double(list0);
    Stack_Float* stack0 = new_Stack_Float(stack0);
    Float FloatArray[100];
    for(i = 0; i < 100; i++){
        FloatArray[i].value = i;
        stackPush_Float(stack0, FloatArray[i]);
    }
    print_Stack_Float(stack0);
    destroy_Stack_Float(stack0);

    SinglyLinkedList_char* sList1 = new_SinglyLinkedList_char(sList1);
    addToSinglyLinkedList_char(sList1, 'd');
    addToSinglyLinkedList_char(sList1, 'v');
    addToSinglyLinkedList_char(sList1, 'a');
    addToSinglyLinkedList_char(sList1, 'k');
    print_SinglyLinkedList_char(sList1);
    destroy_SinglyLinkedList_char(sList1);
    
    return 0;
}

        
