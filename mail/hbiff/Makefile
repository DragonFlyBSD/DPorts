# ex:ts=8
# Ports collection makefile for:  hbiff
# Date created:			  Mon Dec 23, 1998
# Whom:				  David O'Brien (obrien@NUXI.com)
#
# $FreeBSD: ports/mail/hbiff/Makefile,v 1.16 2012/11/17 05:59:04 svnexp Exp $
#

PORTNAME=	hbiff
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	ftp://nuxi.ucdavis.edu/pub/misc/  \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	obrien

MAINTAINER=	obrien@FreeBSD.org
COMMENT=	A replacement for xbiff that handles popup window with mail headers

USE_XORG=	x11
MAN1=		hbiff.1

do-build:
	cd ${WRKSRC} ; cc -I${LOCALBASE}/include hbiff.c -L${LOCALBASE}/lib -lX11

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/a.out ${PREFIX}/bin/hbiff
	@cd ${WRKSRC} ; ${INSTALL_MAN} ${MAN1} ${PREFIX}/man/man1

.include <bsd.port.mk>
