# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: x11-toolkits/libXaw/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libXaw
PORTVERSION=	1.0.12
PORTEPOCH=	2
CATEGORIES=	x11-toolkits

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Athena Widgets library

XORG_CAT=	lib
USE_XORG=	printproto:both x11 xau xext xextproto xmu xp xpm xproto:both xt
USES=		gmake
CONFIGURE_ARGS+=--without-xmlto

.include <bsd.port.mk>
