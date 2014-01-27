# Created by: Ed Schouten <ed@fxq.nl>
# $FreeBSD: games/sudsol/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sudsol
PORTVERSION=	0.1
CATEGORIES=	games
MASTER_SITES=	http://rink.nu/downloads/projects/

MAINTAINER=	rink@FreeBSD.org
COMMENT=	A utility to solve Sudoku puzzles

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/sudsol

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|<stdint.h>|<inttypes.h>|' ${WRKSRC}/src/sudsol.c

.include <bsd.port.mk>
