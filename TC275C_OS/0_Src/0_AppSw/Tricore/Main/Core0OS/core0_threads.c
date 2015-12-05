/****************************************************************************/
/* FILE NAME:    core0_threads.c                                            */
/* CREATE ON:    Aug 26, 2015                                               */
/* AUTHER:       Yanpeng.xi                                                 */
/* DESCRIPTION:  The c file includes the thread definitons of AURIX core0 os*/
/* COMMENT:      Multicore OS based on Aurix 275C app kit and TASKING 4.3   */
/*               compiler                                                   */
/****************************************************************************/

/****************************************************************************/
/* Feature Include Files                                                    */
/****************************************************************************/
#include "os_type.h"
#include "os.h"
#include <stdlib.h>
#include "core0_tasks.h"
#include "core0_thread_cfg.h"
#include "core0_kernel_abstract.h"
#include "os_trace.h"

#if (OS_STACK_MODE == ONE_STACK)
  #pragma align 16
  osu32_t core0_os_stack[(CORE0_STACK_SIZE/4)];
  #pragma align restore
#endif

/****************************************************************************/
/* Funtion Definitions <CORE0>: The thread definiton ranges from 0 thread to*/
/*                              100 thread                                  */
/****************************************************************************/
#if (CORE0_THREAD0_SWITCH == ON) 
  #if (OS_STACK_MODE == MANY_STACKS)
    CORE0_PTHREAD_DEFINITION_BLOCK(0)
  #else
    CORE0_PTHREAD_IDLE_DEFINITION_BLOCK(0)
  #endif
