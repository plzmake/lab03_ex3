/*
 * button.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Admin
 */

#include "button.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;
int TimeForKeyPress =  500;
int button1_flag = 0;
void subKeyProcess(){
	button1_flag =1;
	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}
void getKeyInput(){
	KeyReg0 = KeyReg1;
	  KeyReg1 = KeyReg2;
	  KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	  if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
	    if (KeyReg2 != KeyReg3){
	      KeyReg3 = KeyReg2;

	      if (KeyReg2 == PRESSED_STATE){
	      subKeyProcess();
	        TimeForKeyPress = 200;

	      }
	    }else{
	       TimeForKeyPress --;
	        if (TimeForKeyPress == 0){
//	        	if (KeyReg2 == PRESSED_STATE){
//	        	subKeyProcess();}
//	k        	TimeForKeyPress = 200;
	          KeyReg3 = NORMAL_STATE;
	        }
	    }
	  }
	}
