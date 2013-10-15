# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: security/keepassx/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	KeePassX
PORTVERSION=	0.4.3
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME:tl}/KeePassX/${PORTVERSION}/
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Cross Platform Password Manager

RUN_DEPENDS=	update-mime-database:${PORTSDIR}/misc/shared-mime-info

DATADIR=	${PREFIX}/share/${PORTNAME:tl}
WRKSRC=		${WRKDIR}/${PORTNAME:tl}-${PORTVERSION}

USE_QT4=	qmake_build moc_build uic_build qt3support_build rcc_build \
		corelib gui xml
HAS_CONFIGURE=	yes
USE_XORG=	xt inputproto xtst xrender xrandr xfixes xcursor\
		xext x11 sm ice xi

NO_STAGE=	yes
do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} \
		${QMAKE} -unix PREFIX=${PREFIX} \
		INCLUDEPATH+=${LOCALBASE}/include LIBS+=-L${LOCALBASE}/lib \
		keepassx.pro

post-install:
	-@update-mime-database ${LOCALBASE}/share/mime

.include <bsd.port.mk>
