#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#define V_T100ms    5
#define V_T500ms    25

extern unsigned char clock100ms;
extern unsigned char clock500ms;
extern unsigned char clock100ms_flag;
extern unsigned char clock500ms_flag;
extern unsigned char digit[8];
extern unsigned char key_code;
extern unsigned short level;
enum PIN {P1,P2};
extern unsigned char led[];

#endif
