# Created by: Aldis Berjoza <aldis@bsdroot.lv>
# $FreeBSD: ports/devel/geany-plugins/Makefile,v 1.9 2012/11/17 05:55:44 svnexp Exp $

PORTNAME=	geany-plugins
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel
DISTFILES=	# none

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugins (meta port)

NO_BUILD=	yes

.include "${.CURDIR}/files/bsd.geany-plugins.mk"

OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

.for plugin in ${GEANY_PLUGINS_ALL}
OPTIONS_DEFINE+=	${plugin:tu}
${plugin:tu}_DESC=	${${plugin}_DESC}
${plugin:tu}_DEP=	geany-plugin-${plugin}>=0:${PORTSDIR}/devel/geany-plugin-${plugin}
.endfor

.include <bsd.port.options.mk>

.for opt in ${OPTIONS_DEFINE}
. if ${PORT_OPTIONS:M${opt}}
RUN_DEPENDS+=	${${opt}_DEP}
. endif
.endfor

do-install:
	${DO_NADA}

.include <bsd.port.mk>
