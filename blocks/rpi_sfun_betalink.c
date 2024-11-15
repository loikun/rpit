/*
 * File: rpi_sfun_betalink.c
 *
 *
 *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
 *
 *   This file is an S-function produced by the S-Function
 *   Builder which only recognizes certain fields.  Changes made
 *   outside these fields will be lost the next time the block is
 *   used to load, edit, and resave this file. This file will be overwritten
 *   by the S-function Builder block. If you want to edit this file by hand, 
 *   you must change it only in the area defined as:  
 *
 *        %%%-SFUNWIZ_defines_Changes_BEGIN
 *        #define NAME 'replacement text' 
 *        %%% SFUNWIZ_defines_Changes_END
 *
 *   DO NOT change NAME--Change the 'replacement text' only.
 *
 *   For better compatibility with the Simulink Coder, the
 *   "wrapper" S-function technique is used.  This is discussed
 *   in the Simulink Coder's Manual in the Chapter titled,
 *   "Wrapper S-functions".
 *
 *  -------------------------------------------------------------------------
 * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
 *  ------------------------------------------------------------------------- 
 *
 * Created: Fri Jul 02 16:59:44 2021
 */

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME rpi_sfun_betalink
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS            1
/* Input Port  0 */
#define IN_PORT_0_NAME        throttle
#define INPUT_0_WIDTH         8
#define INPUT_DIMS_0_COL      1
#define INPUT_0_DTYPE         real_T
#define INPUT_0_COMPLEX       COMPLEX_NO
#define IN_0_FRAME_BASED      FRAME_NO
#define IN_0_BUS_BASED        0
#define IN_0_BUS_NAME         
#define IN_0_DIMS             1-D
#define INPUT_0_FEEDTHROUGH   1
#define IN_0_ISSIGNED         0
#define IN_0_WORDLENGTH       8
#define IN_0_FIXPOINTSCALING  1
#define IN_0_FRACTIONLENGTH   9
#define IN_0_BIAS             0
#define IN_0_SLOPE            0.125

