# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: sysutils/screenfetch/Makefile 331351 2013-10-23 06:10:47Z jgh $

PORTNAME=	screenFetch
PORTVERSION=	3.2.0
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/jgh/sysutils/${PORTNAME:tl}/ \
		GH

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	Bash Screenshot Information Tool

LICENSE=	GPLv3

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash \
		xdpyinfo:${PORTSDIR}/x11/xdpyinfo

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	KittyKatt
GH_TAGNAME=	be0e27d
GH_COMMIT=	${GH_TAGNAME}

PLIST_FILES=	bin/screenFetch bin/screenfetch
PORTDOCS=	CHANGELOG README.mkdn TODO

.include <bsd.port.options.mk>

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME:tl}-dev ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${LN} -fs ${PORTNAME} ${STAGEDIR}${PREFIX}/bin/screenfetch

.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
