# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: games/hexalate/Makefile 334688 2013-11-23 17:42:04Z makc $

PORTNAME=	hexalate
PORTVERSION=	1.0.2
CATEGORIES=	games
MASTER_SITES=	http://gottcode.org/${PORTNAME}/ \
		http://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A color matching game

USES=		qmake
USE_BZIP2=	yes
USE_QT4=	corelib gui moc_build rcc_build
INSTALLS_ICONS=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
