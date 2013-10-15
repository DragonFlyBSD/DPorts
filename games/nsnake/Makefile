# Created by: markand
# $FreeBSD: games/nsnake/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	nsnake
PORTVERSION=	1.4
CATEGORIES=	games
MASTER_SITES=	http://releases.malikania.fr/nsnake/
EXTRACT_SUFX=	.tgz

MAINTAINER=	demelier.david@gmail.com
COMMENT=	Snake game written in C and ncurses

LICENSE=	MIT

OPTIONS_DEFINE=	DOCS

MAN6=		${PORTNAME}.6
PORTDOCS=	CHANGELOG
PLIST_FILES=	bin/${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.options.mk>

do-build:
	(cd ${WRKSRC} && ${CC} ${CFLAGS} -o ${PORTNAME} ${PORTNAME}.c -lcurses)

do-install:
	(cd ${WRKSRC} \
		&& ${INSTALL_PROGRAM} ${PORTNAME} ${PREFIX}/bin \
		&& ${INSTALL_MAN} ${PORTNAME}.6 ${MANPREFIX}/man/man6)
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} CHANGELOG ${DOCSDIR})
.endif

.include <bsd.port.mk>
