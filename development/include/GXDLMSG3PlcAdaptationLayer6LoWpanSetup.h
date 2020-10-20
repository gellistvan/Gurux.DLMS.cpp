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

#ifndef GXDLMSG3PLCADAPTATIONLAYER6LOWPANSETUP_H
#define GXDLMSG3PLCADAPTATIONLAYER6LOWPANSETUP_H

#include "GXDLMSObject.h"

#include "GXDLMSG3PlcAdpRoutingTableEntry.h"
#include "GXDLMSG3PlcAdpContextInformationTableEntry.h"
#include "GXDLMSG3PlcAdpBlacklistTableEntry.h"
#include "GXDLMSG3PlcAdpBroadcastLogTableEntry.h"
#include "GXDLMSG3PlcAdpGroupTableEntry.h"
#include "GXDLMSG3PlcAdpRoutingConfigurationEntry.h"


#include <vector>
#include <string>
#include <sstream>

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSPrimeNbOfdmPlcMacSetup
*/

class CGXDLMSG3PlcAdaptationLayer6LoWpanSetup : public CGXDLMSObject
{

  unsigned char m_MaxHops;
  unsigned char m_WeakLqiValue;
  unsigned char m_SecurityLevel;
  std::vector<std::string> m_PrefixTable;
  std::vector<CGXDLMSG3PlcAdpRoutingConfigurationEntry*> m_RoutingConfiguration;
  unsigned short m_BrdcastLogTableEntryTtl;
  std::vector<CGXDLMSG3PlcAdpRoutingTableEntry*> m_RoutingTable;
  std::vector<CGXDLMSG3PlcAdpContextInformationTableEntry*> m_ContextInformationTable;
  std::vector<CGXDLMSG3PlcAdpBlacklistTableEntry*> m_BlacklistTable;
  std::vector<CGXDLMSG3PlcAdpBroadcastLogTableEntry*> m_BroadcastLogTable;
  std::vector<CGXDLMSG3PlcAdpGroupTableEntry*> m_GroupTable;
  unsigned char m_MaxJoinWaitTime;
  unsigned char m_PathDiscoveryTime;
  unsigned char m_ActiveKeyIndex;
  unsigned char m_MetricType;
  unsigned short m_CoordShortAddress;
  bool m_DisableDefaultRouting;
  unsigned char m_DeviceType;

public:

  unsigned char GetMaxHops();
  void SetMaxHops(unsigned char value);

  unsigned char GetWeakLqiValue();
  void SetWeakLqiValue(unsigned char value);

  unsigned char GetSecurityLevel();
  void SetSecurityLevel(unsigned char value);

  std::vector<std::string> GetPrefixTable();
  void SetPrefixTable(const std::vector<std::string>& value);

  std::vector<CGXDLMSG3PlcAdpRoutingConfigurationEntry*> GetRoutingConfiguration();
  void SetRoutingConfiguration(std::vector<CGXDLMSG3PlcAdpRoutingConfigurationEntry*> value);

  unsigned short GetBrdcastLogTableEntryTtl();
  void SetBrdcastLogTableEntryTtl(unsigned short value);

  std::vector<CGXDLMSG3PlcAdpRoutingTableEntry*> GetRoutingTable();
  void SetRoutingTable(std::vector<CGXDLMSG3PlcAdpRoutingTableEntry*> value);

  std::vector<CGXDLMSG3PlcAdpContextInformationTableEntry*> GetContextInformationTable();
  void SetContextInformationTable(std::vector<CGXDLMSG3PlcAdpContextInformationTableEntry*> value);

  std::vector<CGXDLMSG3PlcAdpBlacklistTableEntry*> GetBlacklistTable();
  void SetBlacklistTable(std::vector<CGXDLMSG3PlcAdpBlacklistTableEntry*> value);

  std::vector<CGXDLMSG3PlcAdpBroadcastLogTableEntry*> GetBroadcastLogTable();
  void SetBroadcastLogTable(std::vector<CGXDLMSG3PlcAdpBroadcastLogTableEntry*> value);

  std::vector<CGXDLMSG3PlcAdpGroupTableEntry*> GetGroupTable();
  void SetGroupTable(std::vector<CGXDLMSG3PlcAdpGroupTableEntry*> value);

  unsigned char GetMaxJoinWaitTime();
  void SetMaxJoinWaitTime(unsigned char value);

  unsigned char GetPathDiscoveryTime();
  void SetPathDiscoveryTime(unsigned char value);

  unsigned char GetActiveKeyIndex();
  void SetActiveKeyIndex(unsigned char value);

  unsigned char GetMetricType();
  void SetMetricType(unsigned char value);

  unsigned short GetCoordShortAddress();
  void SetCoordShortAddress(unsigned short value);

  bool GetDisableDefaultRouting();
  void SetDisableDefaultRouting(bool value);

  unsigned char GetDeviceType();
  void SetDeviceType(unsigned char value);


  //Constructor.
  CGXDLMSG3PlcAdaptationLayer6LoWpanSetup();

  //SN Constructor.
  CGXDLMSG3PlcAdaptationLayer6LoWpanSetup(std::string ln, unsigned short sn);

  //LN Constructor.
  CGXDLMSG3PlcAdaptationLayer6LoWpanSetup(std::string ln);

  virtual ~CGXDLMSG3PlcAdaptationLayer6LoWpanSetup();

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

private:
  template <typename ObjectType>
  void ClearVector(std::vector<ObjectType*>& p_vector)
  {
    for(typename std::vector<ObjectType*>::iterator it = p_vector.begin(); it != p_vector.end(); ++it)
    {
      delete (*it);
    }

    p_vector.clear();
  }

  template <typename ObjectType>
  std::string PrintVector(std::vector<ObjectType*> p_vector)
  {
    std::stringstream sb;
    sb << '[';
    bool empty = true;
    for (typename std::vector<ObjectType*>::iterator it = p_vector.begin(); it != p_vector.end(); ++it)
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

    return sb.str();
  }

  std::string PrintVector(const std::vector<std::string>& p_vector)
  {
    std::stringstream sb;
    sb << '[';
    bool empty = true;
    for (std::vector<std::string>::const_iterator it = p_vector.cbegin(); it != p_vector.cend(); ++it)
    {
      if (!empty)
      {
        sb << ", ";
      }
      empty = false;
      sb << (*it);
    }
    sb << ']';

    return sb.str();
  }
};
#endif //GXDLMSG3PLCADAPTATIONLAYER6LOWPANSETUP_H
