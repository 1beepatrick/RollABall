#pragma once

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t2960;
struct RSAParameters_t2960_marshaled;

void RSAParameters_t2960_marshal(const RSAParameters_t2960& unmarshaled, RSAParameters_t2960_marshaled& marshaled);
void RSAParameters_t2960_marshal_back(const RSAParameters_t2960_marshaled& marshaled, RSAParameters_t2960& unmarshaled);
void RSAParameters_t2960_marshal_cleanup(RSAParameters_t2960_marshaled& marshaled);
