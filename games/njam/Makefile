# Created by: <janos.mohacsi@bsd.hu>
# $FreeBSD: games/njam/Makefile 322840 2013-07-12 15:01:45Z amdmi3 $

PORTNAME=	njam
PORTVERSION=	1.25
PORTREVISION=	9
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Fast paced multiplayer pac-man clone

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -D__linux__
USE_SDL=	mixer image net sdl
MAKE_JOBS_SAFE=	yes
PORTDOCS=	*

.include <bsd.port.options.mk>

post-extract:
	@${RM} -f ${WRKSRC}/src/*.o

post-patch:
	@${REINPLACE_CMD} -e 's|/var/lib/games|/var/games|' \
		${WRKSRC}/src/njam.cpp

post-install:
	${CHOWN} :games ${PREFIX}/bin/njam
	${CHMOD} g+s ${PREFIX}/bin/njam
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/html/* ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
