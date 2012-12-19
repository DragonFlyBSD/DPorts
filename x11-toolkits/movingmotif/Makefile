# ex:ts=8
# Ports collection makefile for:	movingmotif
# Date created:			Sep 13, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/x11-toolkits/movingmotif/Makefile,v 1.21 2012/11/17 06:03:36 svnexp Exp $

PORTNAME=	movingmotif
PORTVERSION=	2.3.0
PORTREVISION=	1
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}_2_1/movingmotiv-2.3.1

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Display scientific data as dynamic plot

USE_MOTIF=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
CFLAGS+=	-O0
.endif

.include <bsd.port.post.mk>
