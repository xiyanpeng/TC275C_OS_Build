

#ifndef THREAD_CONFIG_H_
#define THREAD_CONFIG_H_

#include "os_thread_type.h"
#include "task_cfg.h"


/* Thread priority... */
/* Core 0...*/
#define  CORE0_THREAD0_PRIORITY    CORE0_TASK0_PRIORITY
#define  CORE0_THREAD1_PRIORITY    CORE0_TASK1_PRIORITY
#define  CORE0_THREAD2_PRIORITY    CORE0_TASK2_PRIORITY
#define  CORE0_THREAD3_PRIORITY    CORE0_TASK3_PRIORITY
#define  CORE0_THREAD4_PRIORITY    CORE0_TASK4_PRIORITY
#define  CORE0_THREAD5_PRIORITY    CORE0_TASK5_PRIORITY
#define  CORE0_THREAD6_PRIORITY    CORE0_TASK6_PRIORITY
#define  CORE0_THREAD7_PRIORITY    CORE0_TASK7_PRIORITY
#define  CORE0_THREAD8_PRIORITY    CORE0_TASK8_PRIORITY
#define  CORE0_THREAD9_PRIORITY    CORE0_TASK9_PRIORITY
#define  CORE0_THREAD10_PRIORITY   CORE0_TASK10_PRIORITY

/* Core 1...*/
#define  CORE1_THREAD0_PRIORITY    CORE1_TASK0_PRIORITY
#define  CORE1_THREAD1_PRIORITY    CORE1_TASK1_PRIORITY
#define  CORE1_THREAD2_PRIORITY    CORE1_TASK2_PRIORITY
#define  CORE1_THREAD3_PRIORITY    CORE1_TASK3_PRIORITY
#define  CORE1_THREAD4_PRIORITY    CORE1_TASK4_PRIORITY
#define  CORE1_THREAD5_PRIORITY    CORE1_TASK5_PRIORITY
#define  CORE1_THREAD6_PRIORITY    CORE1_TASK6_PRIORITY
#define  CORE1_THREAD7_PRIORITY    CORE1_TASK7_PRIORITY
#define  CORE1_THREAD8_PRIORITY    CORE1_TASK8_PRIORITY
#define  CORE1_THREAD9_PRIORITY    CORE1_TASK9_PRIORITY
#define  CORE1_THREAD10_PRIORITY   CORE1_TASK10_PRIORITY

/* Core 2...*/
#define  CORE2_THREAD0_PRIORITY    CORE2_TASK0_PRIORITY
#define  CORE2_THREAD1_PRIORITY    CORE2_TASK1_PRIORITY
#define  CORE2_THREAD2_PRIORITY    CORE2_TASK2_PRIORITY
#define  CORE2_THREAD3_PRIORITY    CORE2_TASK3_PRIORITY
#define  CORE2_THREAD4_PRIORITY    CORE2_TASK4_PRIORITY
#define  CORE2_THREAD5_PRIORITY    CORE2_TASK5_PRIORITY
#define  CORE2_THREAD6_PRIORITY    CORE2_TASK6_PRIORITY
#define  CORE2_THREAD7_PRIORITY    CORE2_TASK7_PRIORITY
#define  CORE2_THREAD8_PRIORITY    CORE2_TASK8_PRIORITY
#define  CORE2_THREAD9_PRIORITY    CORE2_TASK9_PRIORITY
#define  CORE2_THREAD10_PRIORITY   CORE2_TASK10_PRIORITY


/* Thread mode... */
/* Core 0...*/
#define  CORE0_THREAD0_MODE        CORE0_TASK0_MODE    
#define  CORE0_THREAD1_MODE        CORE0_TASK1_MODE 
#define  CORE0_THREAD2_MODE        CORE0_TASK2_MODE 
#define  CORE0_THREAD3_MODE        CORE0_TASK3_MODE 
#define  CORE0_THREAD4_MODE        CORE0_TASK4_MODE 
#define  CORE0_THREAD5_MODE        CORE0_TASK5_MODE 
#define  CORE0_THREAD6_MODE        CORE0_TASK6_MODE 
#define  CORE0_THREAD7_MODE        CORE0_TASK7_MODE 
#define  CORE0_THREAD8_MODE        CORE0_TASK8_MODE 
#define  CORE0_THREAD9_MODE        CORE0_TASK9_MODE 
#define  CORE0_THREAD10_MODE       CORE0_TASK10_MODE

/* Core 1...*/
#define  CORE1_THREAD0_MODE        CORE1_TASK0_MODE    
#define  CORE1_THREAD1_MODE        CORE1_TASK1_MODE 
#define  CORE1_THREAD2_MODE        CORE1_TASK2_MODE 
#define  CORE1_THREAD3_MODE        CORE1_TASK3_MODE 
#define  CORE1_THREAD4_MODE        CORE1_TASK4_MODE 
#define  CORE1_THREAD5_MODE        CORE1_TASK5_MODE 
#define  CORE1_THREAD6_MODE        CORE1_TASK6_MODE 
#define  CORE1_THREAD7_MODE        CORE1_TASK7_MODE 
#define  CORE1_THREAD8_MODE        CORE1_TASK8_MODE 
#define  CORE1_THREAD9_MODE        CORE1_TASK9_MODE 
#define  CORE1_THREAD10_MODE       CORE1_TASK10_MODE

/* Core 2...*/
#define  CORE2_THREAD0_MODE        CORE2_TASK0_MODE    
#define  CORE2_THREAD1_MODE        CORE2_TASK1_MODE 
#define  CORE2_THREAD2_MODE        CORE2_TASK2_MODE 
#define  CORE2_THREAD3_MODE        CORE2_TASK3_MODE 
#define  CORE2_THREAD4_MODE        CORE2_TASK4_MODE 
#define  CORE2_THREAD5_MODE        CORE2_TASK5_MODE 
#define  CORE2_THREAD6_MODE        CORE2_TASK6_MODE 
#define  CORE2_THREAD7_MODE        CORE2_TASK7_MODE 
#define  CORE2_THREAD8_MODE        CORE2_TASK8_MODE 
#define  CORE2_THREAD9_MODE        CORE2_TASK9_MODE 
#define  CORE2_THREAD10_MODE       CORE2_TASK10_MODE

#if (THREAD_GLOBAL_CONFIG_DEFINITION == ENABLE)
#include "os.h"
OS_CONST pthread_config_t os_pthread_init_config_database[CORE_MAX_ID_NUM][THREAD_MAX_ID_NUM] =
{
    {
	  {THREAD_ID0,  CORE0_TASK0_TYPE,  CORE0_TASK0_PERIOD,  CORE0_TASK0_ACTIVED },
	  {THREAD_ID1,  CORE0_TASK1_TYPE,  CORE0_TASK1_PERIOD,  CORE0_TASK1_ACTIVED },
	  {THREAD_ID2,  CORE0_TASK2_TYPE,  CORE0_TASK2_PERIOD,  CORE0_TASK2_ACTIVED },
	  {THREAD_ID3,  CORE0_TASK3_TYPE,  CORE0_TASK3_PERIOD,  CORE0_TASK3_ACTIVED },
	  {THREAD_ID4,  CORE0_TASK4_TYPE,  CORE0_TASK4_PERIOD,  CORE0_TASK4_ACTIVED },
	  {THREAD_ID5,  CORE0_TASK5_TYPE,  CORE0_TASK5_PERIOD,  CORE0_TASK5_ACTIVED },  
	  {THREAD_ID6,  CORE0_TASK6_TYPE,  CORE0_TASK6_PERIOD,  CORE0_TASK6_ACTIVED },
	  {THREAD_ID7,  CORE0_TASK7_TYPE,  CORE0_TASK7_PERIOD,  CORE0_TASK7_ACTIVED },
	  {THREAD_ID8,  CORE0_TASK8_TYPE,  CORE0_TASK8_PERIOD,  CORE0_TASK8_ACTIVED },
	  {THREAD_ID9,  CORE0_TASK9_TYPE,  CORE0_TASK9_PERIOD,  CORE0_TASK9_ACTIVED },
	  {THREAD_ID10, CORE0_TASK10_TYPE, CORE0_TASK10_PERIOD, CORE0_TASK10_ACTIVED}
	},
	{
	  {THREAD_ID0,  CORE1_TASK0_TYPE,  CORE1_TASK0_PERIOD,  CORE1_TASK0_ACTIVED },
	  {THREAD_ID1,  CORE1_TASK1_TYPE,  CORE1_TASK1_PERIOD,  CORE1_TASK1_ACTIVED },
	  {THREAD_ID2,  CORE1_TASK2_TYPE,  CORE1_TASK2_PERIOD,  CORE1_TASK2_ACTIVED },
	  {THREAD_ID3,  CORE1_TASK3_TYPE,  CORE1_TASK3_PERIOD,  CORE1_TASK3_ACTIVED },
	  {THREAD_ID4,  CORE1_TASK4_TYPE,  CORE1_TASK4_PERIOD,  CORE1_TASK4_ACTIVED },
	  {THREAD_ID5,  CORE1_TASK5_TYPE,  CORE1_TASK5_PERIOD,  CORE1_TASK5_ACTIVED },  
	  {THREAD_ID6,  CORE1_TASK6_TYPE,  CORE1_TASK6_PERIOD,  CORE1_TASK6_ACTIVED },
	  {THREAD_ID7,  CORE1_TASK7_TYPE,  CORE1_TASK7_PERIOD,  CORE1_TASK7_ACTIVED },
	  {THREAD_ID8,  CORE1_TASK8_TYPE,  CORE1_TASK8_PERIOD,  CORE1_TASK8_ACTIVED },
	  {THREAD_ID9,  CORE1_TASK9_TYPE,  CORE1_TASK9_PERIOD,  CORE1_TASK9_ACTIVED },
	  {THREAD_ID10, CORE1_TASK10_TYPE, CORE1_TASK10_PERIOD, CORE1_TASK10_ACTIVED}	
	},
	{
	  {THREAD_ID0,  CORE2_TASK0_TYPE,  CORE2_TASK0_PERIOD,  CORE2_TASK0_ACTIVED },
	  {THREAD_ID1,  CORE2_TASK1_TYPE,  CORE2_TASK1_PERIOD,  CORE2_TASK1_ACTIVED },
	  {THREAD_ID2,  CORE2_TASK2_TYPE,  CORE2_TASK2_PERIOD,  CORE2_TASK2_ACTIVED },
	  {THREAD_ID3,  CORE2_TASK3_TYPE,  CORE2_TASK3_PERIOD,  CORE2_TASK3_ACTIVED },
	  {THREAD_ID4,  CORE2_TASK4_TYPE,  CORE2_TASK4_PERIOD,  CORE2_TASK4_ACTIVED },
	  {THREAD_ID5,  CORE2_TASK5_TYPE,  CORE2_TASK5_PERIOD,  CORE2_TASK5_ACTIVED },  
	  {THREAD_ID6,  CORE2_TASK6_TYPE,  CORE2_TASK6_PERIOD,  CORE2_TASK6_ACTIVED },
	  {THREAD_ID7,  CORE2_TASK7_TYPE,  CORE2_TASK7_PERIOD,  CORE2_TASK7_ACTIVED },
	  {THREAD_ID8,  CORE2_TASK8_TYPE,  CORE2_TASK8_PERIOD,  CORE2_TASK8_ACTIVED },
	  {THREAD_ID9,  CORE2_TASK9_TYPE,  CORE2_TASK9_PERIOD,  CORE2_TASK9_ACTIVED },
	  {THREAD_ID10, CORE2_TASK10_TYPE, CORE2_TASK10_PERIOD, CORE2_TASK10_ACTIVED}
	}
  
};
#include "os_kernel.h"
pthread_cond_t os_pthread_cond[CORE_MAX_ID_NUM][THREAD_MAX_ID_NUM] =
  { 
  	 {
      CORE0_PTHREAD_COND_INITIALIZER,CORE0_PTHREAD_COND_INITIALIZER,
	  CORE0_PTHREAD_COND_INITIALIZER,CORE0_PTHREAD_COND_INITIALIZER,
      CORE0_PTHREAD_COND_INITIALIZER,CORE0_PTHREAD_COND_INITIALIZER,
      CORE0_PTHREAD_COND_INITIALIZER,CORE0_PTHREAD_COND_INITIALIZER,
      CORE0_PTHREAD_COND_INITIALIZER,CORE0_PTHREAD_COND_INITIALIZER,
      CORE0_PTHREAD_COND_INITIALIZER
     },
  	 {
      CORE1_PTHREAD_COND_INITIALIZER,CORE1_PTHREAD_COND_INITIALIZER,
	  CORE1_PTHREAD_COND_INITIALIZER,CORE1_PTHREAD_COND_INITIALIZER,
      CORE1_PTHREAD_COND_INITIALIZER,CORE1_PTHREAD_COND_INITIALIZER,
      CORE1_PTHREAD_COND_INITIALIZER,CORE1_PTHREAD_COND_INITIALIZER,
      CORE1_PTHREAD_COND_INITIALIZER,CORE1_PTHREAD_COND_INITIALIZER,
      CORE1_PTHREAD_COND_INITIALIZER
     },
  	 {
      CORE2_PTHREAD_COND_INITIALIZER,CORE2_PTHREAD_COND_INITIALIZER,
	  CORE2_PTHREAD_COND_INITIALIZER,CORE2_PTHREAD_COND_INITIALIZER,
      CORE2_PTHREAD_COND_INITIALIZER,CORE2_PTHREAD_COND_INITIALIZER,
      CORE2_PTHREAD_COND_INITIALIZER,CORE2_PTHREAD_COND_INITIALIZER,
      CORE2_PTHREAD_COND_INITIALIZER,CORE2_PTHREAD_COND_INITIALIZER,
      CORE2_PTHREAD_COND_INITIALIZER
     }	  
  };

OS_CONST pthread_attr_t os_thread_attr[CORE_MAX_ID_NUM][THREAD_MAX_ID_NUM] =
	{
      { { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64}
	  },
      {
	  	{ SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64}
	  },
	  {
	  	{ SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64},
        { SUPER, CALL_DEPTH_OVERFLOW_AT_64}
	  }
	};
#include "os_kernel.h"
#include "os_trace.h"

void thread_done_after_task(pthread_config_t *pthread_config,CORE_ID_t core_id )
{ 	
  /* Trace */
  os_trace_task_time_end(core_id,pthread_config->task_id);

  if(pthread_config->type == EVENT)
  {
      /* Active thread */
	  pthread_cond_broadcast(&os_pthread_cond[core_id][pthread_config->actived_task_id]);
  }
  else if((pthread_config->type == PERIODIC)||
  	      (pthread_config->type == NO_DEFINITION))
  {
      /* Do nothing */
  }
}

void thread_done_before_task(pthread_config_t *pthread_config,CORE_ID_t core_id )
{ 
  if(pthread_config->type == EVENT)
  {
      pthread_cond_wait(&os_pthread_cond[core_id][pthread_config->task_id]);
  }
  else if(pthread_config->type == PERIODIC)
  {
	  pthread_cond_timedwait_np((uint16_t)(pthread_config->period));
  }
  else if(pthread_config->type == NO_DEFINITION)
  {
     /* Do nothing. */
  }
  /* trace */
  os_trace_task_time_begin(core_id,pthread_config->task_id);
}
#endif
#endif

