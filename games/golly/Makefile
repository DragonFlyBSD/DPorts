# $FreeBSD: ports/games/golly/Makefile,v 1.2 2013/01/23 15:05:34 svnexp Exp $

PORTNAME=	golly
PORTVERSION=	2.4
DISTVERSIONSUFFIX=	-src
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Conway's Game of Life and other cellular automata

USE_CMAKE=	yes
USE_PERL5=	yes
USE_PYTHON=	2.7+
USE_WX=		2.8+
CMAKE_OUTSOURCE=	yes
MAKE_JOBS_SAFE=	yes

DESKTOP_ENTRIES=	"Golly" "${COMMENT}" "${PREFIX}/share/pixmaps/golly.xpm" \
			"${PREFIX}/bin/golly" "Education;" "true"

.include <bsd.port.mk>
