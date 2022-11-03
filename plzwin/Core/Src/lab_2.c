/*
 * lab_2.c
 *
 *  Created on: Oct 7, 2022
 *      Author: Admin
 */

#include "lab_2.h"
int Timer1_flag =0;
int Timer1_c = 0;
int Timer2_flag =0;
int Timer2_c = 0;
 void Settimer1(int du)
 {Timer1_c =du;
 Timer1_flag=0;
 }
 void Settimer2(int du)
  {Timer2_c =du;
  Timer2_flag=0;
  }
 void TimerRun()
 {
	 if(Timer1_c > 0){
		 Timer1_c--;
		 if(Timer1_c == 0){
			 Timer1_flag = 1;
		 }
	 }
	 if(Timer2_c > 0){
	 		 Timer2_c--;
	 		 if(Timer2_c == 0){
	 			 Timer2_flag = 1;
	 		 }
	 	 }
 }
 ;
