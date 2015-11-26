/****************************************************************************/
/* FILE NAME:    context_manager.h                                          */
/* CREATE ON:    Aug 26, 2015                                               */
/* AUTHER:       Yanpeng.xi                                                 */
/* DESCRIPTION:  The h file includes logic of context manager               */
/* COMMENT:      Multicore OS based on Aurix 275C app kit and TASKING 4.3   */
/*               compiler                                                   */
/****************************************************************************/
#ifndef CONTEXT_MANAGER_H_
#define CONTEXT_MANAGER_H_

/****************************************************************************/
/* Function Prototype Definitions                                           */
/****************************************************************************/
OS_EXTERN osu32_t core0_get_context_usage(void);
OS_EXTERN osu32_t core1_get_context_usage(void);
OS_EXTERN osu32_t core2_get_context_usage(void);

#endif /* End of function CONTEXT_MANAGER_H_ */