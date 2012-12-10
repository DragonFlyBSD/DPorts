# $FreeBSD: ports/mail/libdkim/files/Makefile,v 1.4 2012/11/17 05:59:04 svnexp Exp $

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
