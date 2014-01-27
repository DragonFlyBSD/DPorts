# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: games/tbclock/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tbclock
PORTVERSION=	1.10
CATEGORIES=	games
MASTER_SITES=	http://tamentis.com/projects/tbclock/files/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Binary clock in curses

HAS_CONFIGURE=	yes
PLIST_FILES=	bin/${PORTNAME} man/man1/tbclock.1.gz

post-patch:
	@${REINPLACE_CMD} -e '/^CC/d;/^CFLAGS/d' ${WRKSRC}/configure

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/tbclock.1 ${STAGEDIR}${MAN1PREFIX}/man/man1/

.include <bsd.port.mk>