#endif
#if (CORE0_THREAD1_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(1)
#endif
#if (CORE0_THREAD2_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(2)
#endif
#if (CORE0_THREAD3_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(3)
#endif
#if (CORE0_THREAD4_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(4)
#endif
#if (CORE0_THREAD5_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(5)
#endif
#if (CORE0_THREAD6_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(6)
#endif
#if (CORE0_THREAD7_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(7)
#endif
#if (CORE0_THREAD8_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(8)
#endif
#if (CORE0_THREAD9_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(9)
#endif
#if (CORE0_THREAD10_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(10)
#endif
#if (CORE0_THREAD11_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(11)
#endif
#if (CORE0_THREAD12_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(12)
#endif
#if (CORE0_THREAD13_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(13)
#endif
#if (CORE0_THREAD14_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(14)
#endif
#if (CORE0_THREAD15_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(15)
#endif
#if (CORE0_THREAD16_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(16)
#endif
#if (CORE0_THREAD17_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(17)
#endif
#if (CORE0_THREAD18_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(18)
#endif
#if (CORE0_THREAD19_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(19)
#endif
#if (CORE0_THREAD20_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(20)
#endif
#if (CORE0_THREAD21_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(21)
#endif
#if (CORE0_THREAD22_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(22)
#endif
#if (CORE0_THREAD23_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(23)
#endif
#if (CORE0_THREAD24_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(24)
#endif
#if (CORE0_THREAD25_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(25)
#endif
#if (CORE0_THREAD26_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(26)
#endif
#if (CORE0_THREAD27_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(27)
#endif
#if (CORE0_THREAD28_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(28)
#endif
#if (CORE0_THREAD29_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(29)
#endif
#if (CORE0_THREAD30_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(30)
#endif
#if (CORE0_THREAD31_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(31)
#endif
#if (CORE0_THREAD32_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(32)
#endif
#if (CORE0_THREAD33_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(33)
#endif
#if (CORE0_THREAD34_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(34)
#endif
#if (CORE0_THREAD35_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(35)
#endif
#if (CORE0_THREAD36_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(36)
#endif
#if (CORE0_THREAD37_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(37)
#endif
#if (CORE0_THREAD38_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(38)
#endif
#if (CORE0_THREAD39_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(39)
#endif
#if (CORE0_THREAD40_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(40)
#endif
#if (CORE0_THREAD41_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(41)
#endif
#if (CORE0_THREAD42_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(42)
#endif
#if (CORE0_THREAD43_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(43)
#endif
#if (CORE0_THREAD44_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(44)
#endif
#if (CORE0_THREAD45_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(45)
#endif
#if (CORE0_THREAD46_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(46)
#endif
#if (CORE0_THREAD47_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(47)
#endif
#if (CORE0_THREAD48_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(48)
#endif
#if (CORE0_THREAD49_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(49)
#endif
#if (CORE0_THREAD50_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(50)
#endif
#if (CORE0_THREAD51_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(51)
#endif
#if (CORE0_THREAD55_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(52)
#endif
#if (CORE0_THREAD52_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(53)
#endif
#if (CORE0_THREAD54_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(54)
#endif
#if (CORE0_THREAD55_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(55)
#endif
#if (CORE0_THREAD56_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(56)
#endif
#if (CORE0_THREAD57_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(57)
#endif
#if (CORE0_THREAD58_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(58)
#endif
#if (CORE0_THREAD59_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(59)
#endif
#if (CORE0_THREAD60_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(60)
#endif
#if (CORE0_THREAD61_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(61)
#endif
#if (CORE0_THREAD62_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(62)
#endif
#if (CORE0_THREAD63_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(63)
#endif
#if (CORE0_THREAD64_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(64)
#endif
#if (CORE0_THREAD65_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(65)
#endif
#if (CORE0_THREAD66_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(66)
#endif
#if (CORE0_THREAD67_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(67)
#endif
#if (CORE0_THREAD68_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(68)
#endif
#if (CORE0_THREAD69_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(69)
#endif
#if (CORE0_THREAD70_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(70)
#endif
#if (CORE0_THREAD71_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(71)
#endif
#if (CORE0_THREAD72_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(72)
#endif
#if (CORE0_THREAD73_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(73)
#endif
#if (CORE0_THREAD74_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(74)
#endif
#if (CORE0_THREAD75_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(75)
#endif
#if (CORE0_THREAD76_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(76)
#endif
#if (CORE0_THREAD77_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(77)
#endif
#if (CORE0_THREAD78_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(78)
#endif
#if (CORE0_THREAD79_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(79)
#endif
#if (CORE0_THREAD80_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(80)
#endif
#if (CORE0_THREAD81_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(81)
#endif
#if (CORE0_THREAD82_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(82)
#endif
#if (CORE0_THREAD83_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(83)
#endif
#if (CORE0_THREAD84_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(84)
#endif
#if (CORE0_THREAD85_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(85)
#endif
#if (CORE0_THREAD86_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(86)
#endif
#if (CORE0_THREAD87_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(87)
#endif
#if (CORE0_THREAD88_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(88)
#endif
#if (CORE0_THREAD89_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(89)
#endif
#if (CORE0_THREAD90_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(90)
#endif
#if (CORE0_THREAD91_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(91)
#endif
#if (CORE0_THREAD92_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(92)
#endif
#if (CORE0_THREAD93_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(93)
#endif
#if (CORE0_THREAD94_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(94)
#endif
#if (CORE0_THREAD95_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(95)
#endif
#if (CORE0_THREAD96_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(96)
#endif
#if (CORE0_THREAD97_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(97)
#endif
#if (CORE0_THREAD98_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(98)
#endif
#if (CORE0_THREAD99_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(99)
#endif
#if (CORE0_THREAD100_SWITCH == ON) 
	CORE0_PTHREAD_DEFINITION_BLOCK(100)
#endif


/****************************************************************************/
/* Static Variable Definitions <CORE0>: The thread number ranges from 0     */
/*                                      100 thread to                       */
/****************************************************************************/
#pragma align 16

