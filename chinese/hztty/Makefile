# Ports collection makefile for:  hztty
# Date created:			  Wed Sep 24, 1997
# Whom:				  Ada T Lim <ada@not-enough.bandwidth.org>
#
# $FreeBSD: ports/chinese/hztty/Makefile,v 1.12 2012/11/17 05:54:56 svnexp Exp $
#

PORTNAME=	hztty
PORTVERSION=	2.0
CATEGORIES=	chinese
MASTER_SITES=	ftp://ftp.cuhk.hk/pub/chinese/ifcss/software/unix/convert/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A translator between GuoBiao / Big5 and HZ

ALL_TARGET=	bsd
MAN1=		hztty.1
PLIST_FILES=	bin/hztty

.include <bsd.port.pre.mk>

.if ${OSVERSION} > 900007
#BROKEN=		fails to build with new utmpx
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hztty ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/hztty.1 ${PREFIX}/man/man1

.include <bsd.port.post.mk>
