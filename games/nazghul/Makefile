# Created by: Jose Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: games/nazghul/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	nazghul
PORTVERSION=	0.7.1
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	A computer role-playing game engine

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

USE_SDL=	sdl image mixer
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -i "" 's|malloc.h|stdlib.h|g' ${WRKSRC}/src/scheme.c

.include <bsd.port.mk>
