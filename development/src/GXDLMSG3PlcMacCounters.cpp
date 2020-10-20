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

#include "../include/GXDLMSG3PlcMacCounters.h"
#include "../include/GXDLMSClient.h"

//Constructor.
CGXDLMSG3PlcMacCounters::CGXDLMSG3PlcMacCounters() :
    CGXDLMSG3PlcMacCounters("0.0.29.0.0.255", 0)
{
}

//SN Constructor.
CGXDLMSG3PlcMacCounters::CGXDLMSG3PlcMacCounters(std::string ln, unsigned short sn) :
    CGXDLMSObject(DLMS_OBJECT_TYPE_G3_PLC_MAC_COUNTERS, ln, sn)
{
    m_TxDataPktCount = m_RxDataPktCount = m_TxCtrlPktCount = m_RxCtrlPktCount = m_CsmaFailCount = 0;
    m_CsmaNoAckCount = m_BadCrcCount = m_TxDataBrdcastCount = m_RxDataBrdcastCount = 0;
}

//LN Constructor.
CGXDLMSG3PlcMacCounters::CGXDLMSG3PlcMacCounters(std::string ln) :
    CGXDLMSG3PlcMacCounters(ln, 0)
{

}

unsigned int CGXDLMSG3PlcMacCounters::GetTxDataPktCount()
{
    return m_TxDataPktCount;
}

