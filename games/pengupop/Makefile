# New ports collection makefile for:	pengupop
# Date created:		14 Jun 2006
# Whom:			Dmitry Marakasov <amdmi3@amdmi3.ru>
#
# $FreeBSD: ports/games/pengupop/Makefile,v 1.18 2012/11/17 05:57:48 svnexp Exp $
#

PORTNAME=	pengupop
PORTVERSION=	2.2.6
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.junoplay.com/files/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Online multiplayer clone of Bust a Move

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_SDL=	sdl
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

PLIST_FILES=	bin/pengupop

.include <bsd.port.mk>
