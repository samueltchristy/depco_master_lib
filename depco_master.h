/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2009.  All rights reserved

Version Date: Fri Sep 25 12:52:41 EDT 2009
-----------------------------------------------------------------
============================================================== */

#ifndef _PSLCDMOD_H_
#define _PSLCDMOD_H_

#include <twi_masterslave.h>
#include <string.h>

/* Commands for LCD module */
#define CMD_PSL_TEXT			0x21
#define CMD_PSL_CHAR			0x22
#define CMD_PSL_CLEAR			0x23
#define CMD_PSL_PRINT_DEC		0x24
#define CMD_PSL_PRINT_BIN		0x25
#define CMD_PSL_PRINT_HEX		0x26
#define CMD_PSL_PRINT_SIGNED	0x27
#define CMD_PSL_BAR				0x28
#define CMD_PSL_BEEP			0x29
#define CMD_PSL_BACKLIGHT		0x2A
#define FIRST_LINE    			0x80
#define SECOND_LINE   			0xC0

/* Commands for PS2 */
#define CMD_PSL_BUTTON			0x2E
#define CMD_PSL_ANALOG			0x2F

/* General Commands */
#define CMD_PSL_TONE			0x31
#define CMD_PSL_STARTDELAY		0x32
#define CMD_PSL_FLASHRATE		0x33
#define CMD_PSL_VOLTLIMIT		0x34
#define CMD_PSL_OVERRIDE		0x35

/* PS2 Buttons */
#define BUTTON_SELECT      0x0001
#define BUTTON_START       0x0008

#define BUTTON_PAD_UP      0x0010
#define BUTTON_PAD_RIGHT   0x0020
#define BUTTON_PAD_DOWN    0x0040
#define BUTTON_PAD_LEFT    0x0080

#define BUTTON_L2          0x0100
#define BUTTON_R2          0x0200
#define BUTTON_L1          0x0400
#define BUTTON_R1          0x0800

#define BUTTON_TRIANGLE    0x1000
#define BUTTON_CIRCLE      0x2000
#define BUTTON_CROSS       0x4000
#define BUTTON_SQUARE      0x8000

/* PS2 Joysticks */
#define RIGHT_X 		5
#define RIGHT_Y 		6
#define LEFT_X 			7
#define LEFT_Y 			8

extern void ps2_override(unsigned char);
extern void depco_control(unsigned char);

extern void write_character( unsigned char , unsigned char );
extern void write_text( unsigned char ,  char * );
extern void write_decimal( unsigned char , unsigned int , unsigned char );
extern void write_hexadecimal( unsigned char , unsigned int , unsigned char );
extern void write_binary (unsigned char , unsigned int , unsigned char );
extern void write_signed( unsigned char , signed int , unsigned char );

extern void clear_lcd (void);
extern void backlight_lcd(unsigned char);
extern void lcd_bar (unsigned char , unsigned char );

extern void beep_speaker(unsigned int);

extern unsigned char read_joystick(unsigned char );
extern unsigned char read_button(unsigned char );

#endif
