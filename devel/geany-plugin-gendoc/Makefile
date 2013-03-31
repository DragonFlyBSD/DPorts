# $FreeBSD: devel/geany-plugin-gendoc/Makefile 314846 2013-03-21 14:43:24Z makc $

PORTNAME=	geany-plugin-gendoc
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	ctpl:${PORTSDIR}/textproc/ctpl
RUN_DEPENDS=	${LOCALBASE}/bin/rst2html:${PORTSDIR}/textproc/py-docutils

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
