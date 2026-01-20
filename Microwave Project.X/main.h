/* 
 * File:   main.h
 * Author: Santhosh
 *
 * Created on 18 January, 2026, 8:24 AM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#define POWER_ON_SCREEN             0x01
#define MENU_SCREEN                 0x02
#define MICRO_MODE                  0x11
#define GRILL_MODE                  0x12
#define CONVECTION_MODE             0x13
#define START_MODE                  0x14
    
#define DISPLAY_TIME                0xDD

#define RESET_MODE                  0xFF
#define RESET_NOTHING               0x00
 
#define FAN_DDR                     TRISC2
#define FAN                         RC2
    
#define BUZZER_DDR                  TRISC1
#define BUZZER                      RC1
    
#define START                       0xAA
#define STOP                        0xBB
#define PAUSE                       0xCC
#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

