# Created by: Brian Handy <handy@physics.montana.edu>
# $FreeBSD: sysutils/asapm/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	asapm
PORTVERSION=	3.1
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.tigr.net/afterstep/download/asapm/

MAINTAINER=	gamato@users.sf.net
COMMENT=	Laptop battery status display for X11

ONLY_FOR_ARCHS=	i386 amd64

USE_XORG=	xpm
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install install.man

MAN1=		asapm.1
PLIST_FILES=	bin/asapm

NO_STAGE=	yes
.include <bsd.port.mk>
