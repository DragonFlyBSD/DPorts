# Created by: Takefu
# $FreeBSD: devel/libunistring/Makefile 316654 2013-04-27 08:50:46Z mva $

PORTNAME=	libunistring
PORTVERSION=	0.9.3
CATEGORIES=	devel
MASTER_SITES=	GNU

MAINTAINER=	takefu@airport.fm
COMMENT=	Unicode string library

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_GPLv3=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL3=	${WRKSRC}/COPYING.LIB

USES=		charsetfix iconv
USE_GMAKE=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INFO=		${PORTNAME}

pre-patch:
.if defined(NOPORTDOCS)
	cd ${WRKSRC}/doc && ${REINPLACE_CMD}\
	-e 's!install-data-local:!#install-data-local:!' Makefile.in
.endif

.include <bsd.port.mk>
