#pragma once

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t2962;
struct DSAParameters_t2962_marshaled;

void DSAParameters_t2962_marshal(const DSAParameters_t2962& unmarshaled, DSAParameters_t2962_marshaled& marshaled);
void DSAParameters_t2962_marshal_back(const DSAParameters_t2962_marshaled& marshaled, DSAParameters_t2962& unmarshaled);
void DSAParameters_t2962_marshal_cleanup(DSAParameters_t2962_marshaled& marshaled);
