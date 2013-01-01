# $FreeBSD: ports/games/traindirector/Makefile,v 1.27 2012/12/10 20:43:14 svnexp Exp $

PORTNAME=	traindirector
PORTVERSION=	3.6
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	http://www.backerstreet.com/traindir/
DISTNAME=	tdir36src

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Train controller simulation

LICENSE=	GPLv2

NO_WRKSUBDIR=	yes

MAKE_JOBS_SAFE=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20
USE_ZIP=	yes

USE_WX=		2.8
WX_COMPS=	wx:lib
WX_UNICODE=	yes

DESKTOP_ENTRIES="Train Director" "${COMMENT}" "" "traindir3" \
		"Game;Simulation;StrategyGame;" ${FALSE}

PLIST_FILES=	bin/traindir3

MAKEFILE=	Makefile.fc9

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/traindir3 ${PREFIX}/bin

.include <bsd.port.mk>
