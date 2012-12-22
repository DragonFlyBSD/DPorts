# Ports collection makefile for:  pear-Image_GraphViz
# Date created:			  17 May 2007
# Whom:				  Gerrit Beine (<gerrit.beine@gmx.de>)
#
# $FreeBSD: ports/graphics/pear-Image_GraphViz/Makefile,v 1.7 2012/11/17 05:58:18 svnexp Exp $
#

PORTNAME=	Image_GraphViz
PORTVERSION=	1.2.1
PORTREVISION=	3
CATEGORIES=	graphics www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An interface to AT&T's GraphViz tools

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		${LOCALBASE}/bin/dot:${PORTSDIR}/graphics/graphviz

CATEGORY=	Image
FILES=		GraphViz.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
