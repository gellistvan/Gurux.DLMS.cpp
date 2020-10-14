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

#ifndef GXDLMSG3PLCADPCONTEXTINFORMATIONTABLEENTRY_H
#define GXDLMSG3PLCADPCONTEXTINFORMATIONTABLEENTRY_H

#include <string>
class CGXDLMSG3PlcAdpContextInformationTableEntry
{
    std::string m_Cid;
    unsigned char m_ContextLength;
    std::string m_Context;
    bool m_C;
    unsigned short m_ValidLifetime;

public:
    std::string GetCid();
    void SetCid(std::string value);

    unsigned char GetContextLength();
    void SetContextLength(unsigned char value);

    std::string GetContext();
    void SetContext(std::string value);

    bool GetC();
    void SetC(bool value);

    unsigned short GetValidLifetime();
    void SetValidLifetime(unsigned short value);

    std::string ToString();
};
#endif //GXDLMSG3PLCADPCONTEXTINFORMATIONTABLEENTRY_H