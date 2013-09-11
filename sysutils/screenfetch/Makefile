# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: sysutils/screenfetch/Makefile 326699 2013-09-07 23:22:58Z jgh $

PORTNAME=	screenFetch
PORTVERSION=	3.1.0
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
GH_TAGNAME=	56f2151
GH_COMMIT=	${GH_TAGNAME}

PLIST_FILES=	bin/screenFetch
PORTDOCS=	CHANGELOG README.mkdn TODO

.include <bsd.port.options.mk>

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME:tl}-dev ${PREFIX}/bin/${PORTNAME}

.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
