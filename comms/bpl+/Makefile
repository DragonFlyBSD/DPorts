# New ports collection makefile for:	bpl+
# Date created:			22 Sep 1996
# Whom:				Masafumi NAKANE <max@FreeBSD.org>
#
# $FreeBSD: ports/comms/bpl+/Makefile,v 1.14 2012/11/17 05:54:59 svnexp Exp $
#

PORTNAME=	bpl+
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	comms
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	max
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	B Plus file transfer protocol

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bpl ${PREFIX}/bin
	@${LN} -fs ${PREFIX}/bin/bpl ${PREFIX}/bin/bp

.include <bsd.port.mk>
