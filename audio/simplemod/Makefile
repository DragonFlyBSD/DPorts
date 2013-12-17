# Created by: Christian Laursen <xi@borderworlds.dk>
# $FreeBSD: audio/simplemod/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	simplemod
PORTVERSION=	1.1
CATEGORIES=	audio
MASTER_SITES=	http://borderworlds.dk/projects/sm/

MAINTAINER=	xi@borderworlds.dk
COMMENT=	A minimalistic module player

LIB_DEPENDS=	libmikmod.so:${PORTSDIR}/audio/libmikmod

WRKSRC=		${WRKDIR}/simplemod

ALL_TARGET=	simplemod
PLIST_FILES=	bin/simplemod
NO_STAGE=	yes

do-install:
	${INSTALL} -o 0 -g 0 -s ${WRKSRC}/simplemod ${PREFIX}/bin

.include <bsd.port.mk>
