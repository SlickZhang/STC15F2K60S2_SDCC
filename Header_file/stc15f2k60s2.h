/*-------------------------------------------------------------------------
   stc15f2k60s2.h - Register Declarations for 8051 Processor

   Copyright (C) 2023, Slick Zhang . zhy_5262@163.com
-------------------------------------------------------------------------*/

#ifndef _STC15F2K60S2_H
#define _STC15F2K60S2_H

#ifdef 8051_H
#undef 8051_H
#endif

#ifdef REG8051_H
#undef REG8051_H
#endif

//core SFR
__sbit __at (0xE0) ACC  ;
__sfr  __at (0xF0) B    ;
__sfr  __at (0xD0) PSW  ;
    __sbit __at (0xD7) CY   ;
    __sbit __at (0xD6) AC   ;
    __sbit __at (0xD5) F0   ;
    __sbit __at (0xD4) RS1  ;
    __sbit __at (0xD3) RS0  ;
    __sbit __at (0xD2) OV   ;
    __sbit __at (0xD1) F1   ;
    __sbit __at (0xD0) P    ;
__sfr  __at (0x81) SP   ;
__sfr  __at (0x82) DPL  ;
__sfr  __at (0x83) DPH  ;

//I/O SFR
__sfr  __at (0x80) P0   ;
    __sbit __at (0x80) P0_0 ;
    __sbit __at (0x81) P0_1 ;
    __sbit __at (0x82) P0_2 ;
    __sbit __at (0x83) P0_3 ;
    __sbit __at (0x84) P0_4 ;
    __sbit __at (0x85) P0_5 ;
    __sbit __at (0x86) P0_6 ;
    __sbit __at (0x87) P0_7 ;
__sfr  __at (0x90) P1   ;
    __sbit __at (0x90) P1_0 ;
    __sbit __at (0x91) P1_1 ;
    __sbit __at (0x92) P1_2 ;
    __sbit __at (0x93) P1_3 ;
    __sbit __at (0x94) P1_4 ;
    __sbit __at (0x95) P1_5 ;
    __sbit __at (0x96) P1_6 ;
    __sbit __at (0x97) P1_7 ;
__sfr  __at (0xA0) P2   ;
    __sbit __at (0xA0) P2_0 ;
    __sbit __at (0xA1) P2_1 ;
    __sbit __at (0xA2) P2_2 ;
    __sbit __at (0xA3) P2_3 ;
    __sbit __at (0xA4) P2_4 ;
    __sbit __at (0xA5) P2_5 ;
    __sbit __at (0xA6) P2_6 ;
    __sbit __at (0xA7) P2_7 ;
__sfr  __at (0xB0) P3   ;
    __sbit __at (0xB0) P3_0 ;
    __sbit __at (0xB1) P3_1 ;
    __sbit __at (0xB2) P3_2 ;
    __sbit __at (0xB3) P3_3 ;
    __sbit __at (0xB4) P3_4 ;
    __sbit __at (0xB5) P3_5 ;
    __sbit __at (0xB6) P3_6 ;
    __sbit __at (0xB7) P3_7 ;
__sfr  __at (0xC0) P4   ;
    __sbit __at (0xC0) P4_0 ;
    __sbit __at (0xC1) P4_1 ;
    __sbit __at (0xC2) P4_2 ;
    __sbit __at (0xC3) P4_3 ;
    __sbit __at (0xC4) P4_4 ;
    __sbit __at (0xC5) P4_5 ;
    __sbit __at (0xC6) P4_6 ;
    __sbit __at (0xC7) P4_7 ;
__sfr  __at (0xC8) P5   ;
    __sbit __at (0xC8) P5_0 ;
    __sbit __at (0xC9) P5_1 ;
    __sbit __at (0xCA) P5_2 ;
    __sbit __at (0xCB) P5_3 ;
    __sbit __at (0xCC) P5_4 ;
    __sbit __at (0xCD) P5_5 ;
    __sbit __at (0xCE) P5_6 ;
    __sbit __at (0xCF) P5_7 ;
__sfr  __at (0xE8) P6   ;
    __sbit __at (0xE8) P6_0 ;
    __sbit __at (0xE9) P6_1 ;
    __sbit __at (0xEA) P6_2 ;
    __sbit __at (0xEB) P6_3 ;
    __sbit __at (0xEC) P6_4 ;
    __sbit __at (0xED) P6_5 ;
    __sbit __at (0xEE) P6_6 ;
    __sbit __at (0xEF) P6_7 ;
