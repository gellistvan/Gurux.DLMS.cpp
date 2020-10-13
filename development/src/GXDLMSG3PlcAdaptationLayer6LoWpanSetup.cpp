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

#include "../include/GXDLMSG3PlcAdaptationLayer6LoWpanSetup.h"

#include <sstream>

//Constructor.
CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::CGXDLMSG3PlcAdaptationLayer6LoWpanSetup() :
        CGXDLMSG3PlcAdaptationLayer6LoWpanSetup("0.0.29.2.0.255", 0)
{
}

//SN Constructor.
CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::CGXDLMSG3PlcAdaptationLayer6LoWpanSetup(std::string ln, unsigned short sn) :
        CGXDLMSObject(DLMS_OBJECT_TYPE_G3_PLC_ADAPTATION_LAYER_6_LOW_PAN_SETUP, ln, sn)
{

}

//LN Constructor.
CGXDLMSG3PlcMacSetup::CGXDLMSG3PlcAdaptationLayer6LoWpanSetup(std::string ln) :
        CGXDLMSG3PlcMacSetup(ln, 0)
{

}

CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::~CGXDLMSG3PlcAdaptationLayer6LoWpanSetup()
{
  ClearVector(m_RoutingTable);
}

// Returns amount of attributes.
int CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetAttributeCount()
{
  return 19;
}

// Returns amount of methods.
int CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetMethodCount()
{
  return 0;
}

