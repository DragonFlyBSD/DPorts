# ex:ts=8
# New ports collection makefile for:	xtl
# Date created:			Sep 1, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/devel/xtl/Makefile,v 1.9 2012/11/17 05:57:06 svnexp Exp $
#

PORTNAME=	xtl
PORTVERSION=	1.4.2
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library for R/W structured data to/from an external representation

NO_BUILD=	yes

do-install:
	${CP} -R ${WRKSRC}/include/* ${PREFIX}/include

.include <bsd.port.mk>
