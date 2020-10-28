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

#include "../include/GXDLMSG3PlcMacSetup.h"

#include <sstream>

//Constructor.
CGXDLMSG3PlcMacSetup::CGXDLMSG3PlcMacSetup() :
        CGXDLMSG3PlcMacSetup("0.0.29.1.0.255", 0)
{
}

//SN Constructor.
CGXDLMSG3PlcMacSetup::CGXDLMSG3PlcMacSetup(std::string ln, unsigned short sn) :
    CGXDLMSObject(DLMS_OBJECT_TYPE_G3_PLC_MAC_SETUP, ln, sn)
{

}

//LN Constructor.
CGXDLMSG3PlcMacSetup::CGXDLMSG3PlcMacSetup(std::string ln) :
    CGXDLMSG3PlcMacSetup(ln, 0)
{

}

CGXDLMSG3PlcMacSetup::~CGXDLMSG3PlcMacSetup()
{
    for (std::vector<CGXDLMSNeighbourTableElement*>::iterator it = m_NeighbourTable.begin(); it != m_NeighbourTable.end(); ++it)
    {
      delete *it;
    }
    m_NeighbourTable.clear();
}

// Returns amount of attributes.
int CGXDLMSG3PlcMacSetup::GetAttributeCount()
{
    return 19;
}

// Returns amount of methods.
int CGXDLMSG3PlcMacSetup::GetMethodCount()
{
    return 1;
}
//======================== getters & setters ========================
void CGXDLMSG3PlcMacSetup::SetShortAddress(const unsigned short value)
{
    m_ShortAddress = value;
}

unsigned short CGXDLMSG3PlcMacSetup::GetShortAddress()
{
    return m_ShortAddress;
}

void CGXDLMSG3PlcMacSetup::SetRcCoord(unsigned short value)
{
    m_RcCoord = value;
}

unsigned short CGXDLMSG3PlcMacSetup::GetRcCoord()
{
    return m_RcCoord;
}

void CGXDLMSG3PlcMacSetup::SetPanId(unsigned short value)
{
    m_PanId = value;
}

unsigned short CGXDLMSG3PlcMacSetup::GetPanId()
{
  return m_PanId;
}

void CGXDLMSG3PlcMacSetup::SetToneMap(const std::string& value)
{
    m_ToneMap = value;
}

std::string CGXDLMSG3PlcMacSetup::GetToneMap()
{
    return m_ToneMap;
}

