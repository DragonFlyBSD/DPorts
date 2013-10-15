# Created by: ijliao
# $FreeBSD: devel/xtl/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	xtl
PORTVERSION=	1.4.2
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A library for R/W structured data to/from an external representation

NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	${CP} -R ${WRKSRC}/include/* ${PREFIX}/include

.include <bsd.port.mk>
