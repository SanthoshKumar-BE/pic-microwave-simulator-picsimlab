/* 
 * File:   microoven.h
 * Author: Santhosh
 *
 * Created on 18 January, 2026, 8:11 AM
 */

#ifndef MICROOVEN_H
#define	MICROOVEN_H

#ifdef	__cplusplus
extern "C" {
#endif
    void power_on_screen(void);
    void clear_screen(void);
    void display_menu_screen(void);
    void set_time(unsigned char key, unsigned char reset_flag);
    void set_temp(unsigned char key, unsigned char reset_flag);
    void time_display(void);
    void heat_food(void);

#ifdef	__cplusplus
}
#endif

#endif	/* MICROOVEN_H */

