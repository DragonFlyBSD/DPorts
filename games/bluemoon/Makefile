# Created by: Andrey Zakhvatov
# $FreeBSD: games/bluemoon/Makefile 337177 2013-12-22 09:19:40Z nemysis $

PORTNAME=	bluemoon
PORTVERSION=	2.11
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.catb.org/~esr/bluemoon/

MAINTAINER=	nemysis@FreeBSD.org
COMMENT=	Blue Moon card solitaire

LICENSE=	BSD3CLAUSE

USES=		gmake
ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} \
		man/man6/${PORTNAME}.6.gz \
		share/applications/${PORTNAME}.desktop \
		share/pixmaps/${PORTNAME}.png

PORTDOCS=	NEWS README

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|CFLAGS?=|g ; \
		 s|cc |$${CC} |g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_DATA} ${FILESDIR}/${PORTNAME}.desktop ${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps 
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.6 ${STAGEDIR}${MAN6PREFIX}/man/man6/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
