# Created by: Markus Brueffer <brueffer@phoenix-systems.de>
# $FreeBSD: mail/kshowmail/Makefile 327742 2013-09-20 19:59:12Z bapt $

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
USE_PERL5=	build
USES=		cmake gettext perl5

NO_STAGE=	yes
.include <bsd.port.mk>
