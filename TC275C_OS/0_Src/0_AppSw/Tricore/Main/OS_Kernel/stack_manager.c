/****************************************************************************/
/* FILE NAME:    stack_manager.c                                            */
/* CREATE ON:    Aug 26, 2015                                               */
/* AUTHER:       Yanpeng.xi                                                 */
/* DESCRIPTION:  The c file includes logic that tests the stack usage of    */
/*               each task in thread                                        */
/* COMMENT:      Multicore OS based on Aurix 275C app kit and TASKING 4.3   */
/*               compiler                                                   */
/****************************************************************************/

/****************************************************************************/
/* Feature Include Files                                                    */
/****************************************************************************/
#include "os_type.h"
#include "low_driver_port.h"

/****************************************************************************/
/* Macro Definitions                                                        */
/****************************************************************************/
#define TIME_UNIT_SWITCH            (1000)
#define STACK_MEA_MAX_POS_NUM       (10)
#define PTHREAD_STACK_SIZE_IN_BYTE  (256)
#define STACK_MEA_MAX_CORE_NUM      (3)
#define STACK_MEA_MAX_THREAD_NUM    (11)
#define FACTOR                      (1000)


#if (OS_STACK_MODE == MORE_STACKS)
  #define MAX_MEASURE_THREADS       (10)
#else
#endif

/****************************************************************************/
/* Type Definitions                                                         */
/****************************************************************************/
typedef struct 
{
    osu32_t stack_init_address;
    osu32_t stack_current_address;
    osu32_t stack_used_size_byte;
	osu32_t stack_used_percent;
	
} pthread_stack_t; 

typedef enum 
{
    STACK_BGEGIN,
    STACK_END,
    STACK_SIZE_IN_BYTE,
    STACK_SIZE_USED_IN_BYTE,
    STACK_SIZE_USED_IN_PERCENT,
#if (OS_STACK_MODE == MORE_STACKS)
    THREAD_ORDER_NUM,
#endif 
	STACK_INFO_MAX_ITEMS
	
} pthread_stack_info_t; 

/****************************************************************************/
/* Static Variable Definitions                                              */
/****************************************************************************/

static osu32_t core0_one_stack_info[STACK_INFO_MAX_ITEMS];

#if (OS_STACK_MODE == MORE_STACKS)
  static osu32_t core0_many_stacks_info[MAX_MEASURE_THREADS][STACK_INFO_MAX_ITEMS];
  static osu32_t core0_thread_num = 0;
#else
  
#endif

/****************************************************************************/
/* FUNTION NAME:get_thread_init_stack_address                               */
/* DESCRIPTION: Get the initial stack address of every thread               */
/****************************************************************************/
void initialize_core0_stack_memory(osu32_t* stack_end_address,osu32_t stack_size)
{ 
  /* The stack memory is filled with 0xAA in byte*/
  osu32_t stack_size_in_word,index;

  core0_one_stack_info[STACK_BGEGIN]        = (osu32_t)stack_end_address + stack_size;
  core0_one_stack_info[STACK_END]           = (osu32_t)stack_end_address;
  core0_one_stack_info[STACK_SIZE_IN_BYTE]  = stack_size;
  
  stack_size_in_word = stack_size/4;
  for(index = 0 ; index < stack_size_in_word; index++ )
  {
     *stack_end_address++ = 0xAAAAAAAA;
  }
}

/****************************************************************************/
/* FUNTION NAME:core0_get_the_one_stack_used                                */
/* DESCRIPTION: Get the initial stack address of every thread               */
/*              The function should be called in idle thread                */
/****************************************************************************/ 
osu32_t core0_get_the_one_stack_used(void)
{ 
  osu8_t* stack_end_address;
  osu32_t byte_counter =0;

  stack_end_address = (osu8_t*)core0_one_stack_info[STACK_END]; 

  while(*stack_end_address++ == 0xAA)
  {
     byte_counter++;  
  }	
  core0_one_stack_info[STACK_SIZE_USED_IN_BYTE]    = 
    core0_one_stack_info[STACK_SIZE_IN_BYTE] - byte_counter;
  
  core0_one_stack_info[STACK_SIZE_USED_IN_PERCENT] = 
  	(core0_one_stack_info[STACK_SIZE_USED_IN_BYTE]*FACTOR)/core0_one_stack_info[STACK_SIZE_IN_BYTE]; 

  return core0_one_stack_info[STACK_SIZE_USED_IN_PERCENT];
}

#if (OS_STACK_MODE == MORE_STACKS)
/****************************************************************************/
/* FUNTION NAME:get_thread_init_stack_address                               */
/* DESCRIPTION: Get the initial stack address of every thread               */
/****************************************************************************/
void initialize_core0_many_stacks_memory(osu32_t thread_order_num,osu32_t* stack_end_address,osu32_t stack_size)
{ 
  /* The stack memory is filled with 0xAA in byte*/
  osu32_t stack_size_in_word,index;

  if(core0_thread_num < MAX_MEASURE_THREADS)
  {
  	/* The input unit of stack size is word ,get the size in byte */
  	stack_size = stack_size*4;
	
    core0_many_stacks_info[core0_thread_num][STACK_BGEGIN]        = (osu32_t)stack_end_address + stack_size;
    core0_many_stacks_info[core0_thread_num][STACK_END]           = (osu32_t)stack_end_address;
    core0_many_stacks_info[core0_thread_num][STACK_SIZE_IN_BYTE]  = stack_size;
    core0_many_stacks_info[core0_thread_num][THREAD_ORDER_NUM]    = thread_order_num;
  
    core0_thread_num++;
    
    stack_size_in_word = stack_size/4;
    for(index = 0 ; index < stack_size_in_word; index++ )
    {
       *stack_end_address++ = 0xAAAAAAAA;
    }
  }
}
/****************************************************************************/
/* FUNTION NAME:core0_get_the_many_stacks_used                              */
/* DESCRIPTION: Get the initial stack address of every thread               */
/*              The function should be called in idle thread                */
/****************************************************************************/ 
static osu32_t core0_get_the_many_stacks_used(osu32_t thread_num)
{ 
  osu8_t* stack_end_address;
  osu32_t byte_counter =0;

  stack_end_address = (osu8_t*)core0_many_stacks_info[thread_num][STACK_END]; 

  while(*stack_end_address++ == 0xAA)
  {
     byte_counter++;  
  }	
  core0_many_stacks_info[thread_num][STACK_SIZE_USED_IN_BYTE]    = 
    core0_many_stacks_info[thread_num][STACK_SIZE_IN_BYTE] - byte_counter;
  
  core0_many_stacks_info[thread_num][STACK_SIZE_USED_IN_PERCENT] = 
  	(core0_many_stacks_info[thread_num][STACK_SIZE_USED_IN_BYTE]*FACTOR)/core0_many_stacks_info[thread_num][STACK_SIZE_IN_BYTE]; 

  return core0_many_stacks_info[thread_num][STACK_SIZE_USED_IN_PERCENT];
}
void core0_get_all_stacks_used(void)
{
  osu32_t index;
  
  for(index = 0 ;index < core0_thread_num;index++)
  {
    core0_get_the_many_stacks_used(index);
  } 	
} 
#endif
