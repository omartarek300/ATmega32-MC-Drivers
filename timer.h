/*
 * timer.h
 *
 * Created: 9/7/2021 2:26:26 AM
 *  Author: Omar
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../bit_operations.h"
#include "../MC/My_avr.h"
#include "../types.h"
#include "../MC/Interrupts.h"
#define NULL_PTR ((void *)0)
/***********************************************************************************************
 *                                         Types Declaration                                   *
 ************************************************************************************************/
 
typedef enum
{
	timer0, timer1, timer2
}Timers;
typedef enum
{
	normal, compare, fast_pwm, phase_correct
}Modes;
typedef enum
{
	no_clock, f_cpu_clk, f_cpu_clk_8, f_cpu_clk_32, f_cpu_clk_128, f_cpu_clk_64, f_cpu_clk_256, f_cpu_clk_1024
}pre_scaler;
typedef struct  
{
	Timers timer_num;
	Modes  timer_mode;
	pre_scaler timer_preScale;
	uint32_t ticks_num;
	
}config;
/*************************************************************************************************
 *                                        Functions Prototypes                                   *
 *************************************************************************************************/
void Timer_init(const config* conf);
void Timer_setCallBack(Timers timer_num, void(*Ptr2Func)(void));



#endif /* TIMER_H_ */