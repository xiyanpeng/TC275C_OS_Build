/*-----------------------------------------------------------------------------------
|
|   File name:    os_trace.h
|   Created on:   Aug 26, 2015
|   Author:       Yanpeng.xi
|   Description:
|                 Multicore OS based on Aurix 275C app kit and TASKING 4.3 compiler
|
--------------------------------------------------------------------------------------*/

#ifndef OS_TRACE_H_
#define OS_TRACE_H_

#include "os.h"


#define TRACE_STATUS       ENABLE

typedef enum
{ 
   /* Index 0   */ CORE0_IDLE,                        
   /* Index 1   */ CORE0_THREAD1,                    
   /* Index 2   */ CORE0_THREAD2,                  
   /* Index 3   */ CORE0_THREAD3,                       
   /* Index 4   */ CORE0_THREAD4,                    
   /* Index 5   */ CORE0_THREAD5,                  
   /* Index 6   */ CORE0_THREAD6,  
   /* Index 7   */ CORE0_THREAD7,                    
   /* Index 8   */ CORE0_THREAD8,                  
   /* Index 9   */ CORE0_THREAD9,                       
   /* Index 10  */ CORE0_THREAD10,                    

   /* Index 11 */ E_MaxItems
} TeOSTK_ThruPutMeasItem;

#if 0	
typedef struct
{
   uint32 f_t_AvgExecTime;
   uint32 f_t_MaxExecTime;
   uint32 f_t_CurrExecTime;
   uint32 f_t_AvgDeltaTime;
   uint32 f_t_MaxDeltaTime;
   uint32 f_t_CurrDeltaTime;
   uint32 f_t_PrevEntryTime;
   
} TsUTIL_ThruPutMeasurement;

extern void EnterUTIL_TimeMeas( TsUTIL_ThruPutMeasurement *LpUTIL_MeasData );
extern void ExitUTIL_TimeMeas( TsUTIL_ThruPutMeasurement *LpUTIL_MeasData );
extern TsUTIL_ThruPutMeasurement SaOSTK_ThruPutData[E_MaxItems];
#endif
extern void OS_test1(osu32_t time);
extern void os_trace_task_time_begin(osu32_t task_id);
extern void os_trace_task_time_end(osu32_t task_id);

#endif
