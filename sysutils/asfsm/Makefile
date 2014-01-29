# Created by: jack
# $FreeBSD: sysutils/asfsm/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	asfsm
PORTVERSION=	1.0.p15
PORTREVISION=	2
CATEGORIES=	sysutils afterstep
MASTER_SITES=	http://www.tigr.net/afterstep/download/asfsm/
DISTNAME=	asfsm-1.0pre15

MAINTAINER=	ports@FreeBSD.org
COMMENT=	File-system monitor for the AfterStep window manager

USE_XORG=	xpm x11 sm ice xext xaw xt
GNU_CONFIGURE=	yes

SUB_FILES=	pkg-message
PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_MAN} ${WRKSRC}/asfsm.man ${STAGEDIR}${PREFIX}/man/man1/asfsm.1
	${INSTALL_PROGRAM} ${WRKSRC}/asfsm ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