void CGXDLMSG3PlcMacCounters::SetTxDataPktCount(unsigned int value)
{
    m_TxDataPktCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetRxDataPktCount()
{
    return m_RxDataPktCount;
}

void CGXDLMSG3PlcMacCounters::SetRxDataPktCount(unsigned int value)
{
    m_RxDataPktCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetTxCtrlPktCount()
{
    return m_TxCtrlPktCount;
}

void CGXDLMSG3PlcMacCounters::SetTxCtrlPktCount(unsigned int value)
{
    m_TxCtrlPktCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetRxCtrlPktCount()
{
    return m_RxCtrlPktCount;
}

void CGXDLMSG3PlcMacCounters::SetRxCtrlPktCount(unsigned int value)
{
    m_RxCtrlPktCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetCsmaFailCount()
{
    return m_CsmaFailCount;
}

void CGXDLMSG3PlcMacCounters::SetCsmaFailCount(unsigned int value)
{
    m_CsmaFailCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetCSMANoAckCount()
{
    return m_CsmaNoAckCount;
}

void CGXDLMSG3PlcMacCounters::SetCSMANoAckCount(unsigned int value)
{
    m_CsmaNoAckCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetBadCRCCount()
{
    return m_BadCrcCount;
}

void CGXDLMSG3PlcMacCounters::SetBadCRCCount(unsigned int value)
{
    m_BadCrcCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetTxDataBrdcastCount()
{
    return m_TxDataBrdcastCount;
}

void CGXDLMSG3PlcMacCounters::SetTxDataBrdcastCount(unsigned int value)
{
    m_TxDataBrdcastCount = value;
}

unsigned int CGXDLMSG3PlcMacCounters::GetRxDataBrdcastCount()
{
    return m_RxDataBrdcastCount;
}

void CGXDLMSG3PlcMacCounters::SetRxDataBrdcastCount(unsigned int value)
{
    m_RxDataBrdcastCount = value;
}


int CGXDLMSG3PlcMacCounters::Reset(CGXDLMSClient* client, std::vector<CGXByteBuffer>& reply)
{
    CGXDLMSVariant data((char)0);
    return client->Method(this, 1, data, reply);
}

int CGXDLMSG3PlcMacCounters::Invoke(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    if (e.GetIndex() == 1)
    {
      m_TxDataPktCount = m_RxDataPktCount = m_TxCtrlPktCount = m_RxCtrlPktCount = m_CsmaFailCount = 0;
      m_CsmaNoAckCount = m_BadCrcCount = m_TxDataBrdcastCount = m_RxDataBrdcastCount = 0;
    }
    else
    {
        e.SetError(DLMS_ERROR_CODE_READ_WRITE_DENIED);
    }
    return DLMS_ERROR_CODE_OK;
}

// Returns amount of attributes.
int CGXDLMSG3PlcMacCounters::GetAttributeCount()
{
    return 10;
}

// Returns amount of methods.
int CGXDLMSG3PlcMacCounters::GetMethodCount()
{
    return 1;
}

void CGXDLMSG3PlcMacCounters::GetValues(std::vector<std::string>& values)
{
    values.clear();
    std::string ln;
    GetLogicalName(ln);
    values.push_back(ln);
    values.push_back(CGXDLMSVariant(m_TxDataPktCount).ToString());
    values.push_back(CGXDLMSVariant(m_RxDataPktCount).ToString());
    values.push_back(CGXDLMSVariant(m_TxCtrlPktCount).ToString());
    values.push_back(CGXDLMSVariant(m_RxCtrlPktCount).ToString());
    values.push_back(CGXDLMSVariant(m_CsmaFailCount).ToString());
    values.push_back(CGXDLMSVariant(m_CsmaNoAckCount).ToString());
    values.push_back(CGXDLMSVariant(m_BadCrcCount).ToString());
    values.push_back(CGXDLMSVariant(m_TxDataBrdcastCount).ToString());
    values.push_back(CGXDLMSVariant(m_RxDataBrdcastCount).ToString());
}

void CGXDLMSG3PlcMacCounters::GetAttributeIndexToRead(bool all, std::vector<int>& attributes)
{
    //LN is static and read only once.
    if (all || CGXDLMSObject::IsLogicalNameEmpty(m_LN))
    {
        attributes.push_back(1);
    }
    // TxDataPktCount
    if (all || CanRead(2))
    {
        attributes.push_back(2);
    }

    // RxDataPktCount
    if (all || CanRead(3))
    {
        attributes.push_back(3);
    }
    // TxCtrlPktCount
    if (all || CanRead(4))
    {
        attributes.push_back(4);
    }
    // RxCtrlPktCount
    if (all || CanRead(5))
    {
        attributes.push_back(5);
    }
    // CsmaFailCount
    if (all || CanRead(6))
    {
        attributes.push_back(6);
    }
    // m_CsmaNoAckCount
    if (all || CanRead(7))
    {
        attributes.push_back(7);
    }
    // m_BadCrcCount
    if (all || CanRead(8))
    {
        attributes.push_back(8);
    }
    // m_TxDataBrdcastCount
    if (all || CanRead(9))
    {
        attributes.push_back(9);
    }
    // m_RxDataBrdcastCount
    if (all || CanRead(10))
    {
        attributes.push_back(10);
    }
}

int CGXDLMSG3PlcMacCounters::GetDataType(int index, DLMS_DATA_TYPE& type)
{
    DLMS_ERROR_CODE ret = DLMS_ERROR_CODE_OK;
    switch (index) {
    case 1:
        type = DLMS_DATA_TYPE_OCTET_STRING;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        type = DLMS_DATA_TYPE_UINT32;
        break;
    default:
        ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return ret;
}

// Returns value of given attribute.
int CGXDLMSG3PlcMacCounters::GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    int ret = DLMS_ERROR_CODE_OK;
    switch (e.GetIndex())
    {
    case 1:
    {
        int ret;
        CGXDLMSVariant tmp;
        if ((ret = GetLogicalName(this, tmp)) != 0)
        {
            return ret;
        }
        e.SetValue(tmp);
    }
    case 2:
        e.SetValue(m_TxDataPktCount);
        break;
    case 3:
        e.SetValue(m_RxDataPktCount);
        break;
    case 4:
        e.SetValue(m_TxCtrlPktCount);
        break;
    case 5:
        e.SetValue(m_RxCtrlPktCount);
        break;
    case 6:
        e.SetValue(m_CsmaFailCount);
        break;
    case 7:
        e.SetValue(m_CsmaNoAckCount);
        break;
    case 8:
        e.SetValue(m_BadCrcCount);
        break;
    case 9:
        e.SetValue(m_TxDataBrdcastCount);
        break;
    case 10:
        e.SetValue(m_RxDataBrdcastCount);
        break;
    default:
        ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
    }
    return ret;
}

// Set value of given attribute.
int CGXDLMSG3PlcMacCounters::SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e)
{
    int ret = DLMS_ERROR_CODE_OK;
    switch (e.GetIndex())
    {
    case 1:
        ret = SetLogicalName(this, e.GetValue());
        break;
    case 2:
        m_TxDataPktCount = e.GetValue().ToInteger();
        break;
    case 3:
        m_RxDataPktCount = e.GetValue().ToInteger();
        break;
    case 4:
        m_TxCtrlPktCount = e.GetValue().ToInteger();
        break;
    case 5:
        m_RxCtrlPktCount = e.GetValue().ToInteger();
        break;
    case 6:
        m_CsmaFailCount = e.GetValue().ToInteger();
        break;
    case 7:
        m_CsmaNoAckCount = e.GetValue().ToInteger();
        break;
    case 8:
        m_BadCrcCount = e.GetValue().ToInteger();
        break;
    case 9:
        m_TxDataBrdcastCount = e.GetValue().ToInteger();
        break;
    case 10:
        m_RxDataBrdcastCount = e.GetValue().ToInteger();
        break;
    default:
        ret = DLMS_ERROR_CODE_INVALID_PARAMETER;
        break;
    }
    return ret;
}