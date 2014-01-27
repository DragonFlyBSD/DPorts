# $FreeBSD: mail/libdkim/files/Makefile 340722 2014-01-22 17:00:46Z mat $

LIB = 	dkim
SRCS=	dkim.cpp dns.cpp dkimbase.cpp dkimsign.cpp dkimverify.cpp
INCS=	dkim.h

SHLIB_MAJOR=	%%SHLIB_MAJOR%%

LIBDIR=		${PREFIX}/lib
INCLUDEDIR=	${PREFIX}/include
CXXFLAGS+=	-DOPENSSL_FIPS -I${OPENSSLINC}
LDFLAGS+=	-lcrypto -L${OPENSSLLIB}

NO_PROFILE=

.include <bsd.lib.mk>
