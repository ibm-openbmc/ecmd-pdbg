//IBM_PROLOG_BEGIN_TAG
/* 
 * eCMD for pdbg Project
 *
 * Copyright 2017,2018 IBM International Business Machines Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * 	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
//IBM_PROLOG_END_TAG

#ifndef edbgCommon_H
#define edbgCommon_H

//----------------------------------------------------------------------
//  Includes
//----------------------------------------------------------------------
#include <edbgReturnCodes.H>
#include <edbgOutput.H>

/* --------------------------------------- */
/* Internal global variable for ECMD_HOME  */
/* --------------------------------------- */
extern std::string gECMD_HOME;  // The variable is defined in edbgEcmdDll.C

/* --------------------------------------- */
/* Internal global variable for EDBG_HOME  */
/* --------------------------------------- */
extern std::string gEDBG_HOME;  // The variable is defined in edbgEcmdDll.C

/* -------------------------------------- */
/* Output Class used for all edbg output  */
/* -------------------------------------- */
extern edbgOutput out;  // The variable is defined at the bottom of edbgOutput.C

#endif /* edbgCommon_H */
