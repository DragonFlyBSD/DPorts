# Created by: Will Andrews <andrews@technologist.com>
# $FreeBSD: games/wmminichess/Makefile 333616 2013-11-12 20:32:10Z danilo $

PORTNAME=	wmminichess
PORTVERSION=	0.8
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	http://web.cs.mun.ca/~gstarkes/wmaker/dockapps/files/
DISTNAME=	miniCHESS-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Window Maker chess dockapp game

LICENSE=	GPLv2 # (or later)

RUN_DEPENDS=	${LOCALBASE}/bin/gnuchess:${PORTSDIR}/games/gnuchess

USE_XORG=	xpm

CPPFLAGS+=	-I${LOCALBASE}/include -DENGINE=\"${LOCALBASE}/bin/gnuchessx\"
LDFLAGS+=	-L${LOCALBASE}/lib -lXpm -lXext -lX11

PORTDOCS=	README TODO
PLIST_FILES=	bin/minichess

OPTIONS_DEFINE=	DOCS

do-build:
	(cd ${WRKSRC} \
		&& ${CC} ${CFLAGS} ${CPPFLAGS} -o minichess *.c ${LDFLAGS})

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} minichess ${STAGEDIR}${PREFIX}/bin)
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${i} ${STAGEDIR}${DOCSDIR})
.endfor

.include <bsd.port.mk>
