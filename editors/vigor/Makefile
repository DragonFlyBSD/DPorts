# Created by: Bill Fumerola <billf@chc-chimes.com>
# $FreeBSD: editors/vigor/Makefile 332863 2013-11-05 16:14:47Z gahr $

PORTNAME=	vigor
PORTVERSION=	0.016
PORTREVISION=	4
CATEGORIES=	editors tcl tk
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Vi clone inspired by the userfriendly comic strip

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/../LICENSE

WRKSRC=		${WRKDIR}/${DISTNAME}/build

USES+=		tk
USE_XORG=	x11
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--exec-prefix=${STAGEDIR}${PREFIX}

CPPFLAGS+=	-I${TCL_INCLUDEDIR} -I${TK_INCLUDEDIR}
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e 's|tcl80|tcl${TCL_SHLIB_VER}|; \
		s|tk80|tk${TK_SHLIB_VER}|; \
		s|^grantpt|XXXgrantpt|;' \
			${WRKSRC}/configure

.include <bsd.port.mk>
