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

#include <string>

#ifndef GXDLMSG3PLCADPROUTINGCONFIGURATIONENTRY_H
#define GXDLMSG3PLCADPROUTINGCONFIGURATIONENTRY_H

class CGXDLMSG3PlcAdpRoutingConfigurationEntry
{
  unsigned char m_NetTraversalTime;
  unsigned short m_RoutingTableEntryTtl;
  unsigned char m_Kr;
  unsigned char m_Km;
  unsigned char m_Kc;
  unsigned char m_Kq;
  unsigned char m_Kh;
  unsigned char m_Krt;
  unsigned char m_RreqRetries;
  unsigned char m_RreqRerrWait;
  unsigned short m_BlacklistTableEntryTtl;
  bool m_UnicastRreqGenEnable;
  bool m_RlcEnabled;
  unsigned char m_AddRevLinkCost;

public:
  unsigned char GetNetTraversalTime();
  void SetNetTraversalTime(unsigned char value);

  unsigned short GetRoutingTableEntryTtl();
  void SetRoutingTableEntryTtl(unsigned short value);

  unsigned char GetKr();
  void SetKr(unsigned char value);

  unsigned char GetKm();
  void SetKm(unsigned char value);

  unsigned char GetKc();
  void SetKc(unsigned char value);

  unsigned char GetKq();
  void SetKq(unsigned char value);

  unsigned char GetKh();
  void SetKh(unsigned char value);

  unsigned char GetKrt();
  void SetKrt(unsigned char value);

  unsigned char GetRreqRetries();
  void SetRreqRetries(unsigned char value);

  unsigned char GetRreqRerrWait();
  void SetRreqRerrWait(unsigned char value);

  unsigned short GetBlacklistTableEntryTtl();
  void SetBlacklistTableEntryTtl(unsigned short value);

  bool GetUnicastRreqGenEnable();
  void SetUnicastRreqGenEnable(bool value);

  bool GetRlcEnabled();
  void SetRlcEnabled(bool value);

  unsigned char GetAddRevLinkCost();
  void SetAddRevLinkCost(unsigned char value);

  std::string ToString();
};
#endif //GXDLMSG3PLCADPROUTINGCONFIGURATIONENTRY_H
