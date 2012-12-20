# $FreeBSD: ports/devel/geany-plugin-geniuspaste/Makefile,v 1.2 2012/11/17 05:55:44 svnexp Exp $

PORTNAME=	geany-plugin
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	soup-2.4:${PORTSDIR}/devel/libsoup

GEANY_PLUGIN=	geniuspaste

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
