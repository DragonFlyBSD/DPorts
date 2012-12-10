# New ports collection makefile for:	omnitty
# Date created:				May 21 2006
# Whom:					Rong-En Fan <rafan@infor.org>
#
# $FreeBSD: ports/net/omnitty/Makefile,v 1.9 2012/11/17 06:00:08 svnexp Exp $
#

PORTNAME=	omnitty
PORTVERSION=	0.3.0
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	A curses-based SSH multiplexer

LIB_DEPENDS=	rote:${PORTSDIR}/devel/rote

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

ALL_TARGET=	${PORTNAME}

MAN1=		${PORTNAME}.1

PLIST_FILES=	bin/${PORTNAME}

post-patch:
	${REINPLACE_CMD} 's|<alloca.h>|<stdlib.h>|' \
		${WRKSRC}/machmgr.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
