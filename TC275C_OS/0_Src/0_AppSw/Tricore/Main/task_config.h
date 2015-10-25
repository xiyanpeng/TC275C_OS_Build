
enum task_type{

   NO_DEFINITION,
   TASK_PERIODIC,
   TASK_EVENT
};

enum task_e {
	
    TASK_ID0,
    TASK_ID1,
    TASK_ID2,
    TASK_ID3,
    TASK_ID4,
    TASK_ID5,
    TASK_ID6,
    TASK_ID7,
    TASK_ID8,
    TASK_ID9,
    TASK_ID10,
    TASK_ID_MAX, 
    NO_TASK
};

/* core 0*/
/* 0 TASK config initialization */ 
#define CORE0_TASK0_TYPE       NO_DEFINITION             
#define CORE0_TASK0_PERIOD     (0)  /* unit:ms */
#define CORE0_TASK0_ACTIVED    NO_TASK

#define CORE0_TASK1_TYPE       TASK_PERIODIC
#define CORE0_TASK1_PERIOD     (1000)  /* unit:ms */
#define CORE0_TASK1_ACTIVED    NO_TASK

#define CORE0_TASK2_TYPE       TASK_PERIODIC
#define CORE0_TASK2_PERIOD     (1000)  /* unit:ms */
#define CORE0_TASK2_ACTIVED    NO_TASK

#define CORE0_TASK3_TYPE       TASK_EVENT
#define CORE0_TASK3_PERIOD     (0)
#define CORE0_TASK3_ACTIVED    TASK_ID4

#define CORE0_TASK4_TYPE       TASK_EVENT
#define CORE0_TASK4_PERIOD     (0)
#define CORE0_TASK4_ACTIVED    TASK_ID5

#define CORE0_TASK5_TYPE       TASK_EVENT
#define CORE0_TASK5_PERIOD     (0)
#define CORE0_TASK5_ACTIVED    TASK_ID6

#define CORE0_TASK6_TYPE       TASK_EVENT
#define CORE0_TASK6_PERIOD     (0)
#define CORE0_TASK6_ACTIVED    TASK_ID7

#define CORE0_TASK7_TYPE       TASK_EVENT
#define CORE0_TASK7_PERIOD     (0)
#define CORE0_TASK7_ACTIVED    TASK_ID8

#define CORE0_TASK8_TYPE       TASK_EVENT
#define CORE0_TASK8_PERIOD     (0)
#define CORE0_TASK8_ACTIVED    TASK_ID9

#define CORE0_TASK9_TYPE       TASK_EVENT
#define CORE0_TASK9_PERIOD     (0)
#define CORE0_TASK9_ACTIVED    NO_TASK

#define CORE0_TASK10_TYPE      TASK_PERIODIC
#define CORE0_TASK10_PERIOD    (1000)  /* unit:ms */
#define CORE0_TASK10_ACTIVED   NO_TASK


/* core 1                      */

#define CORE1_TASK0_TYPE       NO_DEFINITION             
#define CORE1_TASK0_PERIOD     (0)  /* unit:ms */
#define CORE1_TASK0_ACTIVED    NO_TASK

#define CORE1_TASK1_TYPE       TASK_PERIODIC
#define CORE1_TASK1_PERIOD     (1000)  /* unit:ms */
#define CORE1_TASK1_ACTIVED    NO_TASK

#define CORE1_TASK2_TYPE       TASK_PERIODIC
#define CORE1_TASK2_PERIOD     (1000)
#define CORE1_TASK2_ACTIVED    NO_TASK

#define CORE1_TASK3_TYPE       TASK_EVENT
#define CORE1_TASK3_PERIOD     (0)
#define CORE1_TASK3_ACTIVED    TASK_ID4

#define CORE1_TASK4_TYPE       TASK_EVENT
#define CORE1_TASK4_PERIOD     (0)
#define CORE1_TASK4_ACTIVED    TASK_ID5

#define CORE1_TASK5_TYPE       TASK_EVENT
#define CORE1_TASK5_PERIOD     (0)
#define CORE1_TASK5_ACTIVED    TASK_ID6

#define CORE1_TASK6_TYPE       TASK_EVENT
#define CORE1_TASK6_PERIOD     (0)
#define CORE1_TASK6_ACTIVED    TASK_ID7