#define NUM_OUTPUTS           12
/* Output Port  0 */
#define OUT_PORT_0_NAME       timestamp
#define OUTPUT_0_WIDTH        1
#define OUTPUT_DIMS_0_COL     1
#define OUTPUT_0_DTYPE        real_T
#define OUTPUT_0_COMPLEX      COMPLEX_NO
#define OUT_0_FRAME_BASED     FRAME_NO
#define OUT_0_BUS_BASED       0
#define OUT_0_BUS_NAME        
#define OUT_0_DIMS            1-D
#define OUT_0_ISSIGNED        1
#define OUT_0_WORDLENGTH      8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH  3
#define OUT_0_BIAS            0
#define OUT_0_SLOPE           0.125
/* Output Port  1 */
#define OUT_PORT_1_NAME       rpm
#define OUTPUT_1_WIDTH        8
#define OUTPUT_DIMS_1_COL     1
#define OUTPUT_1_DTYPE        real_T
#define OUTPUT_1_COMPLEX      COMPLEX_NO
#define OUT_1_FRAME_BASED     FRAME_NO
#define OUT_1_BUS_BASED       0
#define OUT_1_BUS_NAME        
#define OUT_1_DIMS            1-D
#define OUT_1_ISSIGNED        1
#define OUT_1_WORDLENGTH      8
#define OUT_1_FIXPOINTSCALING 1
#define OUT_1_FRACTIONLENGTH  3
#define OUT_1_BIAS            0
#define OUT_1_SLOPE           0.125
/* Output Port  2 */
#define OUT_PORT_2_NAME       inv
#define OUTPUT_2_WIDTH        8
#define OUTPUT_DIMS_2_COL     1
#define OUTPUT_2_DTYPE        real_T
#define OUTPUT_2_COMPLEX      COMPLEX_NO
#define OUT_2_FRAME_BASED     FRAME_NO
#define OUT_2_BUS_BASED       0
#define OUT_2_BUS_NAME        
#define OUT_2_DIMS            1-D
#define OUT_2_ISSIGNED        1
#define OUT_2_WORDLENGTH      8
#define OUT_2_FIXPOINTSCALING 1
#define OUT_2_FRACTIONLENGTH  3
#define OUT_2_BIAS            0
#define OUT_2_SLOPE           0.125
/* Output Port  3 */
#define OUT_PORT_3_NAME       acc
#define OUTPUT_3_WIDTH        3
#define OUTPUT_DIMS_3_COL     1
#define OUTPUT_3_DTYPE        real_T
#define OUTPUT_3_COMPLEX      COMPLEX_NO
#define OUT_3_FRAME_BASED     FRAME_NO
#define OUT_3_BUS_BASED       0
#define OUT_3_BUS_NAME        
#define OUT_3_DIMS            1-D
#define OUT_3_ISSIGNED        1
#define OUT_3_WORDLENGTH      8
#define OUT_3_FIXPOINTSCALING 1
#define OUT_3_FRACTIONLENGTH  3
#define OUT_3_BIAS            0
#define OUT_3_SLOPE           0.125
/* Output Port  4 */
#define OUT_PORT_4_NAME       gyr
#define OUTPUT_4_WIDTH        3
#define OUTPUT_DIMS_4_COL     1
#define OUTPUT_4_DTYPE        real_T
#define OUTPUT_4_COMPLEX      COMPLEX_NO
#define OUT_4_FRAME_BASED     FRAME_NO
#define OUT_4_BUS_BASED       0
#define OUT_4_BUS_NAME        
#define OUT_4_DIMS            1-D
#define OUT_4_ISSIGNED        1
#define OUT_4_WORDLENGTH      8
#define OUT_4_FIXPOINTSCALING 1
#define OUT_4_FRACTIONLENGTH  3
#define OUT_4_BIAS            0
#define OUT_4_SLOPE           0.125
/* Output Port  5 */
#define OUT_PORT_5_NAME       mag
#define OUTPUT_5_WIDTH        3
#define OUTPUT_DIMS_5_COL     1
#define OUTPUT_5_DTYPE        real_T
#define OUTPUT_5_COMPLEX      COMPLEX_NO
#define OUT_5_FRAME_BASED     FRAME_NO
#define OUT_5_BUS_BASED       0
#define OUT_5_BUS_NAME        
#define OUT_5_DIMS            1-D
#define OUT_5_ISSIGNED        1
#define OUT_5_WORDLENGTH      8
#define OUT_5_FIXPOINTSCALING 1
#define OUT_5_FRACTIONLENGTH  3
#define OUT_5_BIAS            0
#define OUT_5_SLOPE           0.125
/* Output Port  6 */
#define OUT_PORT_6_NAME       roll
#define OUTPUT_6_WIDTH        1
#define OUTPUT_DIMS_6_COL     1
#define OUTPUT_6_DTYPE        real_T
#define OUTPUT_6_COMPLEX      COMPLEX_NO
#define OUT_6_FRAME_BASED     FRAME_NO
#define OUT_6_BUS_BASED       0
#define OUT_6_BUS_NAME        
#define OUT_6_DIMS            1-D
#define OUT_6_ISSIGNED        1
#define OUT_6_WORDLENGTH      8
#define OUT_6_FIXPOINTSCALING 1
#define OUT_6_FRACTIONLENGTH  3
#define OUT_6_BIAS            0
#define OUT_6_SLOPE           0.125
/* Output Port  7 */
#define OUT_PORT_7_NAME       pitch
#define OUTPUT_7_WIDTH        1
#define OUTPUT_DIMS_7_COL     1
#define OUTPUT_7_DTYPE        real_T
#define OUTPUT_7_COMPLEX      COMPLEX_NO
#define OUT_7_FRAME_BASED     FRAME_NO
#define OUT_7_BUS_BASED       0
#define OUT_7_BUS_NAME        
#define OUT_7_DIMS            1-D
#define OUT_7_ISSIGNED        1
#define OUT_7_WORDLENGTH      8
#define OUT_7_FIXPOINTSCALING 1
#define OUT_7_FRACTIONLENGTH  3
#define OUT_7_BIAS            0
#define OUT_7_SLOPE           0.125
/* Output Port  8 */
#define OUT_PORT_8_NAME       yaw
#define OUTPUT_8_WIDTH        1
#define OUTPUT_DIMS_8_COL     1
#define OUTPUT_8_DTYPE        real_T
#define OUTPUT_8_COMPLEX      COMPLEX_NO
#define OUT_8_FRAME_BASED     FRAME_NO
#define OUT_8_BUS_BASED       0
#define OUT_8_BUS_NAME        
#define OUT_8_DIMS            1-D
#define OUT_8_ISSIGNED        1
#define OUT_8_WORDLENGTH      8
#define OUT_8_FIXPOINTSCALING 1
#define OUT_8_FRACTIONLENGTH  3
#define OUT_8_BIAS            0
#define OUT_8_SLOPE           0.125
/* Output Port  9 */
#define OUT_PORT_9_NAME       bat_volt
#define OUTPUT_9_WIDTH        1
#define OUTPUT_DIMS_9_COL     1
#define OUTPUT_9_DTYPE        real_T
#define OUTPUT_9_COMPLEX      COMPLEX_NO
#define OUT_9_FRAME_BASED     FRAME_NO
#define OUT_9_BUS_BASED       0
#define OUT_9_BUS_NAME        
#define OUT_9_DIMS            1-D
#define OUT_9_ISSIGNED        1
#define OUT_9_WORDLENGTH      8
#define OUT_9_FIXPOINTSCALING 1
#define OUT_9_FRACTIONLENGTH  3
#define OUT_9_BIAS            0
#define OUT_9_SLOPE           0.125
/* Output Port  10 */
#define OUT_PORT_10_NAME       bat_amp
#define OUTPUT_10_WIDTH        1
#define OUTPUT_DIMS_10_COL     1
#define OUTPUT_10_DTYPE        real_T
#define OUTPUT_10_COMPLEX      COMPLEX_NO
#define OUT_10_FRAME_BASED     FRAME_NO
#define OUT_10_BUS_BASED       0
#define OUT_10_BUS_NAME        
#define OUT_10_DIMS            1-D
#define OUT_10_ISSIGNED        1
#define OUT_10_WORDLENGTH      8
#define OUT_10_FIXPOINTSCALING 1
#define OUT_10_FRACTIONLENGTH  3
#define OUT_10_BIAS            0
#define OUT_10_SLOPE           0.125
/* Output Port  11 */
#define OUT_PORT_11_NAME       bat_mah
#define OUTPUT_11_WIDTH        1
#define OUTPUT_DIMS_11_COL     1
#define OUTPUT_11_DTYPE        real_T
#define OUTPUT_11_COMPLEX      COMPLEX_NO
#define OUT_11_FRAME_BASED     FRAME_NO
#define OUT_11_BUS_BASED       0
#define OUT_11_BUS_NAME        
#define OUT_11_DIMS            1-D
#define OUT_11_ISSIGNED        1
#define OUT_11_WORDLENGTH      8
#define OUT_11_FIXPOINTSCALING 1
#define OUT_11_FRACTIONLENGTH  3
#define OUT_11_BIAS            0
#define OUT_11_SLOPE           0.125

