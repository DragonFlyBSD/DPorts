## New ports collection makefile for:	kshowmail
# Date created:			Sat Oct 18 14:01:21 CEST 2003
# Whom:				Markus Brueffer <brueffer@phoenix-systems.de>
#
# $FreeBSD: mail/kshowmail/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	kshowmail
PORTVERSION=	4.1
PORTREVISION=	1
CATEGORIES=	mail kde
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20for%20KDE4/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	POP3 mail checker for KDE

LICENSE=	GPLv2

USE_KDE4=	automoc4 kdehier kdeprefix kdelibs pimlibs
USE_QT4=	corelib dbus gui network svg xml \
		qmake_build uic_build rcc_build
USE_PERL5_BUILD=yes
USE_GETTEXT=	yes
USES=		cmake
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
