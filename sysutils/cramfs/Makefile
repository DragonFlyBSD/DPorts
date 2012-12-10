# New ports collection makefile for:	cramfs
# Date created:		2006-11-29
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/sysutils/cramfs/Makefile,v 1.4 2012/11/17 06:01:27 svnexp Exp $
#

PORTNAME=	cramfs
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	gslin@gslin.org
COMMENT=	The compressed ROM filesystem

MAKEFILE=	GNUmakefile
USE_GMAKE=	yes

PLIST_FILES=	sbin/cramfsck sbin/mkcramfs

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cramfsck ${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/mkcramfs ${PREFIX}/sbin

.include <bsd.port.mk>