__sfr  __at (0xF0) P7   ;
    __sbit __at (0xF8) P7_0 ;
    __sbit __at (0xF9) P7_1 ;
    __sbit __at (0xFA) P7_2 ;
    __sbit __at (0xFB) P7_3 ;
    __sbit __at (0xFC) P7_4 ;
    __sbit __at (0xFD) P7_5 ;
    __sbit __at (0xFE) P7_6 ;
    __sbit __at (0xFF) P7_7 ;
__sfr  __at (0x94) P0M0 ;
__sfr  __at (0x93) P0M1 ;
__sfr  __at (0x92) P1M0 ;
__sfr  __at (0x91) P1M1 ;
__sfr  __at (0x96) P2M0 ;
__sfr  __at (0x95) P2M1 ;
__sfr  __at (0xB2) P3M0 ;
__sfr  __at (0xB1) P3M1 ;
__sfr  __at (0xB4) P4M0 ;
__sfr  __at (0xB3) P4M1 ;
__sfr  __at (0xCA) P5M0 ;
__sfr  __at (0xC9) P5M1 ;
__sfr  __at (0xCC) P6M0 ;
__sfr  __at (0xCB) P6M1 ;
__sfr  __at (0xE2) P7M0 ;
__sfr  __at (0xE1) P7M1 ;

//System management SFR
__sfr  __at (0x87) PCON      ;
__sfr  __at (0x8E) AUXR      ;
__sfr  __at (0xA2) AUXR1     ;
__sfr  __at (0xA2) P_SW1     ;
__sfr  __at (0x97) CLK_DIV   ;
__sfr  __at (0xA1) BUS_SPEED ;
__sfr  __at (0x9D) P1ASF     ;
__sfr  __at (0xBA) P_SW2     ;

//Interrupt SFR
__sfr  __at (0xA8) IE        ;
    __sbit __at (0xAF) EA        ;
    __sbit __at (0xAE) ELVD      ;
    __sbit __at (0xAD) EADC      ;
    __sbit __at (0xAC) ES        ;
    __sbit __at (0xAB) ET1       ;
    __sbit __at (0xAA) XE1       ;
    __sbit __at (0xA9) ET0       ;
    __sbit __at (0xA8) EX0       ;
__sfr  __at (0xB8) IP        ;
    __sbit __at (0xBF) PPCA      ;
    __sbit __at (0xBE) PLVD      ;
    __sbit __at (0xBD) PADC      ;
    __sbit __at (0xBC) PS        ;
    __sbit __at (0xBB) PT1       ;
    __sbit __at (0xBA) PX1       ;
    __sbit __at (0xB9) PT0       ;
    __sbit __at (0xB8) PX0       ;
__sfr  __at (0xAF) IE2       ;
__sfr  __at (0xB5) IP2       ;
__sfr  __at (0x8F) INT_CLKO  ;

//Timer SFR
__sfr  __at (0x88) TCON      ;
    __sbit __at (0x8F) TF1       ;
    __sbit __at (0x8E) TR1       ;
    __sbit __at (0x8D) TF0       ;
    __sbit __at (0x8C) TR0       ;
    __sbit __at (0x8B) IE1       ;
    __sbit __at (0x8A) IT1       ;
    __sbit __at (0x89) IE0       ;
    __sbit __at (0x88) IT0       ;
__sfr  __at (0x89) TMOD      ;
__sfr  __at (0x8A) TL0       ;
__sfr  __at (0x8B) TL1       ;
__sfr  __at (0x8C) TH0       ;
__sfr  __at (0x8D) TH1       ;
__sfr  __at (0xD1) T4T3M     ;
__sfr  __at (0xD1) T3T4M     ;
__sfr  __at (0xD2) T4H       ;
__sfr  __at (0xD3) T4L       ;
__sfr  __at (0xD4) T3H       ;
__sfr  __at (0xD5) T3L       ;
__sfr  __at (0xD6) T2H       ;
__sfr  __at (0xD7) T2L       ;
__sfr  __at (0xAA) WKTCL     ;
__sfr  __at (0xAB) WKTCH     ;
__sfr  __at (0xC1) WDT_CONTR ;

//Serial port SFR
__sfr  __at (0x98) SCON      ;
    __sbit __at (0x9F) SM0       ;
    __sbit __at (0x9E) SM1       ;
    __sbit __at (0x9D) SM2       ;
    __sbit __at (0x9C) REN       ;
    __sbit __at (0x9B) TB8       ;
    __sbit __at (0x9A) RB8       ;
    __sbit __at (0x99) TI        ;
    __sbit __at (0x98) RI        ;
