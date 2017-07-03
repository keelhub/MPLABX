/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
#include <xc.h>         /* XC8 General Include File */

#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

/******************************************************************************/
/* Config                                                                     */
/******************************************************************************/
#pragma config WDTE = ON        // Watchdog Timer (WDT enabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = ON       // Master Clear Enable (GP3/MCLR pin function  is MCLR)

#define _XTAL_FREQ 4000000      // oscillator frequency for _delay()

/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/* i.e. uint8_t <variable_name>; */

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/


void main(void)
{
    TRIS = 0b111101;    // GP1 output

    while(1)
    {
        __delay_ms(1000);

        GPIO = 0;           // GP1 off

        __delay_ms(1000);

        GPIO = 0b000010;    // GP1 high
    }

}

