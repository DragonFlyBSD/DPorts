# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: ports/games/apricots/Makefile,v 1.16 2012/12/05 02:35:26 svnexp Exp $

PORTNAME=	apricots
PORTVERSION=	0.2.6
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	http://www.fishies.org.uk/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Fly a little plane around and shoot things and drop bombs

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_SDL=	sdl
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PORTDOCS=	README

DESKTOP_ENTRIES="Apricots" \
		"Fly a little plane around and shoot things and drop bombs" \
		"" \
		"apricots" \
		"Game;ArcadeGame;" \
		false

OPTIONS_DEFINE=	OPENAL
OPTIONS_DEFAULT=OPENAL

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MOPENAL}
USE_OPENAL=	al alut
.endif

post-patch:
.if ${PORT_OPTIONS:MOPENAL}
	@${REINPLACE_CMD} -e '/^LIBS = / s|$$| -lopenal -lalut|' \
		${WRKSRC}/apricots/Makefile.in
.else
	@${REINPLACE_CMD} -e 's|-DAP_AUDIO_OPENAL||' ${WRKSRC}/configure
.endif
	@${REINPLACE_CMD} -e 's|-O2||' ${WRKSRC}/configure

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
