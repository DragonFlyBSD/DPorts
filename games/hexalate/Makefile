# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: games/hexalate/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	hexalate
PORTVERSION=	1.0.2
CATEGORIES=	games
MASTER_SITES=	http://gottcode.org/${PORTNAME}/ \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A color matching game

USE_BZIP2=	yes
USE_QT4=	corelib gui moc_build qmake_build rcc_build
WANT_GNOME=	yes
INSTALLS_ICONS=	yes
QMAKEFLAGS+=	PREFIX=${PREFIX}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

NO_STAGE=	yes
do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} \
		${QMAKE} ${QMAKEFLAGS} ${PORTNAME}.pro

.include <bsd.port.mk>