#if (CORE0_OS_SWITCH == ON)
#if (CORE0_THREAD0_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(0)
#endif
#if (CORE0_THREAD1_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(1)
#endif
#if (CORE0_THREAD2_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(2)
#endif
#if (CORE0_THREAD3_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(3)
#endif
#if (CORE0_THREAD4_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(4)
#endif
#if (CORE0_THREAD5_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(5)
#endif
#if (CORE0_THREAD6_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(6)
#endif
#if (CORE0_THREAD7_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(7)
#endif
#if (CORE0_THREAD8_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(8)
#endif
#if (CORE0_THREAD9_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(9)
#endif
#if (CORE0_THREAD10_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(10)
#endif
#if (CORE0_THREAD11_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(11)
#endif
#if (CORE0_THREAD12_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(12)
#endif
#if (CORE0_THREAD13_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(13)
#endif
#if (CORE0_THREAD14_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(14)
#endif
#if (CORE0_THREAD15_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(15)
#endif
#if (CORE0_THREAD16_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(16)
#endif
#if (CORE0_THREAD17_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(17)
#endif
#if (CORE0_THREAD18_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(18)
#endif
#if (CORE0_THREAD19_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(19)
#endif
#if (CORE0_THREAD20_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(20)
#endif
#if (CORE0_THREAD21_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(21)
#endif
#if (CORE0_THREAD22_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(22)
#endif
#if (CORE0_THREAD23_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(23)
#endif
#if (CORE0_THREAD24_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(24)
#endif
#if (CORE0_THREAD25_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(25)
#endif
#if (CORE0_THREAD26_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(26)
#endif
#if (CORE0_THREAD27_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(27)
#endif
#if (CORE0_THREAD28_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(28)
#endif
#if (CORE0_THREAD29_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(29)
#endif
#if (CORE0_THREAD30_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(30)
#endif
#if (CORE0_THREAD31_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(31)
#endif
#if (CORE0_THREAD32_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(32)
#endif
#if (CORE0_THREAD33_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(33)
#endif
#if (CORE0_THREAD34_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(34)
#endif
#if (CORE0_THREAD35_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(35)
#endif
#if (CORE0_THREAD36_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(36)
#endif
#if (CORE0_THREAD37_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(37)
#endif
#if (CORE0_THREAD38_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(38)
#endif
#if (CORE0_THREAD39_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(39)
#endif
#if (CORE0_THREAD40_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(40)
#endif
#if (CORE0_THREAD41_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(41)
#endif
#if (CORE0_THREAD42_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(42)
#endif
#if (CORE0_THREAD43_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(43)
#endif
#if (CORE0_THREAD44_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(44)
#endif
#if (CORE0_THREAD45_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(45)
#endif
#if (CORE0_THREAD46_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(46)
#endif
#if (CORE0_THREAD47_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(47)
#endif
#if (CORE0_THREAD48_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(48)
#endif
#if (CORE0_THREAD49_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(49)
#endif
#if (CORE0_THREAD50_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(50)
#endif
#if (CORE0_THREAD51_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(51)
#endif
#if (CORE0_THREAD52_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(52)
#endif
#if (CORE0_THREAD53_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(53)
#endif
#if (CORE0_THREAD54_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(54)
#endif
#if (CORE0_THREAD55_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(55)
#endif
#if (CORE0_THREAD56_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(56)
#endif
#if (CORE0_THREAD57_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(57)
#endif
#if (CORE0_THREAD58_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(58)
#endif
#if (CORE0_THREAD59_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(59)
#endif
#if (CORE0_THREAD60_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(60)
#endif
#if (CORE0_THREAD61_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(61)
#endif
#if (CORE0_THREAD62_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(62)
#endif
#if (CORE0_THREAD63_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(63)
#endif
#if (CORE0_THREAD64_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(64)
#endif
#if (CORE0_THREAD65_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(65)
#endif
#if (CORE0_THREAD66_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(66)
#endif
#if (CORE0_THREAD67_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(67)
#endif
#if (CORE0_THREAD68_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(68)
#endif
#if (CORE0_THREAD69_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(69)
#endif
#if (CORE0_THREAD70_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(70)
#endif
#if (CORE0_THREAD71_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(71)
#endif
#if (CORE0_THREAD72_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(72)
#endif
#if (CORE0_THREAD73_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(73)
#endif
#if (CORE0_THREAD74_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(74)
#endif
#if (CORE0_THREAD75_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(75)
#endif
#if (CORE0_THREAD76_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(76)
#endif
#if (CORE0_THREAD77_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(77)
#endif
#if (CORE0_THREAD78_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(78)
#endif
#if (CORE0_THREAD79_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(79)
#endif
#if (CORE0_THREAD80_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(80)
#endif
#if (CORE0_THREAD81_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(81)
#endif
#if (CORE0_THREAD82_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(82)
#endif
#if (CORE0_THREAD83_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(83)
#endif
#if (CORE0_THREAD84_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(84)
#endif
#if (CORE0_THREAD85_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(85)
#endif
#if (CORE0_THREAD86_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(86)
#endif
#if (CORE0_THREAD87_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(87)
#endif
#if (CORE0_THREAD88_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(88)
#endif
#if (CORE0_THREAD89_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(89)
#endif
#if (CORE0_THREAD90_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(90)
#endif
#if (CORE0_THREAD91_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(91)
#endif
#if (CORE0_THREAD92_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(92)
#endif
#if (CORE0_THREAD93_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(93)
#endif
#if (CORE0_THREAD94_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(94)
#endif
#if (CORE0_THREAD95_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(95)
#endif
#if (CORE0_THREAD96_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(96)
#endif
#if (CORE0_THREAD97_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(97)
#endif
#if (CORE0_THREAD98_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(98)
#endif
#if (CORE0_THREAD99_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(99)
#endif
#if (CORE0_THREAD100_SWITCH == ON) 
    CORE0_PTHREAD_CONTROL_BLOCK(100)
