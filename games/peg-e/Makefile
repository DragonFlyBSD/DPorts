# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: ports/games/peg-e/Makefile,v 1.9 2013/02/25 04:43:48 svnexp Exp $

PORTNAME=	peg-e
PORTVERSION=	1.1.2
CATEGORIES=	games
MASTER_SITES=	http://gottcode.org/peg-e/ \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Peg elimination game

USE_BZIP2=	yes
USE_QT4=	corelib gui moc_build qmake_build rcc_build
WANT_GNOME=	yes
INSTALLS_ICONS=	yes
MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${QMAKE} ${QMAKEFLAGS} \
		PREFIX=${PREFIX} ${PORTNAME}.pro

.include <bsd.port.mk>
