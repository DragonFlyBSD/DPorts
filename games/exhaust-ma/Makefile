# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: games/exhaust-ma/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	exhaust-ma
PORTVERSION=	1.9
CATEGORIES=	games
MASTER_SITES=	http://corewar.co.uk/ankerl/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Redcode simulator easy to embed into applications

USE_ZIP=	yes
USES=		gmake dos2unix

NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/exhaust ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
