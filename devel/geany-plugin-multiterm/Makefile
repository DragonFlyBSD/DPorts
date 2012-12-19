# $FreeBSD: ports/devel/geany-plugin-multiterm/Makefile,v 1.2 2012/11/17 05:55:44 svnexp Exp $

PORTNAME=	geany-plugin
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

BUILD_DEPENDS=	valac:${PORTSDIR}/lang/vala
USE_GNOME=	vte

GEANY_PLUGIN=	multiterm

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
