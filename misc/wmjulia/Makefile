# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: misc/wmjulia/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wmjulia
PORTVERSION=	0.40
PORTREVISION=	5
CATEGORIES=	misc windowmaker afterstep
MASTER_SITES=	http://web.novalis.org/programs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockapp that creates an animated Julia set

LICENSE=	GPLv2

PLIST_FILES=	bin/wmjulia
WRKSRC=	${WRKDIR}/${PORTNAME}.app/${PORTNAME}
USES=		gmake
USE_XORG=	xpm xext

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