#endif
#endif
#pragma align restore

/****************************************************************************/
/* FUNCTION NAME: start_core0_os                                            */
/* DESCRIPTION:   start os by initializing os tick, creating threads and    */
/*                starting the core0 os scheduler                           */                                              
/****************************************************************************/
void start_core0_os(void) {

#if (CORE0_OS_SWITCH == ON)
    /* <CORE0> Setup os tick */
    CORE0_INITIALIZE_OS_TICK_BLOCK()

    /* <CORE0> Context manager */
    CORE0_INITIALIZE_CONTEXT_MANAGER()
    
    #if (OS_STACK_MODE == ONE_STACK)
      CORE0_INITIALIZE_ONE_STACK_MEMORY(core0_os_stack,CORE0_STACK_SIZE)
    #endif
 
    /* <CORE0> Create threads that are used */
#if (CORE0_THREAD0_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(0)
#endif
#if (CORE0_THREAD1_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(1)
#endif
#if (CORE0_THREAD2_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(2)
#endif
#if (CORE0_THREAD3_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(3)
#endif
#if (CORE0_THREAD4_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(4)
#endif
#if (CORE0_THREAD5_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(5)
#endif
#if (CORE0_THREAD6_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(6)
#endif
#if (CORE0_THREAD7_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(7)
#endif
#if (CORE0_THREAD8_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(8)
#endif
#if (CORE0_THREAD9_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(9)
#endif
#if (CORE0_THREAD10_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(10)
#endif
#if (CORE0_THREAD11_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(11)
#endif
#if (CORE0_THREAD12_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(12)
#endif
#if (CORE0_THREAD13_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(13)
#endif
#if (CORE0_THREAD14_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(14)
#endif
#if (CORE0_THREAD15_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(15)
#endif
#if (CORE0_THREAD16_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(16)
#endif
#if (CORE0_THREAD17_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(17)
#endif
#if (CORE0_THREAD18_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(18)
#endif
#if (CORE0_THREAD19_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(19)
#endif
#if (CORE0_THREAD20_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(20)
#endif
#if (CORE0_THREAD21_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(21)
#endif
#if (CORE0_THREAD22_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(22)
#endif
#if (CORE0_THREAD23_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(23)
#endif
#if (CORE0_THREAD24_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(24)
#endif
#if (CORE0_THREAD25_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(25)
#endif
#if (CORE0_THREAD26_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(26)
#endif
#if (CORE0_THREAD27_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(27)
#endif
#if (CORE0_THREAD28_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(28)
#endif
#if (CORE0_THREAD29_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(29)
#endif
#if (CORE0_THREAD30_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(30)
#endif
#if (CORE0_THREAD31_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(31)
#endif
#if (CORE0_THREAD32_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(32)
#endif
#if (CORE0_THREAD33_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(33)
#endif
#if (CORE0_THREAD34_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(34)
#endif
#if (CORE0_THREAD35_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(35)
#endif
#if (CORE0_THREAD36_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(36)
#endif
#if (CORE0_THREAD37_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(37)
#endif
#if (CORE0_THREAD38_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(38)
#endif
#if (CORE0_THREAD39_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(39)
#endif
#if (CORE0_THREAD40_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(40)
#endif
#if (CORE0_THREAD41_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(41)
#endif
#if (CORE0_THREAD42_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(42)
#endif
#if (CORE0_THREAD43_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(43)
#endif
#if (CORE0_THREAD44_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(44)
#endif
#if (CORE0_THREAD45_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(45)
#endif
#if (CORE0_THREAD46_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(46)
#endif
#if (CORE0_THREAD47_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(47)
#endif
#if (CORE0_THREAD48_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(48)
#endif
#if (CORE0_THREAD49_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(49)
#endif
#if (CORE0_THREAD50_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(50)
#endif
#if (CORE0_THREAD51_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(51)
#endif
#if (CORE0_THREAD52_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(52)
#endif
#if (CORE0_THREAD53_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(53)
#endif
#if (CORE0_THREAD54_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(54)
#endif
#if (CORE0_THREAD55_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(55)
#endif
#if (CORE0_THREAD56_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(56)
#endif
#if (CORE0_THREAD57_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(57)
#endif
#if (CORE0_THREAD58_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(58)
#endif
#if (CORE0_THREAD59_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(59)
#endif
#if (CORE0_THREAD60_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(60)
#endif
#if (CORE0_THREAD61_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(61)
#endif
#if (CORE0_THREAD62_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(62)
#endif
#if (CORE0_THREAD63_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(63)
#endif
#if (CORE0_THREAD64_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(64)
#endif
#if (CORE0_THREAD65_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(65)
#endif
#if (CORE0_THREAD66_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(66)
#endif
#if (CORE0_THREAD67_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(67)
#endif
#if (CORE0_THREAD68_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(68)
#endif
#if (CORE0_THREAD69_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(69)
#endif
#if (CORE0_THREAD70_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(70)
#endif
#if (CORE0_THREAD71_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(71)
#endif
#if (CORE0_THREAD72_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(72)
#endif
#if (CORE0_THREAD73_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(73)
#endif
#if (CORE0_THREAD74_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(74)
#endif
#if (CORE0_THREAD75_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(75)
#endif
#if (CORE0_THREAD76_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(76)
#endif
#if (CORE0_THREAD77_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(77)
#endif
#if (CORE0_THREAD78_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(78)
#endif
#if (CORE0_THREAD79_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(79)
#endif
#if (CORE0_THREAD80_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(80)
#endif
#if (CORE0_THREAD81_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(81)
#endif
#if (CORE0_THREAD82_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(82)
#endif
#if (CORE0_THREAD83_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(83)
#endif
#if (CORE0_THREAD84_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(84)
#endif
#if (CORE0_THREAD85_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(85)
#endif
#if (CORE0_THREAD86_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(86)
#endif
#if (CORE0_THREAD87_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(87)
#endif
#if (CORE0_THREAD88_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(88)
#endif
#if (CORE0_THREAD89_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(89)
#endif
#if (CORE0_THREAD90_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(90)
#endif
#if (CORE0_THREAD91_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(91)
#endif
#if (CORE0_THREAD92_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(92)
#endif
#if (CORE0_THREAD93_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(93)
#endif
#if (CORE0_THREAD94_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(94)
#endif
#if (CORE0_THREAD95_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(95)
#endif
#if (CORE0_THREAD96_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(96)
#endif
#if (CORE0_THREAD97_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(97)
#endif
#if (CORE0_THREAD98_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(98)
#endif
#if (CORE0_THREAD99_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(99)
#endif
#if (CORE0_THREAD100_SWITCH == ON) 
    CORE0_PTHREAD_CREATION_BLOCK(100)
#endif

    /* <CORE0> Start the core0 os scheduler */
	CORE0_PTHREAD_START_BLOCK()
#endif
}


