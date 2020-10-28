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

#ifndef GXDLMSG3PLCADPROUTINGTABLEENTRY_H
#define GXDLMSG3PLCADPROUTINGTABLEENTRY_H

#include <string>

class CGXDLMSG3PlcAdpRoutingTableEntry
{
  unsigned short m_DestinationAddress;
  unsigned short m_NextHopAddress;
  unsigned short m_RouteCost;
  unsigned char m_HopCount;
  unsigned char m_WeakLinkCount;
  unsigned short m_ValidTime;

public:
  unsigned short GetDestinationAddress();
  void SetDestinationAddress(unsigned short value);

  unsigned short GetNextHopAddress();
  void SetNextHopAddress(unsigned short value);

  unsigned short GetRouteCost();
  void SetRouteCost(unsigned short value);

  unsigned char GetHopCount();
  void SetHopCount(unsigned char value);

  unsigned char GetWeakLinkCount();
  void SetWeakLinkCount(unsigned char value);

  unsigned short GetValidTime();
  void SetValidTime(unsigned short value);

  std::string ToString();
};
#endif //GXDLMSG3PLCADPROUTINGTABLEENTRY_H