#define NPARAMS               2
/* Parameter 0 */
#define PARAMETER_0_NAME      rpi_Ts
#define PARAMETER_0_DTYPE     real_T
#define PARAMETER_0_COMPLEX   COMPLEX_NO
/* Parameter 1 */
#define PARAMETER_1_NAME      usb_serial_number
#define PARAMETER_1_DTYPE     real_T
#define PARAMETER_1_COMPLEX   COMPLEX_NO

#define SAMPLE_TIME_0         rpi_Ts
#define NUM_DISC_STATES       0
#define DISC_STATES_IC        [0]
#define NUM_CONT_STATES       0
#define CONT_STATES_IC        [0]

#define SFUNWIZ_GENERATE_TLC  1
#define SOURCEFILES           "__SFB__"
#define PANELINDEX            N/A
#define USE_SIMSTRUCT         0
#define SHOW_COMPILE_STEPS    0
#define CREATE_DEBUG_MEXFILE  0
#define SAVE_CODE_ONLY        1
#define SFUNWIZ_REVISION      3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"

#define PARAM_DEF0(S) ssGetSFcnParam(S, 0)
#define PARAM_DEF1(S) ssGetSFcnParam(S, 1)

#define IS_PARAM_DOUBLE(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsDouble(pVal))

extern void rpi_sfun_betalink_Start_wrapper(const real_T *rpi_Ts, const int_T p_width0,
			const real_T *usb_serial_number, const int_T p_width1);
