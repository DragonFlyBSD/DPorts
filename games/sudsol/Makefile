# New ports collection makefile for:	sudsol
# Date created:				25 Aug 2005
# Whom:					Ed Schouten <ed@fxq.nl>
#
# $FreeBSD: ports/games/sudsol/Makefile,v 1.4 2012/11/17 05:57:53 svnexp Exp $
#

PORTNAME=	sudsol
PORTVERSION=	0.1
CATEGORIES=	games
MASTER_SITES=	http://rink.nu/downloads/projects/

MAINTAINER=	rink@FreeBSD.org
COMMENT=	A utility to solve Sudoku puzzles

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/sudsol

post-patch:
	@${REINPLACE_CMD} -e 's|<stdint.h>|<inttypes.h>|' ${WRKSRC}/src/sudsol.c

.include <bsd.port.mk>
