# Created by: Gerrit Beine (<gerrit.beine@gmx.de>)
# $FreeBSD: graphics/pear-Image_GraphViz/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image_GraphViz
PORTVERSION=	1.3.0
CATEGORIES=	graphics www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	An interface to AT&T's GraphViz tools

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		${LOCALBASE}/bin/dot:${PORTSDIR}/graphics/graphviz

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
