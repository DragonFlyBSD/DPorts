# Created by: Marco Steinbach <coco@webdev.c0c0.intra>
# $FreeBSD: net/sqtop/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	sqtop
DISTVERSION=	2011-11-01
CATEGORIES=	net
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	coco@executive-computing.de
COMMENT=	Console-based display of Squid proxy connections

LICENSE=	GPLv2

USE_BZIP2=	yes

PLIST_FILES=	bin/sqtop

MAN1=		sqtop.1

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		NCURSES
OPTIONS_DEFAULT=	NCURSES

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ! ${PORT_OPTIONS:MNCURSES}
CONFIGURE_ARGS=	--disable-ui
.else
USES+=		ncurses
.endif

.include <bsd.port.mk>