__sfr  __at (0x99) SBUF      ;
__sfr  __at (0x9A) S2CON     ;
__sfr  __at (0x9B) S2BUF     ;
__sfr  __at (0xAC) S3CON     ;
__sfr  __at (0xAD) S3BUF     ;
__sfr  __at (0x84) S4CON     ;
__sfr  __at (0x85) S4BUF     ;
__sfr  __at (0xA9) SADDR     ;
__sfr  __at (0xB9) SADEN     ;

//ADC SFR
__sfr  __at (0xBC) ADC_CONTR ;
__sfr  __at (0xBD) ADC_RES   ;
__sfr  __at (0xBE) ADC_RESL  ;

//IAP/ISP SFR
__sfr  __at (0xC2) IAP_DATA  ;
__sfr  __at (0xC3) IAP_ADDRH ;
__sfr  __at (0xC4) IAP_ADDRL ;
__sfr  __at (0xC5) IAP_CMD   ;
__sfr  __at (0xC6) IAP_TRIG  ;
__sfr  __at (0xC7) IAP_CONTR ;

//PCA/PWM SFR
__Sfr  __at (0xD8) CCON      ;
    __bit  __at (0xDF) CF        ;
    __bit  __at (0xDE) CR        ;
    __bit  __at (0xDA) CCF2      ;
    __bit  __at (0xD9) CCF1      ;
    __bit  __at (0xD8) CCF0      ;
__sfr  __at (0xD9) CMOD      ;
__sfr  __at (0xE9) CL        ;
__sfr  __at (0xF9) CH        ;
__sfr  __at (0xDA) CCAPM0    ;
__sfr  __at (0xDB) CCAPM1    ;
__sfr  __at (0xDC) CCAPM2    ;
__sfr  __at (0xEA) CCAP0L    ;
__sfr  __at (0xEB) CCAP1L    ;
__sfr  __at (0xEC) CCAP2L    ;
__sfr  __at (0xF2) PCA_PWM0  ;
__sfr  __at (0xF3) PCA_PWM1  ;
__sfr  __at (0xF4) PCA_PWM2  ;
__sfr  __at (0xFA) CCAP0H    ;
__sfr  __at (0xFB) CCAP1H    ;
__sfr  __at (0xFC) CCAP2H    ;

//Comparator SFR
__sfr  __at (0xE6) CMPCR1    ;
__sfr  __at (0xE7) CMPCR2    ;

//ePWM waveform generator SFR
__sfr  __at (0xf1) PWMCFG    ;
__sfr  __at (0xf5) PWMCR     ;
__sfr  __at (0xf6) PWMIF     ;
__sfr  __at (0xf7) PWMFDCR   ;

