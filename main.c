#include <stdio.h>

int main_memory = 45;

struct Jobs {
  int priority;
  char title[10];
};

  struct Jobs job;

// TODO Submit Queue --> incoming_job() {}
//   incoming job. Create a struct with all job information and linked list pointer

void incoming_job(char job_info) {

  struct Jobs job1;
  
}


// TODO Hold Queue 1 --> sorted linked list based on SHORTEST JOB FIRST

// TODO Hold Queue 2 --> linked list based on FIRST IN FIRST OUT

// TODO Job Scheduling --> schedule_job() {}

// TODO Ready Queue --> linked list of ready queue jobs

// TODO Process Scheduling --> create the round robin

// TODO CPU Execution --> processing and context swtiching

// TODO Wait Queue --> I/O or event





int main(void) {
  printf("Hello World\n");
  return 0;
}