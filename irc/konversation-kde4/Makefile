# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: irc/konversation-kde4/Makefile 329697 2013-10-07 12:26:54Z makc $

PORTNAME=	konversation
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	irc kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}/${DISTVERSION}/src

MAINTAINER=	makc@FreeBSD.org
COMMENT=	User friendly IRC client for KDE

LIB_DEPENDS=	libqca.so:${PORTSDIR}/devel/qca

USE_XZ=		yes
USES=		cmake
USE_KDE4=	kdeprefix pimlibs automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build

NO_STAGE=	yes
.include <bsd.port.mk>
