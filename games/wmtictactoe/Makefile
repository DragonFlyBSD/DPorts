# Created by: Jim Mock <jim@FreeBSD.org>
# $FreeBSD: games/wmtictactoe/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	wmtictactoe
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	games windowmaker afterstep
MASTER_SITES=	LOCAL/jim
DISTNAME=	${PORTNAME}-${PORTVERSION}-1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockable TicTacToe game for WindowMaker and AfterStep

WRKSRC=		${WRKDIR}/wmtictactoe.app/wmtictactoe

USE_XORG=	xpm
USE_GMAKE=	yes

PLIST_FILES=	bin/wmtictactoe

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
		's|^void .*main|int main|' ${WRKSRC}/wmtictactoe.c

post-install:
	@${ECHO_MSG} "===>   Run 'wmtictactoe --help' for the available options"

.include <bsd.port.mk>
