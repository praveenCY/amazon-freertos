/*******************************************************************************
  NVM Peripheral Library Template Implementation

  File Name:
    nvm_WriteOperation_Default.h

  Summary:
    NVM PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : WriteOperation
    and its Variant : Default
    For following APIs :
        PLIB_NVM_ExistsWriteOperation
        PLIB_NVM_FlashRead
        PLIB_NVM_FlashWriteStart
        PLIB_NVM_FlashEraseStart
        PLIB_NVM_FlashWriteCycleHasCompleted

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _NVM_WRITEOPERATION_DEFAULT_H
#define _NVM_WRITEOPERATION_DEFAULT_H

//******************************************************************************
/* Function :  NVM_ExistsWriteOperation_Default

  Summary:
    Implements Default variant of PLIB_NVM_ExistsWriteOperation

  Description:
    This template implements the Default variant of the PLIB_NVM_ExistsWriteOperation function.
*/

#define PLIB_NVM_ExistsWriteOperation PLIB_NVM_ExistsWriteOperation
PLIB_TEMPLATE bool NVM_ExistsWriteOperation_Default( NVM_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  NVM_FlashRead_Default

  Summary:
    Implements Default variant of PLIB_NVM_FlashRead 

  Description:
    This template implements the Default variant of the PLIB_NVM_FlashRead function.
*/

PLIB_TEMPLATE uint32_t NVM_FlashRead_Default( NVM_MODULE_ID index , uint32_t address )
{
    return ( *((uint32_t *)(address)) );

}


//******************************************************************************
/* Function :  NVM_FlashWriteStart_Default

  Summary:
    Implements Default variant of PLIB_NVM_FlashWriteStart 

  Description:
    This template implements the Default variant of the PLIB_NVM_FlashWriteStart function.
*/

PLIB_TEMPLATE void NVM_FlashWriteStart_Default( NVM_MODULE_ID index )
{
    NVMCONSET = _NVMCON_WR_MASK;
}


//******************************************************************************
/* Function :  NVM_FlashEraseStart_Default

  Summary:
    Implements Default variant of PLIB_NVM_FlashEraseStart 

  Description:
    This template implements the Default variant of the PLIB_NVM_FlashEraseStart function.
*/

PLIB_TEMPLATE void NVM_FlashEraseStart_Default( NVM_MODULE_ID index )
{
    NVMCONSET = _NVMCON_WR_MASK;
}


//******************************************************************************
/* Function :  NVM_FlashWriteCycleHasCompleted_Default

  Summary:
    Implements Default variant of PLIB_NVM_FlashWriteCycleHasCompleted 

  Description:
    This template implements the Default variant of the PLIB_NVM_FlashWriteCycleHasCompleted function.
*/

PLIB_TEMPLATE bool NVM_FlashWriteCycleHasCompleted_Default( NVM_MODULE_ID index )
{
    return (!(bool)NVMCONbits.WR);
}



#endif /*_NVM_WRITEOPERATION_DEFAULT_H*/

/******************************************************************************
 End of File
*/

