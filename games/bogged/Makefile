# Created by: Andrey Zakhvatov
# $FreeBSD: games/bogged/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	bogged
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SUNSITE/games/strategy
EXTRACT_SUFX=	.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Word game for X Window System

EXTRACT_CMD=	${GZIP_CMD}
EXTRACT_BEFORE_ARGS=	-dc
EXTRACT_AFTER_ARGS=	> ${WRKDIR}/${PORTNAME}

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

USE_TK_WRAPPER=	yes

PLIST_FILES=	bin/bogged

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
