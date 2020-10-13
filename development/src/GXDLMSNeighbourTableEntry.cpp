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

#include "../include/GXDLMSNeighbourTableElement.h"


void CGXDLMSNeighbourTableElement::SetShortAddress(unsigned short value)
{
    m_ShortAddress = value
}

unsigned short CGXDLMSNeighbourTableElement::GetShortAddress()
{
    return m_ShortAddress;
}

void CGXDLMSNeighbourTableElement::SetPayloadModulationScheme(bool value)
{
    m_PayloadModulationScheme = value
}

bool CGXDLMSNeighbourTableElement::GetPayloadModulationScheme()
{
    return m_PayloadModulationScheme;
}

void CGXDLMSNeighbourTableElement::SetToneMap(std::string value)
{
    m_ToneMap = value
}

std::string CGXDLMSNeighbourTableElement::GetToneMap()
{
    return m_ToneMap;
}

void CGXDLMSNeighbourTableElement::SetModulation(unsigned short value)
{
    m_Modulation = value
}

unsigned short CGXDLMSNeighbourTableElement::GetModulation()
{
    return m_Modulation;
}

void CGXDLMSNeighbourTableElement::SetTxGain(char value)
{
    m_TxGain = value
}

char CGXDLMSNeighbourTableElement::GetTxGain()
{
    return m_TxGain;
}

void CGXDLMSNeighbourTableElement::SetTxRes(unsigned char value)
{
    m_TxRes = value
}

unsigned char CGXDLMSNeighbourTableElement::GetTxRes()
{
    return m_TxRes;
}

void CGXDLMSNeighbourTableElement::SetTxCoeff(std::string value)
{
    m_TxCoeff = value
}

std::string CGXDLMSNeighbourTableElement::GetTxCoeff()
{
    return m_TxCoeff;
}

void CGXDLMSNeighbourTableElement::SetLqi(unsigned char value)
{
    m_Lqi = value
}

unsigned char CGXDLMSNeighbourTableElement::GetLqi()
{
    return m_Lqi;
}

void CGXDLMSNeighbourTableElement::SetPhaseDifferencial(char value)
{
    m_PhaseDifferencial = value
}

char CGXDLMSNeighbourTableElement::GetPhaseDifferencial()
{
    return m_PhaseDifferencial;
}

void CGXDLMSNeighbourTableElement::SetTmrValidTime(unsigned char value)
{
    m_TmrValidTime = value
}

unsigned char CGXDLMSNeighbourTableElement::GetTmrValidTime()
{
    return m_TmrValidTime;
}

void CGXDLMSNeighbourTableElement::SetNeighbourValidTime(unsigned char value)
{
    m_NeighbourValidTime = value
}

unsigned char CGXDLMSNeighbourTableElement::GetNeighbourValidTime()
{
    return m_NeighbourValidTime;
}

std::string CGXDLMSNeighbourTableElement::ToString()
{
    std::stringstream sb;

    sb << m_ShortAddress << " ";
    sb << m_PayloadModulationScheme << " ";
    sb << m_ToneMap << " ";
    sb << m_Modulation << " ";
    sb << m_TxGain << " ";
    sb << m_TxRes << " ";
    sb << m_TxCoeff << " ";
    sb << m_Lqi << " ";
    sb << m_PhaseDifferencial << " ";
    sb << m_TmrValidTime << " ";
    sb << m_NeighbourValidTime;

    return sb.str();
}
