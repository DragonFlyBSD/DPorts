# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: games/f1lt/Makefile 328256 2013-09-25 06:14:31Z jgh $

PORTNAME=	f1lt
PORTVERSION=	2.1.1
CATEGORIES=	games
MASTER_SITES=	GOOGLE_CODE \
		LOCAL/jgh/games/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	Unofficial Formula 1 live timing application

LICENSE=	GPLv3

OPTIONS_DEFINE=	DOCS

USE_QT4=	gui network moc_build qmake_build rcc_build uic_build
WRKSRC=	${WRKDIR}/${DISTNAME:S|-src||}

HAS_CONFIGURE=	yes
USES=	gmake

PLIST_FILES=	bin/F1LT \
		bin/f1lt \
		share/f1lt/season.dat \
		share/f1lt/trackdata.dat \
		share/f1lt/trackrecords.dat
PLIST_DIRSTRY=	share/f1lt
PORTDOCS=	CHANGELOG

.include <bsd.port.options.mk>

post-patch-script:
	@${REINPLACE_CMD} -e 's|PREFIX = /opt/$$$$TARGET|PREFIX = ${STAGEDIR}${PREFIX}|g' \
		${WRKSRC}/F1LT.pro
	@${REINPLACE_CMD} -e 's|SHARE=$$$$PREFIX/share|SHARE=${STAGEDIR}${PREFIX}/share/${PORTNAME}|g' \
		${WRKSRC}/F1LT.pro
.if ${ARCH} == "i386"
	@${REINPLACE_CMD} -e 's|999999999998|1000000|g' \
		${WRKSRC}/src/tools/laptimecomparisondialog.cpp
.endif

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} \
		${QMAKE} ${QMAKEFLAGS} PREFIX=${PREFIX} F1LT.pro

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/CHANGELOG ${STAGEDIR}${DOCSDIR}
.endif
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/F1LT
	${CHOWN} ${BINOWN}:${BINGRP} ${STAGEDIR}${PREFIX}/bin/F1LT
	${CHMOD} 755 ${STAGEDIR}${PREFIX}/bin/F1LT
	${CHOWN} ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${PREFIX}/share/f1lt/*.dat
	${CHMOD} 644 ${STAGEDIR}${PREFIX}/share/f1lt/*.dat
	${LN} -sf F1LT ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
