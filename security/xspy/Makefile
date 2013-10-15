# Created by: Yonatan <onatan@gmail.com>
# $FreeBSD: security/xspy/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	xspy
PORTVERSION=	1.0c
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	http://www.acm.vt.edu/~jmaxwell/programs/xspy/

MAINTAINER=	onatan@gmail.com
COMMENT=	A utility for monitoring keystrokes on remote X servers

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		imake:notall
USE_XORG=	x11

ALL_TARGET=	xspy

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xspy ${PREFIX}/bin

.include <bsd.port.mk>