void CGXDLMSG3PlcMacSetup::SetTmrTtl(unsigned char value)
{
  m_TmrTtl = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetTmrTtl()
{
    return m_TmrTtl;
}

void CGXDLMSG3PlcMacSetup::SetMaxFrameRetries(unsigned char value)
{
    m_MaxFrameRetries = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetMaxFrameRetries()
{
    return m_MaxFrameRetries;
}

void CGXDLMSG3PlcMacSetup::SetNeighbourTableEntryTtl(unsigned char value)
{
  m_NeighbourTableEntryTtl = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetNeighbourTableEntryTtl()
{
    return m_NeighbourTableEntryTtl;
}

void CGXDLMSG3PlcMacSetup::SetNeighbourTable(std::vector<CGXDLMSNeighbourTableElement*> value)
{
  m_NeighbourTable = value;
}

std::vector<CGXDLMSNeighbourTableElement*> CGXDLMSG3PlcMacSetup::GetNeighbourTable()
{
  return m_NeighbourTable;
}

void CGXDLMSG3PlcMacSetup::SetHighPriorityWindowSize(unsigned char value)
{
    m_HighPriorityWindowSize = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetHighPriorityWindowSize()
{
    return m_HighPriorityWindowSize;
}

void CGXDLMSG3PlcMacSetup::SetCsmaFairnessLimit(unsigned char value)
{
    m_CsmaFairnessLimit = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetCsmaFairnessLimit()
{
    return m_CsmaFairnessLimit;
}

void CGXDLMSG3PlcMacSetup::SetBeaconRandimizationWindowLength(unsigned char value)
{
    m_BeaconRandimizationWindowLength = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetBeaconRandimizationWindowLength()
{
    return m_BeaconRandimizationWindowLength;
}

void CGXDLMSG3PlcMacSetup::SetA(unsigned char value)
{
    m_A = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetA()
{
    return m_A;
}

void CGXDLMSG3PlcMacSetup::SetK(unsigned char value)
{
    m_K = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetK()
{
    return m_K;
}

void CGXDLMSG3PlcMacSetup::SetMinCwAttempts(unsigned char value)
{
    m_MinCwAttempts = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetMinCwAttempts()
{
    return m_MinCwAttempts;
}

void CGXDLMSG3PlcMacSetup::SetCenelecLegacyMode(unsigned char value)
{
    m_CenelecLegacyMode = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetCenelecLegacyMode()
{
    return m_CenelecLegacyMode;
}

void CGXDLMSG3PlcMacSetup::SetMaxBe(unsigned char value)
{
    m_MaxBe = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetMaxBe()
{
    return m_MaxBe;
}

void CGXDLMSG3PlcMacSetup::SetMaxCsmaBackoffs(unsigned char value)
{
    m_MaxCsmaBackoffs = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetMaxCsmaBackoffs()
{
    return m_MaxCsmaBackoffs;
}

void CGXDLMSG3PlcMacSetup::SetMinBe(unsigned char value)
{
    m_MinBe = value;
}

unsigned char CGXDLMSG3PlcMacSetup::GetMinBe()
{
    return m_MinBe;
}
//======================== getters & setters ========================
void CGXDLMSG3PlcMacSetup::GetValues(std::vector<std::string>& values)
{
    values.clear();
    std::string ln;
    GetLogicalName(ln);
    values.push_back(ln);
    values.push_back(CGXDLMSVariant(m_ShortAddress).ToString());
    values.push_back(CGXDLMSVariant(m_RcCoord).ToString());
    values.push_back(CGXDLMSVariant(m_PanId).ToString());
    values.push_back(CGXDLMSVariant(m_ToneMap).ToString());
    values.push_back(CGXDLMSVariant(m_TmrTtl).ToString());
    values.push_back(CGXDLMSVariant(m_MaxFrameRetries).ToString());
    values.push_back(CGXDLMSVariant(m_NeighbourTableEntryTtl).ToString());

    std::stringstream sb;
    sb << '[';
    bool empty = true;
    for (std::vector<CGXDLMSNeighbourTableElement*>::iterator it = m_NeighbourTable.begin();
         it != m_NeighbourTable.end(); ++it)
    {
      if (!empty)
      {
        sb << ", ";
      }
      empty = false;
      std::string str = (*it)->ToString();
      sb.write(str.c_str(), str.size());
    }
    sb << ']';
    values.push_back(sb.str());

    // values.push_back(CGXDLMSVariant(m_NeighbourTableEntryTtl).ToString());
    values.push_back(CGXDLMSVariant(m_HighPriorityWindowSize).ToString());
    values.push_back(CGXDLMSVariant(m_CsmaFairnessLimit).ToString());
    values.push_back(CGXDLMSVariant(m_BeaconRandimizationWindowLength).ToString());
    values.push_back(CGXDLMSVariant(m_A).ToString());
    values.push_back(CGXDLMSVariant(m_K).ToString());
    values.push_back(CGXDLMSVariant(m_MinCwAttempts).ToString());
    values.push_back(CGXDLMSVariant(m_CenelecLegacyMode).ToString());
    values.push_back(CGXDLMSVariant(m_MaxBe).ToString());
    values.push_back(CGXDLMSVariant(m_MaxCsmaBackoffs).ToString());
    values.push_back(CGXDLMSVariant(m_MinBe).ToString());
}

void CGXDLMSG3PlcMacSetup::GetAttributeIndexToRead(bool all, std::vector<int>& attributes)
{
    //LN is static and read only once.
    if (all || CGXDLMSObject::IsLogicalNameEmpty(m_LN))
    {
        attributes.push_back(1);
    }
    if (all || CanRead(2))
    {
        attributes.push_back(2);
    }
    if (all || CanRead(3)) {
        attributes.push_back(3);
    }
    if (all || CanRead(4)) {
        attributes.push_back(4);
    }
    if (all || CanRead(7)) {
        attributes.push_back(7);
    }
    if (all || CanRead(8)) {
        attributes.push_back(8);
    }
    if (all || CanRead(9)) {
        attributes.push_back(9);
    }
    if (all || CanRead(10)) {
        attributes.push_back(10);
    }
    if (all || CanRead(11)) {
        attributes.push_back(11);
    }
    if (all || CanRead(12)) {
        attributes.push_back(12);
    }
    if (all || CanRead(13)) {
        attributes.push_back(13);
    }
    if (all || CanRead(14)) {
        attributes.push_back(14);
    }
    if (all || CanRead(15)) {
        attributes.push_back(15);
    }
    if (all || CanRead(16)) {
        attributes.push_back(16);
    }
    if (all || CanRead(17)) {
        attributes.push_back(17);
    }
    if (all || CanRead(18)) {
        attributes.push_back(18);
    }
    if (all || CanRead(20)) {
        attributes.push_back(20);
    }
    if (all || CanRead(21)) {
        attributes.push_back(21);
    }
    if (all || CanRead(22)) {
        attributes.push_back(22);
    }
}

int CGXDLMSG3PlcMacSetup::GetDataType(int index, DLMS_DATA_TYPE& type)
{
    DLMS_ERROR_CODE ret = DLMS_ERROR_CODE_OK;
    switch (index) {
    case 1:
        type = DLMS_DATA_TYPE_OCTET_STRING;
        break;
    case 2:
    case 3:
    case 4:
      type = DLMS_DATA_TYPE_UINT16;
      break;
    case 7:
      type = DLMS_DATA_TYPE_BIT_STRING;
        break;
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
      type = DLMS_DATA_TYPE_UINT8;
      break;
    case 11:
      type = DLMS_DATA_TYPE_ARRAY;
      break;
    default:
        ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return ret;
}

// Returns value of given attribute.
int CGXDLMSG3PlcMacSetup::GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    DLMS_ERROR_CODE ret = DLMS_ERROR_CODE_OK;
    if (e.GetIndex() == 1)
    {
        int ret;
        CGXDLMSVariant tmp;
        if ((ret = GetLogicalName(this, tmp)) != 0)
        {
            return ret;
        }
        e.SetValue(tmp);
    }
    else if (e.GetIndex() == 2)
    {
      e.SetValue(m_ShortAddress);
    }
    else if (e.GetIndex() == 3)
    {
        e.SetValue(m_RcCoord);
    }
    else if (e.GetIndex() == 4)
    {
        e.SetValue(m_PanId);
    }
    else if (e.GetIndex() == 7)
    {
        CGXDLMSVariant variant(m_ToneMap);
        variant.vt = DLMS_DATA_TYPE_BIT_STRING;
        e.SetValue(variant);
    }
    else if (e.GetIndex() == 8)
    {
        e.SetValue(m_TmrTtl);
    }
    else if (e.GetIndex() == 9)
    {
        e.SetValue(m_MaxFrameRetries);
    }
    else if (e.GetIndex() == 10)
    {
        e.SetValue(m_NeighbourTableEntryTtl);
    }
    else if (e.GetIndex() == 11)
    {
      e.GetValue().vt = DLMS_DATA_TYPE_ARRAY;

      for (std::vector<CGXDLMSNeighbourTableElement*>::iterator it = m_NeighbourTable.begin(); it != m_NeighbourTable.end(); ++it)
      {
          CGXDLMSVariant element;
          element.vt = DLMS_DATA_TYPE_STRUCTURE;

          CGXDLMSVariant l_ShortAddress;
          l_ShortAddress.uiVal = (*it)->GetShortAddress();

          CGXDLMSVariant l_PayloadModulationScheme;
          l_PayloadModulationScheme.boolVal = (*it)->GetPayloadModulationScheme();

          CGXDLMSVariant l_ToneMap;
          l_ToneMap.strVal = (*it)->GetToneMap();

          CGXDLMSVariant l_Modulation;
          l_Modulation.uiVal = (*it)->GetModulation();

          CGXDLMSVariant l_TxGain;
          l_TxGain.cVal = (*it)->GetTxGain();

          CGXDLMSVariant l_TxRes;
          l_TxRes.bVal = (*it)->GetTxRes();

          CGXDLMSVariant l_TxCoeff;
          l_TxCoeff.strVal = (*it)->GetTxCoeff();

          CGXDLMSVariant l_Lqi;
          l_Lqi.bVal = (*it)->GetLqi();

          CGXDLMSVariant l_PhaseDifferencial;
          l_PhaseDifferencial.cVal = (*it)->GetPhaseDifferencial();

          CGXDLMSVariant l_TmrValidTime;
          l_TmrValidTime.bVal = (*it)->GetTmrValidTime();

          CGXDLMSVariant l_NeighbourValidTime;
          l_NeighbourValidTime.bVal = (*it)->GetNeighbourValidTime();

          element.Arr.push_back(l_ShortAddress);
          element.Arr.push_back(l_PayloadModulationScheme);
          element.Arr.push_back(l_ToneMap);
          element.Arr.push_back(l_Modulation);
          element.Arr.push_back(l_TxGain);
          element.Arr.push_back(l_TxRes);
          element.Arr.push_back(l_TxCoeff);
          element.Arr.push_back(l_Lqi);
          element.Arr.push_back(l_PhaseDifferencial);
          element.Arr.push_back(l_TmrValidTime);
          element.Arr.push_back(l_NeighbourValidTime);

          e.GetValue().Arr.push_back(element);
      }
    }
    else if (e.GetIndex() == 12)
    {
        e.SetValue(m_HighPriorityWindowSize);
    }
    else if (e.GetIndex() == 13)
    {
        e.SetValue(m_CsmaFairnessLimit);
    }
    else if (e.GetIndex() == 14)
    {
        e.SetValue(m_BeaconRandimizationWindowLength);
    }
    else if (e.GetIndex() == 15)
    {
        e.SetValue(m_A);
    }
    else if (e.GetIndex() == 16)
    {
        e.SetValue(m_K);
    }
    else if (e.GetIndex() == 17)
    {
        e.SetValue(m_MinCwAttempts);
    }
    else if (e.GetIndex() == 18)
    {
        e.SetValue(m_CenelecLegacyMode);
    }
    else if (e.GetIndex() == 20)
    {
        e.SetValue(m_MaxBe);
    }
    else if (e.GetIndex() == 21)
    {
        e.SetValue(m_MaxCsmaBackoffs);
    }
    else if (e.GetIndex() == 22)
    {
        e.SetValue(m_MinBe);
    }
    else
    {
        ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return ret;
}

// Set value of given attribute.
int CGXDLMSG3PlcMacSetup::SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    DLMS_ERROR_CODE ret = DLMS_ERROR_CODE_OK;
    if (e.GetIndex() == 1)
    {
        return SetLogicalName(this, e.GetValue());
    }
    else if (e.GetIndex() == 2)
    {
        m_ShortAddress = e.GetValue().uiVal;
    }
    else if (e.GetIndex() == 3)
    {
        m_RcCoord = e.GetValue().uiVal;
    }
    else if (e.GetIndex() == 4)
    {
        m_PanId = e.GetValue().uiVal;
    }
    else if (e.GetIndex() == 7)
    {
        m_ToneMap = e.GetValue().strVal;
    }
    else if (e.GetIndex() == 8)
    {
        m_TmrTtl = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 9)
    {
        m_MaxFrameRetries = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 10)
    {
        m_NeighbourTableEntryTtl = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 11)
    {
        for (std::vector<CGXDLMSNeighbourTableElement*>::iterator it = m_NeighbourTable.begin(); it != m_NeighbourTable.end(); ++it)
        {
            delete *it;
        }
        m_NeighbourTable.clear();

        for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
        {
            CGXDLMSNeighbourTableElement *element = new CGXDLMSNeighbourTableElement;

            element->SetShortAddress(it->Arr[0].uiVal);
            element->SetPayloadModulationScheme(it->Arr[1].boolVal);
            element->SetToneMap(it->Arr[2].strVal);
            element->SetModulation(it->Arr[3].uiVal);
            element->SetTxGain(it->Arr[4].bVal);
            element->SetTxRes(it->Arr[5].bVal);
            element->SetTxCoeff(it->Arr[6].strVal);
            element->SetLqi(it->Arr[7].bVal);
            element->SetPhaseDifferencial(it->Arr[8].cVal);
            element->SetTmrValidTime(it->Arr[9].bVal);
            element->SetNeighbourValidTime(it->Arr[10].bVal);

            m_NeighbourTable.push_back(element);
        }
    }
    else if (e.GetIndex() == 12)
    {
        m_HighPriorityWindowSize = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 13)
    {
        m_CsmaFairnessLimit = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 14)
    {
        m_BeaconRandimizationWindowLength = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 15)
    {
        m_A = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 16)
    {
        m_K = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 17)
    {
        m_MinCwAttempts = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 18)
    {
        m_CenelecLegacyMode = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 20)
    {
        m_MaxBe = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 21)
    {
        m_MaxCsmaBackoffs = e.GetValue().bVal;
    }
    else if (e.GetIndex() == 22)
    {
        m_MinBe = e.GetValue().bVal;
    }
    else
    {
        ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return ret;
}