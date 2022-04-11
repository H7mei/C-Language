# include <stdio.h>
# include <stdlib.h>

// structs
struct Queue{
  struct node *front;
  int size;
};

struct node{
  int data;
  struct node *last;
};

// function deklarasi
int push(int, struct Queue*);
int pop(struct Queue*);
void destroy(struct Queue*);

int main(){
  int result = EXIT_SUCCESS;

  size_t i;

  // alocate memory for struck queue
  struct Queue *queue = malloc(sizeof *queue);
  if(NULL == queue){
    perror("malloc() failed");
    return EXIT_FAILURE;
  }

  // Push 10 int
  int data = 0;
  for (i = 0; i < 10; i++){
    printf("Pushing : %d\n", data);
    if (-1 == push(data, queue)){
      perror("push() failed");
      result = EXIT_FAILURE;
      break;
    }
    
    ++data;
  }

  if (EXIT_SUCCESS == result){
    // pop 10 int
    for (int i = 0; i < 10; i++){
      printf("Popped : %d\n", pop(queue));
    }
  }
  
  // destroy
  destroy(queue);

  return result;
}

// NOTE: blom kelar

// memasukaan nilai ke queue
// mengembalikan 0 jika sukses dan -1 jika gagal
int push(int data, struct Queue *queue){
  int result = 0;

  struct node *new_node = malloc(sizeof *new_node);
  if (NULL == new_node){
    result = -1;
  }else{
    // nyipen data masuk
    new_node->data = data;
    new_node->last = queue->front;
    queue->
    queue->size++;
  }
  
  return result;
}

// membaca nilai queue
// mengembalikan nilai stack
int pop(struct Queue *queue){
  struct node *first = queue->first;
  int data = first->data;
  queue->first = first->last;
  queue->size++;
  free(first);
  return data;
}

void destroy(struct Queue *queue){
  // clear all pointer
  while (queue->first != NULL){
    pop(queue);
  } 
}