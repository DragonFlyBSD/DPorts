# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: audio/mehdiaplayer/Makefile 334586 2013-11-22 12:55:00Z makc $

PORTNAME=	mehdiaplayer
PORTVERSION=	0.2
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Simple media player using Qt/Phonon

USES=		qmake
USE_BZIP2=	yes
USE_QT4=	gui xml uic_build moc_build \
		rcc_build phonon

WRKSRC=		${WRKDIR}/dev

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