//======================== getters & setters ========================

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetMaxHops()
{
  return m_MaxHops;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetMaxHops(unsigned char value)
{
  m_MaxHops = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetWeakLqiValue()
{
  return m_WeakLqiValue;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetWeakLqiValue(unsigned char value)
{
  m_WeakLqiValue = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetSecurityLevel()
{
  return m_SecurityLevel;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetSecurityLevel(unsigned char value)
{
  m_SecurityLevel = value;
}

unsigned short CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetBrdcastLogTableEntryTtl()
{
  return m_BrdcastLogTableEntryTtl;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetBrdcastLogTableEntryTtl(unsigned short value)
{
  m_BrdcastLogTableEntryTtl = value;
}

unsigned short CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetMaxJoinWaitTime()
{
  return m_MaxJoinWaitTime;
}

// vector
// vector

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetMaxJoinWaitTime(unsigned short value)
{
  m_MaxJoinWaitTime = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetPathDiscoveryTime()
{
  return m_PathDiscoveryTime;
}

std::vector<CGXDLMSG3PlcAdpRoutingTableEntry*> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetRoutingTable()
{
  return m_RoutingTable;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetRoutingTable(std::vector<CGXDLMSG3PlcAdpRoutingTableEntry*> value)
{
  ClearVector(m_RoutingTable);
  m_RoutingTable = value;
}

// vector
// vector
// vector
// vector
// vector




void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetPathDiscoveryTime(unsigned char value)
{
  m_PathDiscoveryTime = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetActiveKeyIndex()
{
  return m_ActiveKeyIndex;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetActiveKeyIndex(unsigned char value)
{
  m_ActiveKeyIndex = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetMetricType()
{
  return m_MetricType;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetMetricType(unsigned char value)
{
  m_MetricType = value;
}

unsigned short CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetCoordShortAddress()
{
  return m_CoordShortAddress;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetCoordShortAddress(unsigned short value)
{
  m_CoordShortAddress = value;
}

bool CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetDisableDefaultRouting()
{
  return m_DisableDefaultRouting;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetDisableDefaultRouting(unsigned short value)
{
  m_DisableDefaultRouting = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GeDeviceType()
{
  return mDeviceType;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SeDeviceType(unsigned char value)
{
  m_DeviceType = value;
}

//======================== getters & setters ========================

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetValues(std::vector<std::string>& values)
{
  values.clear();
  std::string ln;
  GetLogicalName(ln);
  values.push_back(ln);
  values.push_back(CGXDLMSVariant(m_MaxHops).ToString());
  values.push_back(CGXDLMSVariant(m_WeakLqiValue).ToString());
  values.push_back(CGXDLMSVariant(m_SecurityLevel).ToString());
  //vecttr
  //vecttr
  values.push_back(CGXDLMSVariant(m_BrdcastLogTableEntryTtl).ToString());
  values.push_back(PrintVector(m_RoutingTable));
  //vector
  //vector
  //vector
  //vector
  //vector
  values.push_back(CGXDLMSVariant(m_MaxJoinWaitTime).ToString());
  values.push_back(CGXDLMSVariant(m_PathDiscoveryTime).ToString());
  values.push_back(CGXDLMSVariant(m_ActiveKeyIndex).ToString());
  values.push_back(CGXDLMSVariant(m_MetricType).ToString());
  values.push_back(CGXDLMSVariant(m_CoordShortAddress).ToString());
  values.push_back(CGXDLMSVariant(m_DisableDefaultRouting).ToString());
  values.push_back(CGXDLMSVariant(m_DeviceType).ToString());

}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetAttributeIndexToRead(bool all, std::vector<int>& attributes)
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
    if (all || CanRead(3))
    {
        attributes.push_back(3);
    }
    if (all || CanRead(4))
    {
        attributes.push_back(4);
    }
    if (all || CanRead(5))
    {
        attributes.push_back(5);
    }
    if (all || CanRead(6))
    {
        attributes.push_back(6);
    }
    if (all || CanRead(7))
    {
        attributes.push_back(7);
    }
    if (all || CanRead(8))
    {
        attributes.push_back(8);
    }
    if (all || CanRead(9))
    {
        attributes.push_back(9);
    }
    if (all || CanRead(10))
    {
        attributes.push_back(10);
    }
    if (all || CanRead(11))
    {
        attributes.push_back(11);
    }
    if (all || CanRead(12))
    {
        attributes.push_back(12);
    }
    if (all || CanRead(13))
    {
        attributes.push_back(13);
    }
    if (all || CanRead(14))
    {
        attributes.push_back(14);
    }
    if (all || CanRead(15))
    {
        attributes.push_back(15);
    }
    if (all || CanRead(16))
    {
        attributes.push_back(16);
    }
    if (all || CanRead(17))
    {
        attributes.push_back(17);
    }
    if (all || CanRead(18))
    {
        attributes.push_back(18);
    }
    if (all || CanRead(19))
    {
        attributes.push_back(20);
    }
}

int CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetDataType(int index, DLMS_DATA_TYPE& type)
{
  DLMS_ERROR_CODE ret = DLMS_ERROR_CODE_OK;
  switch (index) {
    case 1:
      type = DLMS_DATA_TYPE_OCTET_STRING;
      break;
    case 2:
    case 3:
    case 4:
    case 14:
    case 15:
    case 16:
    case 19:
      type = DLMS_DATA_TYPE_UINT8;
      break;
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      type = DLMS_DATA_TYPE_BIT_ARRAY;
      break;
    case 7:
    case 13:
    case 17:
      type = DLMS_DATA_TYPE_UINT16;
      break;
    case 18:
      type = DLMS_DATA_TYPE_BOOLEAN;
      break;
    default:
      ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
  }
  return ret;
}

// Returns value of given attribute.
int CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
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
    e.SetValue(m_MaxHops);
  }
  else if (e.GetIndex() == 3)
  {
    e.SetValue(m_WeakLqiValue);
  }
  else if (e.GetIndex() == 4)
  {
    e.SetValue(m_SecurityLevel);
  }
  else if (e.GetIndex() == 7)
  {
    e.setValue(m_BrdcastLogTableEntryTtl);
  }
  else if (e.GetIndex() == 8)
  {
    CGXDLMSVariant l_RoutingTable;
    l_RoutingTable.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<CGXDLMSG3PlcAdpRoutingTableEntry*>::iterator it = m_RoutingTable.begin(); it != m_RoutingTable.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_STRUCTURE;

      CGXDLMSVariant l_DestinationAddress;
      l_DestinationAddress.vt = DLMS_DATA_TYPE_UINT16;
      l_DestinationAddress.uiVal = it->GetDestinationAddress();
      element.Arr.Push_back(l_DestinationAddress);

      CGXDLMSVariant l_NextHopAddress;
      l_NextHopAddress.vt = DLMS_DATA_TYPE_UINT16;
      l_NextHopAddress.uiVal = it->GetNextHopAddress();
      element.Arr.Push_back(l_NextHopAddress);

      CGXDLMSVariant l_RouteCost;
      l_RouteCost.vt = DLMS_DATA_TYPE_UINT16;
      l_RouteCost.uiVal = it->GetRouteCost();
      element.Arr.Push_back(l_RouteCost);

      CGXDLMSVariant l_HopCount;
      l_HopCount.vt = DLMS_DATA_TYPE_UINT8;
      l_HopCount.bVal = it->GetHopCount();
      element.Arr.Push_back(l_HopCount);

      CGXDLMSVariant l_WeakLinkCount;
      l_WeakLinkCount.vt = DLMS_DATA_TYPE_UINT8;
      l_WeakLinkCount.bVal = it->GetWeakLinkCount();
      element.Arr.Push_back(l_WeakLinkCount);

      CGXDLMSVariant l_ValidTime;
      l_ValidTime.vt = DLMS_DATA_TYPE_UINT16;
      l_ValidTime.uiVal = it->GetValidTime();
      element.Arr.Push_back(l_ValidTime);

      l_RoutingTable.Arr.push_back(element);
    }

    e.setValue(l_RoutingTable);
  }
  else if (e.GetIndex() == 9)
  {
  }
  else if (e.GetIndex() == 10)
  {
  }
  else if (e.GetIndex() == 11)
  {
  }
  else if (e.GetIndex() == 12)
  {
  }
  else if (e.GetIndex() == 13)
  {
    e.setValue(m_MaxJoinWaitTime);
  }
  else if (e.GetIndex() == 14)
  {
    e.setValue(m_PathDiscoveryTime);
  }
  else if (e.GetIndex() == 15)
  {
    e.setValue(m_ActiveKeyIndex);
  }
  else if (e.GetIndex() == 16)
  {
    e.setValue(m_MetricType);
  }
  else if (e.GetIndex() == 17)
  {
    e.setValue(m_CoordShortAddress);
  }
  else if (e.GetIndex() == 18)
  {
    e.SetValue(m_DisableDefaultRouting)
  }
  else if (e.GetIndex() == 19)
  {
    e.SetValue(m_DeviceType);
  }
  else
  {
    ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
  }
  return ret;
}

// Set value of given attribute.
int CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
  DLMS_ERROR_CODE ret = DLMS_ERROR_CODE_OK;
  if (e.GetIndex() == 1)
  {
    return SetLogicalName(this, e.GetValue());
  }
  else if (e.GetIndex() == 2)
  {
    m_ShortAddress = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 3)
  {
    m_RcCoord = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 4)
  {
    m_PanId = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 7)
  {
    m_BrdcastLogTableEntryTtl = e.GetValue().uiVal;
  }
  else if (e.GetIndex() == 8)
  {
    ClearVector(m_RoutingTable);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().begin(); it != e.GetValue().end(); ++it)
    {
      CGXDLMSG3PlcAdpRoutingTableEntry *entry = new CGXDLMSG3PlcAdpRoutingTableEntry;

      entry->SetDestinationAddress(it->uiVal);
      entry->SetNextHopAddress(it->uiVal);
      entry->SetRouteCost(it->uiVal);
      entry->SetHopCount(it->bVal);
      entry->SetWeakLinkCount(it->bVal);
      entry->SetValidTime(it->uiVal);

      m_RoutingTable.push_back(entry);
    }
  }
  else if (e.GetIndex() == 9)
  {
  }
  else if (e.GetIndex() == 10)
  {
  }
  else if (e.GetIndex() == 11)
  {
  }
  else if (e.GetIndex() == 12)
  {
  }
  else if (e.GetIndex() == 13)
  {
    m_MaxJoinWaitTime = e.GetValue().uiVal;
  }
  else if (e.GetIndex() == 14)
  {
    m_PathDiscoveryTime = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 15)
  {
    m_ActiveKeyIndex = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 16)
  {
    m_MetricType = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 17)
  {
    m_CoordShortAddress = e.GetValue().uiVal;
  }
  else if (e.GetIndex() == 18)
  {
    m_DisableDefaultRouting = e.GetValue().boolVal;
  }
  else if (e.GetIndex() == 19)
  {
    m_DeviceType = e.GetValue().bVal;
  }
  else
  {
    ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
  }
  return ret;
}