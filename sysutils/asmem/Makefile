# Created by: jack
# $FreeBSD: sysutils/asmem/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	asmem
PORTVERSION=	1.12
PORTREVISION=	1
CATEGORIES=	sysutils afterstep
MASTER_SITES=	http://www.tigr.net/afterstep/download/asmem/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An AfterStep look-n-feel memory utilization monitor

USE_XORG=	xpm
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-xpm \
		--with-xpm-includes=${LOCALBASE}/include \
		--with-xpm-library=${LOCALBASE}/lib

MAN1=		asmem.1
PLIST_FILES=	bin/asmem

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} -g kmem -m 2755 ${WRKSRC}/asmem ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/asmem.man ${MANPREFIX}/man/man1/asmem.1

.include <bsd.port.mk>
