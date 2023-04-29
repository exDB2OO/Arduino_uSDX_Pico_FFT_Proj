#ifndef __uSDR_H__
#define __uSDR_H__

#ifdef __cplusplus
extern "C" {
#endif


//#define PY2KLA_setup  1    //setup for PY2KLA hardware

//#define EXCHANGE_I_Q  1    //include or remove this #define in case the LSB/USB and the lower/upper frequency of waterfall display are reverted - hardware dependent

//choose the serial to be used
#define Serialx   Serial    //USB virtual serial  /dev/ttyACM0
//#define Serialx   Serial1   //UART0  /dev/ttyUSB0



#define PHASE_AMPLITUDE  11
#define I_Q_QSE          22
//
//Here you can choose one of the two methods for uSDR_Pico transmission
//
#define TX_METHOD    I_Q_QSE            // uSDR_Pico original project generating I and Q signal to a QSE mixer
//#define TX_METHOD    PHASE_AMPLITUDE    // DO NOT USE - is not ready - used for Class E RF amplifier - see description at: uSDX_TX_PhaseAmpl.cpp






void uSDR_setup0(void);
void uSDR_setup(void);
void uSDR_loop(void);




#ifdef __cplusplus
}
#endif
#endif
