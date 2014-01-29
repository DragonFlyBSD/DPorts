# Created by: Martin Otto
# $FreeBSD: sysutils/bsd-splash-changer/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	bsd-splash-changer
PORTVERSION=	060211
CATEGORIES=	sysutils
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	gamato@users.sf.net
COMMENT=	Boot Splash Image Changer

USE_RC_SUBR=	change_splash
SUB_FILES=	pkg-message
NO_BUILD=	yes

NO_STAGE=	yes
do-fetch:
	@${DO_NADA}

do-install:
	${MKDIR} ${DATADIR}

post-install:
	@${ECHO_CMD}; ${CAT} ${PKGMESSAGE}; ${ECHO_CMD}

.include <bsd.port.mk>
