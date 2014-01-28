# Created by: Aldis Berjoza <aldis@bsdroot.lv>
# $FreeBSD: devel/geany-plugins/Makefile 340813 2014-01-23 08:54:00Z makc $

PORTNAME=	geany-plugins
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel
DISTFILES=	# none

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Geany plugins (meta port)

.MAKE.FreeBSD_UL=	yes
NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes

.include "${.CURDIR}/files/bsd.geany-plugins.mk"

OPTIONS_DEFINE=		NLS
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

# NLS option first, then plugins sorted in GEANY_PLUGINS_ALL
NO_OPTIONS_SORT=	yes

.for plugin in ${GEANY_PLUGINS_ALL}
OPTIONS_DEFINE+=	${plugin:tu}
${plugin:tu}_DESC=	${${plugin}_DESC}
${plugin:tu}_RUN_DEPENDS=	geany-plugin-${plugin}>=0:${PORTSDIR}/devel/geany-plugin-${plugin}
.endfor

NLS_RUN_DEPENDS=	geany-plugins-l10n>=0:${PORTSDIR}/devel/geany-plugins-l10n

.include <bsd.port.mk>
