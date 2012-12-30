# New ports collection makefile for:	PolKit-kde
# Date created:		2009-12-25
# Whom:			Dima Panov <fluffy@Fluffy.Khv.RU>
#
# $FreeBSD: ports/sysutils/polkit-kde/Makefile,v 1.9 2012/11/17 06:01:41 svnexp Exp $
#

PORTNAME=	polkit-kde
PORTVERSION=	0.99.0
PORTREVISION=	3
CATEGORIES=	sysutils kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/apps/KDE4.x/admin/
DISTNAME=	${PORTNAME}-agent-1-${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 frontend to PolKit-1

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	polkit-qt-agent-1.1:${PORTSDIR}/sysutils/polkit-qt

USE_BZIP2=	yes
USE_GETTEXT=	yes
USE_KDE4=	kdehier kdelibs kdeprefix automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_CMAKE=	yes
USE_LDCONFIG=	yes

post-extract:
	${REINPLACE_CMD} -e 's|$${LIB_INSTALL_DIR}/pkgconfig|libdata/pkgconfig|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
