--- XMP-Toolkit-SDK-4.4.2/source/common/EndianUtils.hpp.orig	2008-10-06 07:18:58 UTC
+++ XMP-Toolkit-SDK-4.4.2/source/common/EndianUtils.hpp
@@ -34,7 +34,7 @@
 	#ifndef kBigEndianHost	// Typically in the makefile for generic UNIX.
-		#ifdef __FreeBSD__
+		#if defined(__FreeBSD__) || defined(__DragonFly__)
 			#include <sys/endian.h>
 			#if _BYTE_ORDER == _LITTLE_ENDIAN
 				#define kBigEndianHost 0
 			#else // _BYTE_ORDER == _BIG_ENDIAN
 				#define kBigEndianHost 1
