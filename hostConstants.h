#ifndef _HOST_CONSTANTS_
#define _HOST_CONSTANTS_

#define NE 19600ULL
#define NI 19600ULL
#define N_Neurons (NE + NI)
#define N_NEURONS N_Neurons
#define K 1000.0
#define DT 0.05 /* ms*/ /* CHANGE EXP+SUM WHEN DT CHANGES   */
#define TAU_SYNAP 3.0
#define EXP_SUM exp(-1 * DT /TAU_SYNAP)  
#define MAX_UNI_RANDOM_VEC_LENGTH 10000000 //make constant 1e7
#define STORE_LAST_T_MILLISEC 50000.0
#define STORE_LAST_N_STEPS (STORE_LAST_T_MILLISEC / DT)
#define HOST_CONTRAST 20.0 // sound intensity 
#define HOST_CFF 0.2 // KFF = CFF * K

#define N_NEURONS_TO_STORE_START 0
#define N_NEURONS_TO_STORE_END 10
#define N_NEURONS_TO_STORE (N_NEURONS_TO_STORE_END - N_NEURONS_TO_STORE_START)
#define N_E_2BLOCK_NA_CURRENT 500 // number of first n neurons to have their Na2+ currents blocked
#define N_I_2BLOCK_NA_CURRENT 1
#define N_I_SAVE_CUR 1

#define ALPHA 0.0 //  probability of Bi-directional connections

#define START_FREQ 0.261625565 // in ms^-1

/* params patch */
#define L 1.0
#define CON_SIGMA (L * 0.18)
#define PI 3.14159265359

/* feed forward patch parameters */
#define CFF HOST_CFF
#define L_FF 1.0
#define FF_CON_SIGMA (L_FF * 0.2)
#define NFF 19600ULL
#endif