extern void rpi_sfun_betalink_Outputs_wrapper(const real_T *throttle,
			real_T *timestamp,
			real_T *rpm,
			real_T *inv,
			real_T *acc,
			real_T *gyr,
			real_T *mag,
			real_T *roll,
			real_T *pitch,
			real_T *yaw,
			real_T *bat_volt,
			real_T *bat_amp,
			real_T *bat_mah,
			const real_T *rpi_Ts, const int_T p_width0,
			const real_T *usb_serial_number, const int_T p_width1);
extern void rpi_sfun_betalink_Terminate_wrapper(const real_T *rpi_Ts, const int_T p_width0,
			const real_T *usb_serial_number, const int_T p_width1);
/*====================*
 * S-function methods *
 *====================*/
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)
/* Function: mdlCheckParameters =============================================
 * Abstract:
 *     Verify parameter definitions and types.
 */
static void mdlCheckParameters(SimStruct *S)
{
    int paramIndex  = 0;
    bool invalidParam = false;
    /* All parameters must match the S-function Builder Dialog */

    {
        const mxArray *pVal0 = ssGetSFcnParam(S, 0);
        if (!mxIsDouble(pVal0)) {
            ssSetErrorStatus(S, "Sample time parameter rpi_Ts must be of type double");
            return;
        }
    }

    {
        const mxArray *pVal0 = ssGetSFcnParam(S, 0);
        if (!IS_PARAM_DOUBLE(pVal0)) {
            invalidParam = true;
            paramIndex = 0;
            goto EXIT_POINT;
        }
    }

    {
        const mxArray *pVal1 = ssGetSFcnParam(S, 1);
        if (!IS_PARAM_DOUBLE(pVal1)) {
            invalidParam = true;
            paramIndex = 1;
            goto EXIT_POINT;
        }
    }


    EXIT_POINT:
    if (invalidParam) {
        static char parameterErrorMsg[1024];
        sprintf(parameterErrorMsg, "The data type and or complexity of parameter %d does not match the "
                "information specified in the S-function Builder dialog. "
                "For non-double parameters you will need to cast them using int8, int16, "
                "int32, uint8, uint16, uint32 or boolean.", paramIndex + 1);
        ssSetErrorStatus(S, parameterErrorMsg);
    }
    return;
}
#endif /* MDL_CHECK_PARAMETERS */
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS); /* Number of expected parameters */
    #if defined(MATLAB_MEX_FILE)
    if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
        mdlCheckParameters(S);
        if (ssGetErrorStatus(S) != NULL) {
            return;
        }
    } else {
        return; /* Parameter mismatch will be reported by Simulink */
    }
    #endif

    ssSetArrayLayoutForCodeGen(S, SS_COLUMN_MAJOR);

    ssSetOperatingPointCompliance(S, USE_DEFAULT_OPERATING_POINT);

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);


    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /* Input Port 0 */
    ssSetInputPortWidth(S, 0, INPUT_0_WIDTH);
    ssSetInputPortDataType(S, 0, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/


    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;
    /* Output Port 0 */
    ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
    /* Output Port 1 */
    ssSetOutputPortWidth(S, 1, OUTPUT_1_WIDTH);
    ssSetOutputPortDataType(S, 1, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 1, OUTPUT_1_COMPLEX);
    /* Output Port 2 */
    ssSetOutputPortWidth(S, 2, OUTPUT_2_WIDTH);
    ssSetOutputPortDataType(S, 2, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 2, OUTPUT_2_COMPLEX);
    /* Output Port 3 */
    ssSetOutputPortWidth(S, 3, OUTPUT_3_WIDTH);
    ssSetOutputPortDataType(S, 3, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 3, OUTPUT_3_COMPLEX);
    /* Output Port 4 */
    ssSetOutputPortWidth(S, 4, OUTPUT_4_WIDTH);
    ssSetOutputPortDataType(S, 4, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 4, OUTPUT_4_COMPLEX);
    /* Output Port 5 */
    ssSetOutputPortWidth(S, 5, OUTPUT_5_WIDTH);
    ssSetOutputPortDataType(S, 5, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 5, OUTPUT_5_COMPLEX);
    /* Output Port 6 */
    ssSetOutputPortWidth(S, 6, OUTPUT_6_WIDTH);
    ssSetOutputPortDataType(S, 6, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 6, OUTPUT_6_COMPLEX);
    /* Output Port 7 */
    ssSetOutputPortWidth(S, 7, OUTPUT_7_WIDTH);
    ssSetOutputPortDataType(S, 7, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 7, OUTPUT_7_COMPLEX);
    /* Output Port 8 */
    ssSetOutputPortWidth(S, 8, OUTPUT_8_WIDTH);
    ssSetOutputPortDataType(S, 8, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 8, OUTPUT_8_COMPLEX);
    /* Output Port 9 */
    ssSetOutputPortWidth(S, 9, OUTPUT_9_WIDTH);
    ssSetOutputPortDataType(S, 9, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 9, OUTPUT_9_COMPLEX);
    /* Output Port 10 */
    ssSetOutputPortWidth(S, 10, OUTPUT_10_WIDTH);
    ssSetOutputPortDataType(S, 10, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 10, OUTPUT_10_COMPLEX);
    /* Output Port 11 */
    ssSetOutputPortWidth(S, 11, OUTPUT_11_WIDTH);
    ssSetOutputPortDataType(S, 11, SS_DOUBLE);
    ssSetOutputPortComplexSignal(S, 11, OUTPUT_11_COMPLEX);
    ssSetNumPWork(S, 0);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetSimulinkVersionGeneratedIn(S, "10.2");

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_USE_TLC_WITH_ACCELERATOR |
                     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

#if defined(MATLAB_MEX_FILE)
#define MDL_SET_INPUT_PORT_DIMENSION_INFO
static void mdlSetInputPortDimensionInfo(SimStruct        *S, 
                                         int_T            port,
                                         const DimsInfo_T *dimsInfo)
{
    if(!ssSetInputPortDimensionInfo(S, port, dimsInfo)) return;
}
#endif

#define MDL_SET_OUTPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_OUTPUT_PORT_DIMENSION_INFO)
static void mdlSetOutputPortDimensionInfo(SimStruct        *S, 
                                          int_T            port, 
                                          const DimsInfo_T *dimsInfo)
{
    if (!ssSetOutputPortDimensionInfo(S, port, dimsInfo)) return;
}
#endif
#define MDL_SET_DEFAULT_PORT_DIMENSION_INFO
static void mdlSetDefaultPortDimensionInfo(SimStruct *S)
{
    DECL_AND_INIT_DIMSINFO(portDimsInfo);
    int_T dims[2] = { INPUT_0_WIDTH, 1 };
    bool  frameIn = ssGetInputPortFrameData(S, 0) == FRAME_YES;

    /* Neither the input nor the output ports have been set */

    portDimsInfo.width   = INPUT_0_WIDTH;
    portDimsInfo.numDims = frameIn ? 2 : 1;
    portDimsInfo.dims    = frameIn ? dims : &portDimsInfo.width;
    if (ssGetInputPortNumDimensions(S, 0) == (-1)) {  
        ssSetInputPortDimensionInfo(S, 0, &portDimsInfo);
    }
    portDimsInfo.width   = OUTPUT_0_WIDTH;
    dims[0]              = OUTPUT_0_WIDTH;
    dims[1]              = 1;
    portDimsInfo.dims    = frameIn ? dims : &portDimsInfo.width;
    if (ssGetOutputPortNumDimensions(S, 0) == (-1)) {  
        ssSetOutputPortDimensionInfo(S, 0, &portDimsInfo);
    }
    return;
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, *mxGetPr(ssGetSFcnParam(S, 0)));
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType(S, 0, dType);
}

