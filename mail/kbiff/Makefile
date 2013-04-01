# New ports collection makefile for:	kbiff
# Date created:		So  14 Jun 1998 13:09:18 CEST
# Whom:			andreas
#
# $FreeBSD: mail/kbiff/Makefile 314960 2013-03-22 20:06:14Z makc $
#

PORTNAME=	kbiff
PORTVERSION=	4.0
PORTREVISION=	1
CATEGORIES=	mail kde
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mail notification utility for KDE with nice features

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_KDE4=	automoc4 kdehier kdeprefix kdelibs
USE_QT4=	corelib dbus gui network svg xml \
		qmake_build uic_build rcc_build
USE_PERL5_BUILD=yes
USE_GETTEXT=	yes
USES=		cmake
MAKE_JOBS_SAFE=	yes

MAN1=		kbiff.1

.include <bsd.port.mk>
