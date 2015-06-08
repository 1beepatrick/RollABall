#pragma once

// UnityEngine.SkeletonBone
struct SkeletonBone_t2125;
struct SkeletonBone_t2125_marshaled;

void SkeletonBone_t2125_marshal(const SkeletonBone_t2125& unmarshaled, SkeletonBone_t2125_marshaled& marshaled);
void SkeletonBone_t2125_marshal_back(const SkeletonBone_t2125_marshaled& marshaled, SkeletonBone_t2125& unmarshaled);
void SkeletonBone_t2125_marshal_cleanup(SkeletonBone_t2125_marshaled& marshaled);
