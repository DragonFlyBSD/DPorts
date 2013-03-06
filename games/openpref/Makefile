# New ports collection makefile for:	openpref
# Date created:				2010-09-12
# Whom:					Konstantin Tokarev <annulen@yandex.ru>
#
# $FreeBSD: ports/games/openpref/Makefile,v 1.5 2013/01/23 15:05:34 svnexp Exp $
#

PORTNAME=	openpref
PORTVERSION=	0.1.3
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/OpenPref-Qt4/${PORTNAME}-${PORTVERSION}

MAINTAINER=	annulen@yandex.ru
COMMENT=	Preferans game

USE_QT4=	corelib gui qmake_build moc_build rcc_build uic_build
HAS_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

DESKTOP_ENTRIES="OpenPref" "${COMMENT}" "${DATADIR}/openpref.png" \
		"openpref" "Game;CardGame;" false

do-configure:
	@(cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${QMAKE} ${QMAKEFLAGS} ${QMAKE_ARGS} )

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/openpref ${PREFIX}/bin
	${MKDIR} ${DATADIR}/i18n
	${INSTALL_DATA} ${WRKSRC}/openpref_ru.qm ${DATADIR}/i18n
	${INSTALL_DATA} ${WRKSRC}/pics/openpref.png ${DATADIR}

.include <bsd.port.mk>
