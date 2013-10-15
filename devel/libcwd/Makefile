# Created by: ijliao
# $FreeBSD: devel/libcwd/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libcwd
PORTVERSION=	1.0.4
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The C++ Debugging Support Library

USES=	pathfix pkgconfig
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--disable-alloc --disable-location --disable-threading \
		--disable-pch
USE_LDCONFIG=	yes

CFLAGS+=	-D__GNU_LIBRARY__

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|malloc\.h|stdlib.h|g ; \
		 s|localtime(|localtime((const time_t *)|g' ${WRKSRC}/debugmalloc.cc

.include <bsd.port.mk>
