# New ports collection makefile for:   simplemod
# Date created:        9 june 2003
# Whom:                Christian Laursen <xi@borderworlds.dk>
#
# $FreeBSD: ports/audio/simplemod/Makefile,v 1.5 2012/11/17 05:54:44 svnexp Exp $
#

PORTNAME=	simplemod
PORTVERSION=	1.1
CATEGORIES=	audio
MASTER_SITES=	http://borderworlds.dk/projects/sm/

MAINTAINER=	xi@borderworlds.dk
COMMENT=	A minimalistic module player

LIB_DEPENDS=	mikmod.2:${PORTSDIR}/audio/libmikmod

WRKSRC=		${WRKDIR}/simplemod

ALL_TARGET=	simplemod
PLIST_FILES=	bin/simplemod

do-install:
	${INSTALL} -o 0 -g 0 -s ${WRKSRC}/simplemod ${PREFIX}/bin

.include <bsd.port.mk>