#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
    ssSetInputPortDataType(S, 0, SS_DOUBLE);
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

static void mdlSetWorkWidths(SimStruct *S)
{

    const char_T *rtParamNames[] = {"P1","P2"};
    ssRegAllTunableParamsAsRunTimeParams(S, rtParamNames);

}

#endif

#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START)
/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
static void mdlStart(SimStruct *S)
{
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const real_T *rpi_Ts = (const real_T *) mxGetData(PARAM_DEF0(S));
    const real_T *usb_serial_number = (const real_T *) mxGetData(PARAM_DEF1(S));
    
    rpi_sfun_betalink_Start_wrapper(rpi_Ts, p_width0, usb_serial_number, p_width1);
}
#endif /*  MDL_START */

/* Function: mdlOutputs =======================================================
 *
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const real_T *throttle = (real_T *) ssGetInputPortRealSignal(S, 0);
    real_T *timestamp = (real_T *) ssGetOutputPortRealSignal(S, 0);
    real_T *rpm = (real_T *) ssGetOutputPortRealSignal(S, 1);
    real_T *inv = (real_T *) ssGetOutputPortRealSignal(S, 2);
    real_T *acc = (real_T *) ssGetOutputPortRealSignal(S, 3);
    real_T *gyr = (real_T *) ssGetOutputPortRealSignal(S, 4);
    real_T *mag = (real_T *) ssGetOutputPortRealSignal(S, 5);
    real_T *roll = (real_T *) ssGetOutputPortRealSignal(S, 6);
    real_T *pitch = (real_T *) ssGetOutputPortRealSignal(S, 7);
    real_T *yaw = (real_T *) ssGetOutputPortRealSignal(S, 8);
    real_T *bat_volt = (real_T *) ssGetOutputPortRealSignal(S, 9);
    real_T *bat_amp = (real_T *) ssGetOutputPortRealSignal(S, 10);
    real_T *bat_mah = (real_T *) ssGetOutputPortRealSignal(S, 11);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const real_T *rpi_Ts = (const real_T *) mxGetData(PARAM_DEF0(S));
    const real_T *usb_serial_number = (const real_T *) mxGetData(PARAM_DEF1(S));
    
    rpi_sfun_betalink_Outputs_wrapper(throttle, timestamp, rpm, inv, acc, gyr, mag, roll, pitch, yaw, bat_volt, bat_amp, bat_mah, rpi_Ts, p_width0, usb_serial_number, p_width1);

}

/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const real_T *rpi_Ts = (const real_T *) mxGetData(PARAM_DEF0(S));
    const real_T *usb_serial_number = (const real_T *) mxGetData(PARAM_DEF1(S));
    
    rpi_sfun_betalink_Terminate_wrapper(rpi_Ts, p_width0, usb_serial_number, p_width1);

}


#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif



