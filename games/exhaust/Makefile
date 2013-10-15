# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: games/exhaust/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	exhaust
PORTVERSION=	1.9.2
CATEGORIES=	games
MASTER_SITES=	http://corewar.co.uk/pihlaja/exhaust/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Redcode simulator easy to embed into applications

PLIST_FILES=	bin/${PORTNAME}

NO_STAGE=	yes
do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} ${PORTNAME} ${PREFIX}/bin)
	@${ECHO_CMD}
	@${CAT} ${PKGMESSAGE}
	@${ECHO_CMD}

.include <bsd.port.mk>
