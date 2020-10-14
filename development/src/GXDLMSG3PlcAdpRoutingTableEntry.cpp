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

#include "../include/GXDLMSG3PlcAdpRoutingTableEntry.h"

#include <sstream>


unsigned short CGXDLMSG3PlcAdpRoutingTableEntry::GetDestinationAddress()
{
  return m_DestinationAddress;
}

void CGXDLMSG3PlcAdpRoutingTableEntry::SetDestinationAddress(unsigned short value)
{
  m_DestinationAddress = value;
}

unsigned short CGXDLMSG3PlcAdpRoutingTableEntry::GetNextHopAddress()
{
  return m_NextHopAddress;
}

void CGXDLMSG3PlcAdpRoutingTableEntry::SetNextHopAddress(unsigned short value)
{
  m_NextHopAddress = value;
}

unsigned short CGXDLMSG3PlcAdpRoutingTableEntry::GetRouteCost()
{
  return m_RouteCost;
}

void CGXDLMSG3PlcAdpRoutingTableEntry::SetRouteCost(unsigned short value)
{
  m_RouteCost = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingTableEntry::GetHopCount()
{
  return m_HopCount;
}

void CGXDLMSG3PlcAdpRoutingTableEntry::SetHopCount(unsigned char value)
{
  m_HopCount = value;
}

unsigned char CGXDLMSG3PlcAdpRoutingTableEntry::GetWeakLinkCount()
{
  return m_WeakLinkCount;
}

void CGXDLMSG3PlcAdpRoutingTableEntry::SetWeakLinkCount(unsigned char value)
{
  m_WeakLinkCount = value;
}

unsigned short CGXDLMSG3PlcAdpRoutingTableEntry::GetValidTime()
{
  return m_ValidTime;
}

void CGXDLMSG3PlcAdpRoutingTableEntry::SetValidTime(unsigned short value)
{
  m_ValidTime = value;
}

std::string CGXDLMSG3PlcAdpRoutingTableEntry::ToString()
{
  std::stringstream sb;

  sb << m_DestinationAddress;
  sb << " ";

  sb << m_NextHopAddress;
  sb << " ";

  sb << m_RouteCost;
  sb << " ";

  sb << m_HopCount;
  sb << " ";

  sb << m_WeakLinkCount;
  sb << " ";

  sb << m_ValidTime;
  sb << " ";

  return sb.str();
}