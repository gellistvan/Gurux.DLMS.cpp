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

#include "../include/GXDLMSG3PlcAdpContextInformationTableEntry.h"

#include <sstream>


std::string CGXDLMSG3PlcAdpContextInformationTableEntry::GetCid()
{
    return m_Cid;
}

void CGXDLMSG3PlcAdpContextInformationTableEntry::SetCid(std::string value)
{
  m_Cid = value;
}

unsigned char CGXDLMSG3PlcAdpContextInformationTableEntry::GetContextLength()
{
    return m_ContextLength;
}

void CGXDLMSG3PlcAdpContextInformationTableEntry::SetContextLength(unsigned char value)
{
  m_ContextLength = value;
}

std::string CGXDLMSG3PlcAdpContextInformationTableEntry::GetContext()
{
    return m_Context;
}

void CGXDLMSG3PlcAdpContextInformationTableEntry::SetContext(std::string value)
{
  m_Context = value;
}

bool CGXDLMSG3PlcAdpContextInformationTableEntry::GetC()
{
    return m_C;
}

void CGXDLMSG3PlcAdpContextInformationTableEntry::SetC(bool value)
{
  m_C = value;
}

unsigned short CGXDLMSG3PlcAdpContextInformationTableEntry::GetValidLifetime()
{
    return m_ValidLifetime;
}

void CGXDLMSG3PlcAdpContextInformationTableEntry::SetValidLifetime(unsigned short value)
{
  m_ValidLifetime = value;
}

std::string CGXDLMSG3PlcAdpContextInformationTableEntry::ToString()
{
  std::stringstream sb;

  sb << m_Cid << " ";
  sb << m_ContextLength << " ";
  sb << m_Context << " ";
  sb << m_C << " ";
  sb << m_ValidLifetime;

  return sb.str();
}