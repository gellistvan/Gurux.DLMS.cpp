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

#ifndef GXDLMSNEIGHBOURTABLEELEMENT_H
#define GXDLMSNEIGHBOURTABLEELEMENT_H

#include <string>

class CGXDLMSNeighbourTableElement
{
    unsigned short m_ShortAddress;
    bool m_PayloadModulationScheme;
    std::string m_ToneMap;
    unsigned short m_Modulation;
    char m_TxGain;
    unsigned char m_TxRes;
    std::string m_TxCoeff;
    unsigned char m_Lqi;
    char m_PhaseDifferencial;
    unsigned char m_TmrValidTime;
    unsigned char m_NeighbourValidTime;

public:
    void SetShortAddress(unsigned short value);
    unsigned short GetShortAddress();

    void SetPayloadModulationScheme(bool value);
    bool GetPayloadModulationScheme();

    void SetToneMap(std::string value);
    std::string GetToneMap();

    void SetModulation(unsigned short value);
    unsigned short GetModulation();

    void SetTxGain(char value);
    char GetTxGain();

    void SetTxRes(unsigned char value);
    unsigned char GetTxRes();

    void SetTxCoeff(std::string value);
    std::string GetTxCoeff();

    void SetLqi(unsigned char value);
    unsigned char GetLqi();

    void SetPhaseDifferencial(char value);
    char GetPhaseDifferencial();

    void SetTmrValidTime(unsigned char value);
    unsigned char GetTmrValidTime();

    void SetNeighbourValidTime(unsigned char value);
    unsigned char GetNeighbourValidTime();

    std::string ToString();
};
#endif // GXDLMSNEIGHBOURTABLEELEMENT_H
