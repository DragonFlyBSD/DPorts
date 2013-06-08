# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: security/keepassx/Makefile 316489 2013-04-25 01:34:24Z swills $

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
MAKE_JOBS_SAFE=	yes

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} \
		${QMAKE} -unix PREFIX=${PREFIX} \
		INCLUDEPATH+=${LOCALBASE}/include LIBS+=-L${LOCALBASE}/lib \
		keepassx.pro

post-install:
	-@update-mime-database ${LOCALBASE}/share/mime

.include <bsd.port.mk>
