PORTNAME=	cpmtools
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	emulators
MASTER_SITES=	LOCAL/joerg
DISTNAME=	cpm-${PORTVERSION}

MAINTAINER=	joerg@FreeBSD.org
COMMENT=	Utility to transfer files from/to CP/M (R) diskettes

WRKSRC=		${WRKDIR}/cpm

CFLAGS+=	-Wno-return-type

CONFLICTS_INSTALL=	yaze-ag

IGNORE= unmaintained, please request fixing to users mailing list
.include <bsd.port.mk>
