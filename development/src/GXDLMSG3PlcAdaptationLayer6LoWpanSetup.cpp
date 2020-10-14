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
CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::CGXDLMSG3PlcAdaptationLayer6LoWpanSetup(std::string ln) :
        CGXDLMSG3PlcAdaptationLayer6LoWpanSetup(ln, 0)
{
}

CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::~CGXDLMSG3PlcAdaptationLayer6LoWpanSetup()
{
  ClearVector(m_RoutingConfiguration);
  ClearVector(m_RoutingTable);
  ClearVector(m_ContextInformationTable);
  ClearVector(m_BlacklistTable);
  ClearVector(m_BroadcastLogTable);
  ClearVector(m_GroupTable);
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

std::vector<CGXDLMSG3PlcAdpRoutingConfigurationEntry*> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetRoutingConfiguration()
{
  return m_RoutingConfiguration;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetRoutingConfiguration(std::vector<CGXDLMSG3PlcAdpRoutingConfigurationEntry*> value)
{
  ClearVector(m_RoutingConfiguration);
  m_RoutingConfiguration = value;
}

std::vector<std::string> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetPrefixTable()
{
  return m_PrefixTable;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetPrefixTable(const std::vector<std::string>& value)
{
  m_PrefixTable.clear();
  m_PrefixTable = value;
}

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

std::vector<CGXDLMSG3PlcAdpContextInformationTableEntry*> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetContextInformationTable()
{
  return m_ContextInformationTable;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetContextInformationTable(std::vector<CGXDLMSG3PlcAdpContextInformationTableEntry*> value)
{
  ClearVector(m_ContextInformationTable);
  m_ContextInformationTable = value;
}

std::vector<CGXDLMSG3PlcAdpBlacklistTableEntry*> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetBlacklistTable()
{
  return m_BlacklistTable;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetBlacklistTable(std::vector<CGXDLMSG3PlcAdpBlacklistTableEntry*> value)
{
  ClearVector(m_BlacklistTable);
  m_BlacklistTable = value;
}

std::vector<CGXDLMSG3PlcAdpBroadcastLogTableEntry*> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetBroadcastLogTable()
{
  return m_BroadcastLogTable;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetBroadcastLogTable(std::vector<CGXDLMSG3PlcAdpBroadcastLogTableEntry*> value)
{
  ClearVector(m_BroadcastLogTable);
  m_BroadcastLogTable = value;
}

std::vector<CGXDLMSG3PlcAdpGroupTableEntry*> CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetGroupTable()
{
  return m_GroupTable;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetGroupTable(std::vector<CGXDLMSG3PlcAdpGroupTableEntry*> value)
{
  ClearVector(m_GroupTable);
  m_GroupTable = value;
}

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

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetDisableDefaultRouting(bool value)
{
  m_DisableDefaultRouting = value;
}

unsigned char CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::GetDeviceType()
{
  return m_DeviceType;
}

void CGXDLMSG3PlcAdaptationLayer6LoWpanSetup::SetDeviceType(unsigned char value)
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
  values.push_back(PrintVector(m_PrefixTable));
  values.push_back(PrintVector(m_RoutingConfiguration));
  values.push_back(CGXDLMSVariant(m_BrdcastLogTableEntryTtl).ToString());
  values.push_back(PrintVector(m_RoutingTable));
  values.push_back(PrintVector(m_ContextInformationTable));
  values.push_back(PrintVector(m_BlacklistTable));
  values.push_back(PrintVector(m_BroadcastLogTable));
  values.push_back(PrintVector(m_GroupTable));
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
        attributes.push_back(19);
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
      type = DLMS_DATA_TYPE_ARRAY;
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
  else if (e.GetIndex() == 5)
  {
    CGXDLMSVariant l_PrefixTable;
    l_PrefixTable.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<std::string>::iterator it = m_PrefixTable.begin(); it != m_PrefixTable.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_OCTET_STRING;
      element.strVal = (*it);

      l_PrefixTable.Arr.push_back(element);
    }

    e.SetValue((l_PrefixTable));
  }
  else if (e.GetIndex() == 6)
  {
    CGXDLMSVariant l_RoutingConfiguration;
    l_RoutingConfiguration.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<CGXDLMSG3PlcAdpRoutingConfigurationEntry*>::iterator it = m_RoutingConfiguration.begin(); it != m_RoutingConfiguration.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_STRUCTURE;

      CGXDLMSVariant l_NetTraversalTime;
      l_NetTraversalTime.vt = DLMS_DATA_TYPE_UINT8;
      l_NetTraversalTime.bVal = (*it)->GetNetTraversalTime();
      element.Arr.push_back(l_NetTraversalTime);

      CGXDLMSVariant l_RoutingTableEntryTtl;
      l_RoutingTableEntryTtl.vt = DLMS_DATA_TYPE_UINT16;
      l_RoutingTableEntryTtl.uiVal = (*it)->GetRoutingTableEntryTtl();
      element.Arr.push_back(l_RoutingTableEntryTtl);

      CGXDLMSVariant l_Kr;
      l_Kr.vt = DLMS_DATA_TYPE_UINT8;
      l_Kr.bVal = (*it)->GetKr();
      element.Arr.push_back(l_Kr);

      CGXDLMSVariant l_Km;
      l_Km.vt = DLMS_DATA_TYPE_UINT8;
      l_Km.bVal = (*it)->GetKm();
      element.Arr.push_back(l_Km);

      CGXDLMSVariant l_Kc;
      l_Kc.vt = DLMS_DATA_TYPE_UINT8;
      l_Kc.bVal = (*it)->GetKc();
      element.Arr.push_back(l_Kc);

      CGXDLMSVariant l_Kq;
      l_Kq.vt = DLMS_DATA_TYPE_UINT8;
      l_Kq.bVal = (*it)->GetKq();
      element.Arr.push_back(l_Kq);

      CGXDLMSVariant l_Kh;
      l_Kh.vt = DLMS_DATA_TYPE_UINT8;
      l_Kh.bVal = (*it)->GetKh();
      element.Arr.push_back(l_Kh);

      CGXDLMSVariant l_Krt;
      l_Krt.vt = DLMS_DATA_TYPE_UINT8;
      l_Krt.bVal = (*it)->GetKrt();
      element.Arr.push_back(l_Krt);

      CGXDLMSVariant l_RreqRetries;
      l_RreqRetries.vt = DLMS_DATA_TYPE_UINT8;
      l_RreqRetries.bVal = (*it)->GetRreqRetries();
      element.Arr.push_back(l_RreqRetries);

      CGXDLMSVariant l_RreqRerrWait;
      l_RreqRerrWait.vt = DLMS_DATA_TYPE_UINT8;
      l_RreqRerrWait.bVal = (*it)->GetRreqRerrWait();
      element.Arr.push_back(l_RreqRerrWait);

      CGXDLMSVariant l_BlacklistTableEntryTtl;
      l_BlacklistTableEntryTtl.vt = DLMS_DATA_TYPE_UINT16;
      l_BlacklistTableEntryTtl.uiVal = (*it)->GetBlacklistTableEntryTtl();
      element.Arr.push_back(l_BlacklistTableEntryTtl);

      CGXDLMSVariant l_UnicastRreqGenEnable;
      l_UnicastRreqGenEnable.vt = DLMS_DATA_TYPE_BOOLEAN;
      l_UnicastRreqGenEnable.boolVal = (*it)->GetUnicastRreqGenEnable();
      element.Arr.push_back(l_UnicastRreqGenEnable);

      CGXDLMSVariant l_RlcEnabled;
      l_RlcEnabled.vt = DLMS_DATA_TYPE_BOOLEAN;
      l_RlcEnabled.boolVal = (*it)->GetRlcEnabled();
      element.Arr.push_back(l_RlcEnabled);

      CGXDLMSVariant l_AddRevLinkCost;
      l_AddRevLinkCost.vt = DLMS_DATA_TYPE_UINT8;
      l_AddRevLinkCost.bVal = (*it)->GetAddRevLinkCost();
      element.Arr.push_back(l_AddRevLinkCost);

      l_RoutingConfiguration.Arr.push_back(element);
    }

    e.SetValue(l_RoutingConfiguration);
  }
  else if (e.GetIndex() == 7)
  {
    e.SetValue(m_BrdcastLogTableEntryTtl);
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
      l_DestinationAddress.uiVal = (*it)->GetDestinationAddress();
      element.Arr.push_back(l_DestinationAddress);

      CGXDLMSVariant l_NextHopAddress;
      l_NextHopAddress.vt = DLMS_DATA_TYPE_UINT16;
      l_NextHopAddress.uiVal = (*it)->GetNextHopAddress();
      element.Arr.push_back(l_NextHopAddress);

      CGXDLMSVariant l_RouteCost;
      l_RouteCost.vt = DLMS_DATA_TYPE_UINT16;
      l_RouteCost.uiVal = (*it)->GetRouteCost();
      element.Arr.push_back(l_RouteCost);

      CGXDLMSVariant l_HopCount;
      l_HopCount.vt = DLMS_DATA_TYPE_UINT8;
      l_HopCount.bVal = (*it)->GetHopCount();
      element.Arr.push_back(l_HopCount);

      CGXDLMSVariant l_WeakLinkCount;
      l_WeakLinkCount.vt = DLMS_DATA_TYPE_UINT8;
      l_WeakLinkCount.bVal = (*it)->GetWeakLinkCount();
      element.Arr.push_back(l_WeakLinkCount);

      CGXDLMSVariant l_ValidTime;
      l_ValidTime.vt = DLMS_DATA_TYPE_UINT16;
      l_ValidTime.uiVal = (*it)->GetValidTime();
      element.Arr.push_back(l_ValidTime);

      l_RoutingTable.Arr.push_back(element);
    }

    e.SetValue(l_RoutingTable);
  }
  else if (e.GetIndex() == 9)
  {
    CGXDLMSVariant l_ContextInformationTable;
    l_ContextInformationTable.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<CGXDLMSG3PlcAdpContextInformationTableEntry*>::iterator it = m_ContextInformationTable.begin(); it != m_ContextInformationTable.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_STRUCTURE;

      CGXDLMSVariant l_Cid;
      l_Cid.vt = DLMS_DATA_TYPE_BIT_STRING;
      l_Cid.strVal = (*it)->GetCid();
      element.Arr.push_back(l_Cid);

      CGXDLMSVariant l_ContextLength;
      l_ContextLength.vt = DLMS_DATA_TYPE_UINT8;
      l_ContextLength.bVal = (*it)->GetContextLength();
      element.Arr.push_back(l_ContextLength);

      CGXDLMSVariant l_Context;
      l_Context.vt = DLMS_DATA_TYPE_OCTET_STRING;
      l_Context.strVal = (*it)->GetContext();
      element.Arr.push_back(l_Context);

      CGXDLMSVariant l_C;
      l_C.vt = DLMS_DATA_TYPE_BOOLEAN;
      l_C.boolVal = (*it)->GetC();
      element.Arr.push_back(l_C);

      CGXDLMSVariant l_ValidLifetime;
      l_ValidLifetime.vt = DLMS_DATA_TYPE_UINT16;
      l_ValidLifetime.uiVal = (*it)->GetValidLifetime();
      element.Arr.push_back(l_ValidLifetime);

      l_ContextInformationTable.Arr.push_back(element);
    }

    e.SetValue(l_ContextInformationTable);
  }
  else if (e.GetIndex() == 10)
  {
    CGXDLMSVariant l_BlacklistTable;
    l_BlacklistTable.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<CGXDLMSG3PlcAdpBlacklistTableEntry*>::iterator it = m_BlacklistTable.begin(); it != m_BlacklistTable.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_STRUCTURE;

      CGXDLMSVariant l_BlacklistedNeighbourAddress;
      l_BlacklistedNeighbourAddress.vt = DLMS_DATA_TYPE_UINT16;
      l_BlacklistedNeighbourAddress.uiVal = (*it)->GetBlacklistedNeighbourAddress();
      element.Arr.push_back(l_BlacklistedNeighbourAddress);

      CGXDLMSVariant l_ValidTime;
      l_ValidTime.vt = DLMS_DATA_TYPE_UINT16;
      l_ValidTime.uiVal = (*it)->GetValidTime();
      element.Arr.push_back(l_ValidTime);

      l_BlacklistTable.Arr.push_back(element);
    }

    e.SetValue(l_BlacklistTable);
  }
  else if (e.GetIndex() == 11)
  {
    CGXDLMSVariant l_BroadcastLogTable;
    l_BroadcastLogTable.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<CGXDLMSG3PlcAdpBroadcastLogTableEntry*>::iterator it = m_BroadcastLogTable.begin(); it != m_BroadcastLogTable.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_STRUCTURE;

      CGXDLMSVariant l_SourceAddress;
      l_SourceAddress.vt = DLMS_DATA_TYPE_UINT16;
      l_SourceAddress.uiVal = (*it)->GetSourceAddress();
      element.Arr.push_back(l_SourceAddress);

      CGXDLMSVariant l_SequenceNumber;
      l_SequenceNumber.vt = DLMS_DATA_TYPE_UINT8;
      l_SequenceNumber.bVal = (*it)->GetSequenceNumber();
      element.Arr.push_back(l_SequenceNumber);

      CGXDLMSVariant l_TimeToLive;
      l_TimeToLive.vt = DLMS_DATA_TYPE_UINT16;
      l_TimeToLive.uiVal = (*it)->GetTimeToLive();
      element.Arr.push_back(l_TimeToLive);

      l_BroadcastLogTable.Arr.push_back(element);
    }

    e.SetValue(l_BroadcastLogTable);
  }
  else if (e.GetIndex() == 12)
  {
    CGXDLMSVariant l_GroupTable;
    l_GroupTable.vt = DLMS_DATA_TYPE_ARRAY;

    for(std::vector<CGXDLMSG3PlcAdpGroupTableEntry*>::iterator it = m_GroupTable.begin(); it != m_GroupTable.end(); ++it)
    {
      CGXDLMSVariant element;
      element.vt = DLMS_DATA_TYPE_STRUCTURE;

      CGXDLMSVariant l_GroupAddress;
      l_GroupAddress.vt = DLMS_DATA_TYPE_UINT16;
      l_GroupAddress.uiVal = (*it)->GetGroupAddress();
      element.Arr.push_back(l_GroupAddress);

      l_GroupTable.Arr.push_back(element);
    }

    e.SetValue(l_GroupTable);
  }
  else if (e.GetIndex() == 13)
  {
    e.SetValue(m_MaxJoinWaitTime);
  }
  else if (e.GetIndex() == 14)
  {
    e.SetValue(m_PathDiscoveryTime);
  }
  else if (e.GetIndex() == 15)
  {
    e.SetValue(m_ActiveKeyIndex);
  }
  else if (e.GetIndex() == 16)
  {
    e.SetValue(m_MetricType);
  }
  else if (e.GetIndex() == 17)
  {
    e.SetValue(m_CoordShortAddress);
  }
  else if (e.GetIndex() == 18)
  {
    e.SetValue(m_DisableDefaultRouting);
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
    m_MaxHops = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 3)
  {
    m_WeakLqiValue = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 4)
  {
    m_SecurityLevel = e.GetValue().bVal;
  }
  else if (e.GetIndex() == 5)
  {
    m_PrefixTable.clear();
    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      m_PrefixTable.push_back(it->strVal);
    }
  }
  else if (e.GetIndex() == 6)
  {
    ClearVector(m_RoutingConfiguration);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      CGXDLMSG3PlcAdpRoutingConfigurationEntry* entry = new CGXDLMSG3PlcAdpRoutingConfigurationEntry;

      entry->SetNetTraversalTime(it->Arr[0].bVal);
      entry->SetRoutingTableEntryTtl(it->Arr[1].uiVal);
      entry->SetKr(it->Arr[2].bVal);
      entry->SetKm(it->Arr[3].bVal);
      entry->SetKc(it->Arr[4].bVal);
      entry->SetKq(it->Arr[5].bVal);
      entry->SetKh(it->Arr[6].bVal);
      entry->SetKrt(it->Arr[7].bVal);
      entry->SetRreqRetries(it->Arr[8].bVal);
      entry->SetRreqRerrWait(it->Arr[9].bVal);
      entry->SetBlacklistTableEntryTtl(it->Arr[10].uiVal);
      entry->SetUnicastRreqGenEnable(it->Arr[11].boolVal);
      entry->SetRlcEnabled(it->Arr[12].boolVal);
      entry->SetAddRevLinkCost(it->Arr[13].bVal);

      m_RoutingConfiguration.push_back(entry);
    }
  }
  else if (e.GetIndex() == 7)
  {
    m_BrdcastLogTableEntryTtl = e.GetValue().uiVal;
  }
  else if (e.GetIndex() == 8)
  {
    ClearVector(m_RoutingTable);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      CGXDLMSG3PlcAdpRoutingTableEntry *entry = new CGXDLMSG3PlcAdpRoutingTableEntry;
      entry->SetDestinationAddress(it->Arr[0].uiVal);
      entry->SetNextHopAddress(it->Arr[1].uiVal);
      entry->SetRouteCost(it->Arr[2].uiVal);
      entry->SetHopCount(it->Arr[3].bVal);
      entry->SetWeakLinkCount(it->Arr[4].bVal);
      entry->SetValidTime(it->Arr[5].uiVal);
      m_RoutingTable.push_back(entry);
    }
  }
  else if (e.GetIndex() == 9)
  {
    ClearVector(m_ContextInformationTable);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      CGXDLMSG3PlcAdpContextInformationTableEntry* entry = new CGXDLMSG3PlcAdpContextInformationTableEntry;

      entry->SetCid(it->Arr[0].strVal);
      entry->SetContextLength(it->Arr[1].bVal);
      entry->SetContext(it->Arr[2].strVal);
      entry->SetC(it->Arr[3].boolVal);
      entry->SetValidLifetime(it->Arr[4].uiVal);

      m_ContextInformationTable.push_back(entry);
    }
  }
  else if (e.GetIndex() == 10)
  {
    ClearVector(m_BlacklistTable);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      CGXDLMSG3PlcAdpBlacklistTableEntry*entry = new CGXDLMSG3PlcAdpBlacklistTableEntry;
      entry->SetBlacklistedNeighbourAddress(it->Arr[0].uiVal);
      entry->SetValidTime(it->Arr[1].uiVal);

      m_BlacklistTable.push_back(entry);
    }
  }
  else if (e.GetIndex() == 11)
  {
    ClearVector(m_BroadcastLogTable);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      CGXDLMSG3PlcAdpBroadcastLogTableEntry* entry = new CGXDLMSG3PlcAdpBroadcastLogTableEntry;
      entry->SetSourceAddress(it->Arr[0].uiVal);
      entry->SetSequenceNumber(it->Arr[1].bVal);
      entry->SetTimeToLive(it->Arr[2].uiVal);

      m_BroadcastLogTable.push_back(entry);
    }
  }
  else if (e.GetIndex() == 12)
  {

    ClearVector(m_GroupTable);

    for (std::vector<CGXDLMSVariant>::iterator it = e.GetValue().Arr.begin(); it != e.GetValue().Arr.end(); ++it)
    {
      CGXDLMSG3PlcAdpGroupTableEntry* entry = new CGXDLMSG3PlcAdpGroupTableEntry;
      entry->SetGroupAddress(it->Arr[0].uiVal);

      m_GroupTable.push_back(entry);
    }
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