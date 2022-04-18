#include <stdio.h>
#include <string.h>

int main_memory = 45;

struct Jobs {
  int priority;
  char title;
};


// TODO Hold Queue 1 --> sorted linked list based on SHORTEST JOB FIRST
void send_2_hold_q_1(struct Jobs job) {
  puts("Recieved job, placing into queue SJF");
  
}

// TODO Hold Queue 2 --> linked list based on FIRST IN FIRST OUT
void send_2_hold_q_2(struct Jobs job) {
  puts("Recieved job, placing into queue FIFO");
  
}

// TODO Submit Queue --> incoming_job() {}
//   incoming job. Create a struct with all job information and linked list pointer

void incoming_job(char job_info) {
  
  struct Jobs new_job;
  new_job.priority = 1;
  new_job.title = 'c';

  printf("job1 pri: %i\njob1 title: %c\n",new_job.priority,new_job.title);

  switch (new_job.priority){
      case 1:
        send_2_hold_q_1(new_job);
      case 2: 
        send_2_hold_q_2(new_job);
    }
}


// TODO Job Scheduling --> schedule_job() {}

// TODO Ready Queue --> linked list of ready queue jobs

// TODO Process Scheduling --> create the round robin

// TODO CPU Execution --> processing and context swtiching

// TODO Wait Queue --> I/O or event





int main(void) {
  incoming_job("Hello World\n");
  return 0;
}