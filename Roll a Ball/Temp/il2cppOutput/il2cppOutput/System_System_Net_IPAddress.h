﻿#pragma once
// System.UInt16[]
struct UInt16U5BU5D_t2791;
// System.Net.IPAddress
struct IPAddress_t2792;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.IPAddress
struct IPAddress_t2792  : public Object_t
{
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2791* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;
};
struct IPAddress_t2792_StaticFields{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2792 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2792 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2792 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2792 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2792 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2792 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2792 * ___IPv6None_10;
};