/******************************************************************************
 ** File Name:      sin_cos.h                                                 *
 ** Author:         shan.he                                                   *
 ** DATE:           2010-11-22                                                *
 ** Copyright:      2010 Spreadtrum, Incoporated. All Rights Reserved.        *
 ** Description:                                                              *
 ** Note:                                                      				  *
 *****************************************************************************/
/******************************************************************************
 **                   Edit    History                                         *
 **---------------------------------------------------------------------------* 
 ** DATE              NAME            DESCRIPTION                             * 
 *****************************************************************************/
#ifndef _SIN_COS_H_
#define _SIN_COS_H_

/**---------------------------------------------------------------------------*
 **                         Dependencies                                      *
 **---------------------------------------------------------------------------*/
//#include "sci_types.h"
#include <linux/types.h>

/**---------------------------------------------------------------------------*
 **                         Macros                                            *
 **---------------------------------------------------------------------------*/
#define COSSIN_Q 30

#define pi              3.14159265359
#define PI_32           0x3243F6A88              //pi * (1 << 32)
#define ARC_32_COEF     2147483648UL
//convert arc of double type to int32 type
#define ARC_32(arc) (int32_t)((arc) / (pi) * 2147483648);

/**---------------------------------------------------------------------------*
 **                         Compiler Flag                                     *
 **---------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C"
{
#endif

/**---------------------------------------------------------------------------*
 **                         Public Functions                                  *
 **---------------------------------------------------------------------------*/
/****************************************************************************/
/* Purpose:	get the sin value of an arc at Q32							    */
/* Author:																	*/
/* Input:   arc at Q32	    				     	                    	*/
/* Output:	none															*/
/* Return:	sin value at Q30							                    */  
/* Note:   arc at Q32 = arc * (2 ^ 32)  									*/
/*         value at Q30 = value * (2 ^ 30)                                  */
/****************************************************************************/
int32_t dcam_sin_32(int32_t n);

/****************************************************************************/
/* Purpose:	get the cos value of an arc at Q32							    */
/* Author:																	*/
/* Input:   arc at Q32	    				     	                    	*/
/* Output:	none															*/
/* Return:	cos value at Q30							                    */  
/* Note:   arc at Q32 = arc * (2 ^ 32)  									*/
/*         value at Q30 = value * (2 ^ 30)                                  */
/****************************************************************************/
int32_t dcam_cos_32(int32_t n);

/**---------------------------------------------------------------------------*
 **                         Compiler Flag                                     *
 **---------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif

#endif