#define CORE1_TASK7_TYPE       TASK_EVENT
#define CORE1_TASK7_PERIOD     (0)
#define CORE1_TASK7_ACTIVED    TASK_ID8

#define CORE1_TASK8_TYPE       TASK_EVENT
#define CORE1_TASK8_PERIOD     (0)
#define CORE1_TASK8_ACTIVED    TASK_ID9

#define CORE1_TASK9_TYPE       TASK_EVENT
#define CORE1_TASK9_PERIOD     (0)
#define CORE1_TASK9_ACTIVED    NO_TASK

#define CORE1_TASK10_TYPE      TASK_PERIODIC
#define CORE1_TASK10_PERIOD    (1000)
#define CORE1_TASK10_ACTIVED   NO_TASK


/* core 2 */
#define CORE2_TASK0_TYPE       NO_DEFINITION             
#define CORE2_TASK0_PERIOD     (0)  /* unit:ms */
#define CORE2_TASK0_ACTIVED    NO_TASK

#define CORE2_TASK1_TYPE       TASK_PERIODIC
#define CORE2_TASK1_PERIOD     (1000)  /* unit:ms */
#define CORE2_TASK1_ACTIVED    NO_TASK

#define CORE2_TASK2_TYPE       TASK_PERIODIC
#define CORE2_TASK2_PERIOD     (1000)
#define CORE2_TASK2_ACTIVED    NO_TASK

#define CORE2_TASK3_TYPE       TASK_EVENT
#define CORE2_TASK3_PERIOD     (0)
#define CORE2_TASK3_ACTIVED    TASK_ID4

#define CORE2_TASK4_TYPE       TASK_EVENT
#define CORE2_TASK4_PERIOD     (0)
#define CORE2_TASK4_ACTIVED    TASK_ID5

#define CORE2_TASK5_TYPE       TASK_EVENT
#define CORE2_TASK5_PERIOD     (0)
#define CORE2_TASK5_ACTIVED    TASK_ID6

#define CORE2_TASK6_TYPE       TASK_EVENT
#define CORE2_TASK6_PERIOD     (0)
#define CORE2_TASK6_ACTIVED    TASK_ID7

#define CORE2_TASK7_TYPE       TASK_EVENT
#define CORE2_TASK7_PERIOD     (0)
#define CORE2_TASK7_ACTIVED    TASK_ID8

#define CORE2_TASK8_TYPE       TASK_EVENT
#define CORE2_TASK8_PERIOD     (0)
#define CORE2_TASK8_ACTIVED    TASK_ID9

#define CORE2_TASK9_TYPE       TASK_EVENT
#define CORE2_TASK9_PERIOD     (0)
#define CORE2_TASK9_ACTIVED    NO_TASK

#define CORE2_TASK10_TYPE      TASK_PERIODIC
#define CORE2_TASK10_PERIOD    (1000)
#define CORE2_TASK10_ACTIVED   NO_TASK

const pthread_config_t core0_pthread_init_config_database[TASK_ID_MAX] =
{
  {TASK_ID0,  CORE0_TASK0_TYPE,  CORE0_TASK0_PERIOD,  CORE0_TASK0_ACTIVED },
  {TASK_ID1,  CORE0_TASK1_TYPE,  CORE0_TASK1_PERIOD,  CORE0_TASK1_ACTIVED },
  {TASK_ID2,  CORE0_TASK2_TYPE,  CORE0_TASK2_PERIOD,  CORE0_TASK2_ACTIVED },
  {TASK_ID3,  CORE0_TASK3_TYPE,  CORE0_TASK3_PERIOD,  CORE0_TASK3_ACTIVED },
  {TASK_ID4,  CORE0_TASK4_TYPE,  CORE0_TASK4_PERIOD,  CORE0_TASK4_ACTIVED },
  {TASK_ID5,  CORE0_TASK5_TYPE,  CORE0_TASK5_PERIOD,  CORE0_TASK5_ACTIVED },  
  {TASK_ID6,  CORE0_TASK6_TYPE,  CORE0_TASK6_PERIOD,  CORE0_TASK6_ACTIVED },
  {TASK_ID7,  CORE0_TASK7_TYPE,  CORE0_TASK7_PERIOD,  CORE0_TASK7_ACTIVED },
  {TASK_ID8,  CORE0_TASK8_TYPE,  CORE0_TASK8_PERIOD,  CORE0_TASK8_ACTIVED },
  {TASK_ID9,  CORE0_TASK9_TYPE,  CORE0_TASK9_PERIOD,  CORE0_TASK9_ACTIVED },
  {TASK_ID10, CORE0_TASK10_TYPE, CORE0_TASK10_PERIOD, CORE0_TASK10_ACTIVED},
};

