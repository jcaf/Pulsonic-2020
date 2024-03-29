/*
 * pump.h
 *
 *  Created on: Sep 2, 2021
 *      Author: jcaf
 */

#ifndef PUMP_H_
#define PUMP_H_

    //#define PUMP_TICK_TIME_ON   50//in ms
    //#define PUMP_TICK_TIME_OFF  60//in ms

    //#define PUMP_TICK_TIME_ON   20//in ms//ANTES 20... ahora 60
    //#define PUMP_TICK_TIME_OFF  60//in ms

    #define PUMP_TICK_TIME_ON   20//in ms
    #define PUMP_TICK_TIME_OFF  120//in ms de 60 a 120 21/07/2021
    struct _pump
    {
        uint16_t ticks;
        int8_t sm0;
    };

    void pump_setTick(uint16_t ticks);
    uint16_t pump_getTick(void);
    void pump_stop(void);
    int8_t pump_job(void);
    int8_t pump_isIdle(void);



#endif /* PUMP_H_ */
