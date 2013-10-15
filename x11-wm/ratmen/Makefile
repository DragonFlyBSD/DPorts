# Created by: alepulver
# $FreeBSD: x11-wm/ratmen/Makefile 327786 2013-09-21 00:01:16Z bapt $

PORTNAME=	ratmen
PORTVERSION=	2.2.3
PORTREVISION=	1
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.update.uu.se/~zrajm/programs/ratmen/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple program for displaying a menu in a window

USES=		perl5
USE_XORG=	x11
USE_PERL5=	build
MAN1=		ratmen.1
PLIST_FILES=	bin/ratmen

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ratmen ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ratmen.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