const pthread_config_t core1_pthread_init_config_database[TASK_ID_MAX] =
{
  {TASK_ID0,  CORE1_TASK0_TYPE,  CORE1_TASK0_PERIOD,  CORE1_TASK0_ACTIVED },
  {TASK_ID1,  CORE1_TASK1_TYPE,  CORE1_TASK1_PERIOD,  CORE1_TASK1_ACTIVED },
  {TASK_ID2,  CORE1_TASK2_TYPE,  CORE1_TASK2_PERIOD,  CORE1_TASK2_ACTIVED },
  {TASK_ID3,  CORE1_TASK3_TYPE,  CORE1_TASK3_PERIOD,  CORE1_TASK3_ACTIVED },
  {TASK_ID4,  CORE1_TASK4_TYPE,  CORE1_TASK4_PERIOD,  CORE1_TASK4_ACTIVED },
  {TASK_ID5,  CORE1_TASK5_TYPE,  CORE1_TASK5_PERIOD,  CORE1_TASK5_ACTIVED },  
  {TASK_ID6,  CORE1_TASK6_TYPE,  CORE1_TASK6_PERIOD,  CORE1_TASK6_ACTIVED },
  {TASK_ID7,  CORE1_TASK7_TYPE,  CORE1_TASK7_PERIOD,  CORE1_TASK7_ACTIVED },
  {TASK_ID8,  CORE1_TASK8_TYPE,  CORE1_TASK8_PERIOD,  CORE1_TASK8_ACTIVED },
  {TASK_ID9,  CORE1_TASK9_TYPE,  CORE1_TASK9_PERIOD,  CORE1_TASK9_ACTIVED },
  {TASK_ID10, CORE1_TASK10_TYPE, CORE1_TASK10_PERIOD, CORE1_TASK10_ACTIVED},
};

const pthread_config_t core2_pthread_init_config_database[TASK_ID_MAX] =
{
  {TASK_ID0,  CORE2_TASK0_TYPE,  CORE2_TASK0_PERIOD,  CORE2_TASK0_ACTIVED },
  {TASK_ID1,  CORE2_TASK1_TYPE,  CORE2_TASK1_PERIOD,  CORE2_TASK1_ACTIVED },
  {TASK_ID2,  CORE2_TASK2_TYPE,  CORE2_TASK2_PERIOD,  CORE2_TASK2_ACTIVED },
  {TASK_ID3,  CORE2_TASK3_TYPE,  CORE2_TASK3_PERIOD,  CORE2_TASK3_ACTIVED },
  {TASK_ID4,  CORE2_TASK4_TYPE,  CORE2_TASK4_PERIOD,  CORE2_TASK4_ACTIVED },
  {TASK_ID5,  CORE2_TASK5_TYPE,  CORE2_TASK5_PERIOD,  CORE2_TASK5_ACTIVED },  
  {TASK_ID6,  CORE2_TASK6_TYPE,  CORE2_TASK6_PERIOD,  CORE2_TASK6_ACTIVED },
  {TASK_ID7,  CORE2_TASK7_TYPE,  CORE2_TASK7_PERIOD,  CORE2_TASK7_ACTIVED },
  {TASK_ID8,  CORE2_TASK8_TYPE,  CORE2_TASK8_PERIOD,  CORE2_TASK8_ACTIVED },
  {TASK_ID9,  CORE2_TASK9_TYPE,  CORE2_TASK9_PERIOD,  CORE2_TASK9_ACTIVED },
  {TASK_ID10, CORE2_TASK10_TYPE, CORE2_TASK10_PERIOD, CORE2_TASK10_ACTIVED},
};
