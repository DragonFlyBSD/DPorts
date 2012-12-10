# New ports collection makefile for:    mplex
# Date created:         Wed Jul 31 20:54:54 CDT 1996
# Whom:                 erich@FreeBSD.org
#
# $FreeBSD: ports/multimedia/mplex/Makefile,v 1.20 2012/11/17 05:59:52 svnexp Exp $
#

PORTNAME=	mplex
PORTVERSION=	1.1
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=     sanpei

MAINTAINER=	sanpei@FreeBSD.org
COMMENT=	Multiplexes MPEG component streams into system layers

CONFLICTS=	mjpegtools-*

MAN1=		mplex.1
PLIST_FILES=	bin/mplex

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mplex ${PREFIX}/bin
	${INSTALL_MAN} ${FILESDIR}/mplex.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
