# New ports collection makefile for:	nyancat
# Date created:				30 Mar 2012
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/net/nyancat/Makefile,v 1.2 2012/11/17 06:00:08 svnexp Exp $
#

PORTNAME=	nyancat
PORTVERSION=	20120330
CATEGORIES=	net games
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Animated telnet server that renders a loop of the nyan cat animation

MAKE_JOBS_SAFE=	yes

SUB_FILES=	pkg-message
PLIST_FILES=	bin/nyancat

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${PREFIX}/bin

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