//The following SFR are located in the extended RAM area
//To access these registers, you need to set the BIT7 of the P_SW2 to 1 before reading and writing normally
#define PWMC        (*(unsigned int  volatile xdata *)0xfff0)
#define PWMCH       (*(unsigned char volatile xdata *)0xfff0)
#define PWMCL       (*(unsigned char volatile xdata *)0xfff1)
#define PWMCKS      (*(unsigned char volatile xdata *)0xfff2)
#define PWM2T1      (*(unsigned int  volatile xdata *)0xff00)
#define PWM2T1H     (*(unsigned char volatile xdata *)0xff00)
#define PWM2T1L     (*(unsigned char volatile xdata *)0xff01)
#define PWM2T2      (*(unsigned int  volatile xdata *)0xff02)
#define PWM2T2H     (*(unsigned char volatile xdata *)0xff02)
#define PWM2T2L     (*(unsigned char volatile xdata *)0xff03)
#define PWM2CR      (*(unsigned char volatile xdata *)0xff04)
#define PWM3T1      (*(unsigned int  volatile xdata *)0xff10)
#define PWM3T1H     (*(unsigned char volatile xdata *)0xff10)
#define PWM3T1L     (*(unsigned char volatile xdata *)0xff11)
#define PWM3T2      (*(unsigned int  volatile xdata *)0xff12)
#define PWM3T2H     (*(unsigned char volatile xdata *)0xff12)
#define PWM3T2L     (*(unsigned char volatile xdata *)0xff13)
#define PWM3CR      (*(unsigned char volatile xdata *)0xff14)
#define PWM4T1      (*(unsigned int  volatile xdata *)0xff20)
#define PWM4T1H     (*(unsigned char volatile xdata *)0xff20)
#define PWM4T1L     (*(unsigned char volatile xdata *)0xff21)
#define PWM4T2      (*(unsigned int  volatile xdata *)0xff22)
#define PWM4T2H     (*(unsigned char volatile xdata *)0xff22)
#define PWM4T2L     (*(unsigned char volatile xdata *)0xff23)
#define PWM4CR      (*(unsigned char volatile xdata *)0xff24)
#define PWM5T1      (*(unsigned int  volatile xdata *)0xff30)
#define PWM5T1H     (*(unsigned char volatile xdata *)0xff30)
#define PWM5T1L     (*(unsigned char volatile xdata *)0xff31)
#define PWM5T2      (*(unsigned int  volatile xdata *)0xff32)
#define PWM5T2H     (*(unsigned char volatile xdata *)0xff32)
#define PWM5T2L     (*(unsigned char volatile xdata *)0xff33)
#define PWM5CR      (*(unsigned char volatile xdata *)0xff34)
#define PWM6T1      (*(unsigned int  volatile xdata *)0xff40)
#define PWM6T1H     (*(unsigned char volatile xdata *)0xff40)
#define PWM6T1L     (*(unsigned char volatile xdata *)0xff41)
#define PWM6T2      (*(unsigned int  volatile xdata *)0xff42)
#define PWM6T2H     (*(unsigned char volatile xdata *)0xff42)
#define PWM6T2L     (*(unsigned char volatile xdata *)0xff43)
#define PWM6CR      (*(unsigned char volatile xdata *)0xff44)
#define PWM7T1      (*(unsigned int  volatile xdata *)0xff50)        
#define PWM7T1H     (*(unsigned char volatile xdata *)0xff50)        
#define PWM7T1L     (*(unsigned char volatile xdata *)0xff51)
#define PWM7T2      (*(unsigned int  volatile xdata *)0xff52)
#define PWM7T2H     (*(unsigned char volatile xdata *)0xff52)
#define PWM7T2L     (*(unsigned char volatile xdata *)0xff53)
#define PWM7CR      (*(unsigned char volatile xdata *)0xff54)

/* BIT definitions for bits that are not directly accessible */
/* PCON bits */
#define IDL             0x01
#define PD              0x02
#define GF0             0x04
#define GF1             0x08
#define POF             0x10
#define LVDF            0x20
#define SMOD0           0x40
#define SMOD            0x80

/* TMOD bits */
#define T0_M0           0x01
#define T0_M1           0x02
#define T0_CT           0x04
#define T0_GATE         0x08
#define T1_M0           0x10
#define T1_M1           0x20
#define T1_CT           0x40
#define T1_GATE         0x80

#define T0_MASK         0x0F
#define T1_MASK         0xF0

/* Interrupt numbers: address = (number * 8) + 3 */
//                 Query order   Interrupt vector
//                      |             |       
#define IE0_VECTOR      0         /* 0x03 external interrupt 0 */
#define TF0_VECTOR      1         /* 0x0b timer 0 */
#define IE1_VECTOR      2         /* 0x13 external interrupt 1 */
#define TF1_VECTOR      3         /* 0x1b timer 1 */
#define SI1_VECTOR      4         /* 0x23 serial port 1 */
#define ADC_VECTOR      5         /* 0x2B ADC */
#define LVD_VECTOR      6         /* 0x33 LVD */
#define CPP_VECTOR      7         /* 0x3B CCP/PCA/PWM */
#define SI2_VECTOR      8         /* 0x43 serial port 2*/
#define SPI_VECTOR      9         /* 0x4B SPI */
#define IE2_VECTOR      10        /* 0x53 xternal interrupt 2 */
#define IE3_VECTOR      11        /* 0x5B xternal interrupt 3 */
#define TF2_VECTOR      12        /* 0x63 timer 2 */
#define PWM_VECTOR      13        /* 0x6B PWM */
#define IE4_VECTOR      16        /* 0x83 xternal interrupt 4 */
#define SI3_VECTOR      17        /* 0x8B serial port 3*/
#define SI4_VECTOR      18        /* 0x93 serial port 4*/
#define TF3_VECTOR      19        /* 0x9B timer 3 */
#define TF4_VECTOR      20        /* 0xA3 timer 4 */
#define CMP_VECTOR      21        /* 0xAB comparator */

#endif