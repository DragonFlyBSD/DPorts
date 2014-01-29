# Created by: Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
# $FreeBSD: x11-wm/wm2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wm2
PORTVERSION=	4.0
PORTREVISION=	2
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.all-day-breakfast.com/wm2/
DISTNAME=	${PORTNAME}-${PORTVERSION:R}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple window manager for X

BUILD_DEPENDS=	makedepend:${PORTSDIR}/devel/makedepend

USE_XORG=	x11 xext xmu
ALL_TARGET=	depend wm2

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wm2 ${STAGEDIR}${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>
