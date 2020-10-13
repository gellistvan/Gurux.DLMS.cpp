//
// --------------------------------------------------------------------------
//  Gurux Ltd
//
//
//
// Filename:        $HeadURL$
//
// Version:         $Revision$,
//                  $Date$
//                  $Author$
//
// Copyright (c) Gurux Ltd
//
//---------------------------------------------------------------------------
//
//  DESCRIPTION
//
// This file is a part of Gurux Device Framework.
//
// Gurux Device Framework is Open Source software; you can redistribute it
// and/or modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; version 2 of the License.
// Gurux Device Framework is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// More information of Gurux products: http://www.gurux.org
//
// This code is licensed under the GNU General Public License v2.
// Full text may be retrieved at http://www.gnu.org/licenses/gpl-2.0.txt
//---------------------------------------------------------------------------

#ifndef GXDLMSG3PLCMACSETUP_H
#define GXDLMSG3PLCMACSETUP_H

#include "GXDLMSObject.h"
#include "GXDLMSNeighbourTableElement.h"

#include <string>
#include <vector>
/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSPrimeNbOfdmPlcMacSetup
*/
class CGXDLMSG3PlcMacSetup : public CGXDLMSObject
{
    unsigned short m_ShortAddress;
    unsigned short m_RcCoord;
    unsigned short m_PanId;
    std::string m_ToneMap;
    unsigned char m_TmrTtl;
    unsigned char m_MaxFrameRetries;
    unsigned char m_NeighbourTableEntryTtl;
    std::vector<CGXDLMSNeighbourTableElement*> m_NeighbourTable;
    unsigned char m_HighPriorityWindowSize;
    unsigned char m_CsmaFairnessLimit;
    unsigned char m_BeaconRandimizationWindowLength;
    unsigned char m_A;
    unsigned char m_K;
    unsigned char m_MinCwAttempts;
    unsigned char m_CenelecLegacyMode;
    unsigned char m_MaxBe;
    unsigned char m_MaxCsmaBackoffs;
    unsigned char m_MinBe;

public:
    void SetShortAddress(unsigned short value);

    unsigned short GetShortAddress();

    void SetRcCoord(unsigned short value);

    unsigned short GetRcCoord();

    void SetPanId(unsigned short value);

    unsigned short GetPanId();

    void SetToneMap(const std::string& value);

    std::string GetToneMap();

    void SetTmrTtl(unsigned char value);

    unsigned char GetTmrTtl();

    void SetMaxFrameRetries(unsigned char value);

    unsigned char GetMaxFrameRetries();

    void SetNeighbourTableEntryTtl(unsigned char value);

    unsigned char GetNeighbourTableEntryTtl();

    void SetNeighbourTable(std::vector<CGXDLMSNeighbourTableElement*> value);

    std::vector<CGXDLMSNeighbourTableElement*> GetNeighbourTable();

    void SetHighPriorityWindowSize(unsigned char value);

    unsigned char GetHighPriorityWindowSize();

    void SetCsmaFairnessLimit(unsigned char value);

    unsigned char GetCsmaFairnessLimit();

    void SetBeaconRandimizationWindowLength(unsigned char value);

    unsigned char GetBeaconRandimizationWindowLength();

    void SetA(unsigned char value);

    unsigned char GetA();

    void SetK(unsigned char value);

    unsigned char GetK();

    void SetMinCwAttempts(unsigned char value);

    unsigned char GetMinCwAttempts();

    void SetCenelecLegacyMode(unsigned char value);

    unsigned char GetCenelecLegacyMode();

    void SetMaxBe(unsigned char value);

    unsigned char GetMaxBe();

    void SetMaxCsmaBackoffs(unsigned char value);

    unsigned char GetMaxCsmaBackoffs();

    void SetMinBe(unsigned char value);

    unsigned char GetMinBe();

    //Constructor.
    CGXDLMSG3PlcMacSetup();

    //SN Constructor.
    CGXDLMSG3PlcMacSetup(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSG3PlcMacSetup(std::string ln);


    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    // Set value of given attribute.
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //GXDLMSG3PLCMACSETUP_H