
#include "DIO_Int.h"

#ifndef ACU_INT_H_
#define ACU_INT_H_

extern const DIO_Pin_t LED_Array_on[8];

void LED_Count(u8 i);
void ALL_LED_OFF(void);

void LED_ON(u8 i);
void LED_off(u8 i);

#define BMF PIND2
#define BMB PIND4
#define BMR PIND3
#define BML PIND5



#endif /* ACU_INT_H_ */