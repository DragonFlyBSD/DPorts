# New ports collection makefile for:   libXfont
# Date Created:			29 Oct, 2003
# Whom:				Eric Anholt <anholt@FreeBSD.org>
#
# $FreeBSD: ports/x11-fonts/libXfont/Makefile,v 1.30 2012/11/17 06:03:28 svnexp Exp $
#

PORTNAME=	libXfont
PORTVERSION=	1.4.4
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font library

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

XORG_CAT=	lib
USE_XORG=	xproto:both xtrans fontsproto:both fontenc

CONFIGURE_ARGS=--without-xmlto --disable-devel-docs

.include <bsd.port.mk>
