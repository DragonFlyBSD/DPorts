# New ports collection makefile for:	dadadodo
# Date created:			May 31, 2001
# Whom:				Mark Pulford <mark@kyne.com.au>
#
# $FreeBSD: ports/textproc/dadadodo/Makefile,v 1.7 2012/11/17 06:01:53 svnexp Exp $
#

PORTNAME=	dadadodo
PORTVERSION=	1.04
CATEGORIES=	textproc
MASTER_SITES=	http://www.jwz.org/dadadodo/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text processor which analyses text and generates random sentences

PLIST_FILES=	bin/dadadodo

pre-patch:
	${REINPLACE_CMD} -E "s/^(CC|CFLAGS).+//" ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dadadodo ${PREFIX}/bin

.include <bsd.port.mk>
