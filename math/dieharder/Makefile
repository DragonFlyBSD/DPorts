PORTNAME=	dieharder
PORTVERSION=	3.31.1
PORTREVISION=	11
CATEGORIES=	math
MASTER_SITES=	http://www.phy.duke.edu/~rgb/General/dieharder/ LOCAL/bf

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Random number generator testsuite
WWW=		http://www.phy.duke.edu/~rgb/General/dieharder.php

LICENSE=	GPLv2

LIB_DEPENDS=	libgsl.so:math/gsl

MAKE_JOBS_UNSAFE=	yes

USES=		dos2unix libtool tar:tgz
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

# Fix build with clang11
CFLAGS+=	-fcommon

check test: build
	${WRKSRC}/dieharder/dieharder -a

dfly-patch:
	${REINPLACE_CMD} -e 's@-DLITTLE_ENDIAN@-DBRG_LITTLE_ENDIAN@g' \
		${WRKSRC}/libdieharder/Makefile.in \
		${WRKSRC}/libdieharder/Makefile.am \
		${WRKSRC}/libdieharder/Makefile
	${REINPLACE_CMD} -e 's@[[:<:]]LITTLE_ENDIAN[[:>:]]@BRG_LITTLE_ENDIAN@g' \
		${WRKSRC}/include/dieharder/brg_endian.h

.include <bsd.port.mk>
