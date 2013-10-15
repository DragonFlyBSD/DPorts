# Created by: Stefan Jahn <stefan.jahn@nemesis-sektor.de>
# $FreeBSD: editors/kile-kde4/Makefile 329697 2013-10-07 12:26:54Z makc $

PORTNAME=	kile
PORTVERSION=	2.1.3
CATEGORIES=	editors kde
MASTER_SITES=	SF/${PORTNAME}/stable/${PORTNAME}-${DISTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	LaTeX source editor for KDE

RUN_DEPENDS=	identify:${PORTSDIR}/graphics/ImageMagick

USE_BZIP2=	yes
USES=		cmake
USE_QT4=	qmake_build moc_build rcc_build uic_build
USE_KDE4=	kdeprefix kdelibs automoc4 sharedmime kate_run
USE_TEX=	latex

OPTIONS_DEFINE=	OKULAR
OKULAR_DESC=	Use Okular for viewing
OKULAR_USE=	KDE4=okular_run

NO_STAGE=	yes

.include <bsd.port.mk>
