# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: ports/security/kgpg-kde4/Makefile,v 1.163 2013/02/04 01:04:36 svnexp Exp $

PORTNAME=	kgpg
PORTVERSION=	${KDE4_VERSION}
CATEGORIES=	security kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Encryption tool for KDE

RUN_DEPENDS=	gpg2:${PORTSDIR}/security/gnupg

CONFLICTS_INSTALL_INSTALL=	kdeutils-4.[0-7].*
LATEST_LINK=	${PORTNAME}4

USE_XZ=	yes
USE_KDE4=	kdeprefix kdehier automoc4 kdelibs pimlibs
KDE4_BUILDENV=	yes
USE_QT4=	qmake_build moc_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
