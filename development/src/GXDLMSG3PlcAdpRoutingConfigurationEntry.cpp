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

#include "../include/GXDLMSG3PlcAdpRoutingConfigurationEntry.h"

#include <sstream>

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetNetTraversalTime()
{
  return m_NetTraversalTime;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetNetTraversalTime(unsigned char value)
{
  m_NetTraversalTime = value;
}

unsigned short CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetRoutingTableEntryTtl()
{
  return m_RoutingTableEntryTtl;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetRoutingTableEntryTtl(unsigned short value)
{
  m_RoutingTableEntryTtl = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetKr()
{
  return m_Kr;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetKr(unsigned char value)
{
  m_Kr = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetKm()
{
  return m_Km;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetKm(unsigned char value)
{
  m_Km = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetKc()
{
  return m_Kc;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetKc(unsigned char value)
{
  m_Kc = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetKq()
{
  return m_Kq;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetKq(unsigned char value)
{
  m_Kq = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetKh()
{
  return m_Kh;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetKh(unsigned char value)
{
  m_Kh = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetKrt()
{
  return m_Krt;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetKrt(unsigned char value)
{
  m_Krt = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetRreqRetries()
{
  return m_RreqRetries;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetRreqRetries(unsigned char value)
{
  m_RreqRetries = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetRreqRerrWait()
{
  return m_RreqRerrWait;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetRreqRerrWait(unsigned char value)
{
  m_RreqRerrWait = value;
}

unsigned short CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetBlacklistTableEntryTtl()
{
  return m_BlacklistTableEntryTtl;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetBlacklistTableEntryTtl(unsigned short value)
{
  m_BlacklistTableEntryTtl = value;
}

bool CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetUnicastRreqGenEnable()
{
  return m_UnicastRreqGenEnable;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetUnicastRreqGenEnable(bool value)
{
  m_UnicastRreqGenEnable = value;
}

bool CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetRlcEnabled()
{
  return m_RlcEnabled;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetRlcEnabled(bool value)
{
  m_RlcEnabled = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingConfigurationEntry::GetAddRevLinkCost()
{
  return m_AddRevLinkCost;
}

void CGXDLMSG3PlcAdpRoutingConfigurationEntry::SetAddRevLinkCost(unsigned char value)
{
  m_AddRevLinkCost = value;
}

std::string CGXDLMSG3PlcAdpRoutingConfigurationEntry::ToString()
{
  std::stringstream sb;

  sb << m_NetTraversalTime << " ";
  sb << m_RoutingTableEntryTtl << " ";
  sb << m_Kr << " ";
  sb << m_Km << " ";
  sb << m_Kc << " ";
  sb << m_Kq << " ";
  sb << m_Kh << " ";
  sb << m_Krt << " ";
  sb << m_RreqRetries << " ";
  sb << m_RreqRerrWait << " ";
  sb << m_BlacklistTableEntryTtl << " ";
  sb << m_UnicastRreqGenEnable << " ";
  sb << m_RlcEnabled << " ";
  sb << m_AddRevLinkCost;

  return sb.str();
}