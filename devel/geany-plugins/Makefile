# Created by: Aldis Berjoza <aldis@bsdroot.lv>
# $FreeBSD: devel/geany-plugins/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	geany-plugins
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel
DISTFILES=	# none

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugins (meta port)

.MAKE.FreeBSD_UL=	yes
NO_BUILD=	yes

NO_STAGE=	yes
.include "${.CURDIR}/files/bsd.geany-plugins.mk"

OPTIONS_DEFINE=		NLS
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

# NLS option first, then plugins sorted in GEANY_PLUGINS_ALL
NO_OPTIONS_SORT=	yes

.for plugin in ${GEANY_PLUGINS_ALL}
OPTIONS_DEFINE+=	${plugin:tu}
${plugin:tu}_DESC=	${${plugin}_DESC}
${plugin:tu}_DEP=	geany-plugin-${plugin}>=0:${PORTSDIR}/devel/geany-plugin-${plugin}
.endfor

NLS_DEP=		geany-plugins-l10n>=0:${PORTSDIR}/devel/geany-plugins-l10n

.include <bsd.port.options.mk>

.for opt in ${OPTIONS_DEFINE}
. if ${PORT_OPTIONS:M${opt}}
RUN_DEPENDS+=	${${opt}_DEP}
. endif
.endfor

do-install:
	${DO_NADA}

.include <bsd.port.mk>
