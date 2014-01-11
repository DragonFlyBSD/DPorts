# Created by: Chris Piazza <cpiazza@FreeBSD.org>
# $FreeBSD: x11-clocks/bbdate/Makefile 337818 2013-12-27 22:24:59Z antoine $

PORTNAME=	bbdate
PORTVERSION=	0.2.4
PORTREVISION=	2
CATEGORIES=	x11-clocks
MASTER_SITES=	SF/bbtools/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool made for Blackbox that displays the date in a decorated window

GNU_CONFIGURE=	yes
USE_XORG=	x11 xau xdmcp xext xfixes xi xrandr ice sm

PLIST_FILES=	bin/bbdate share/bbtools/README.bbdate \
		share/bbtools/bbdate.conf share/bbtools/bbdate.nobb \
		share/bbtools/bbdate.style share/bbtools/bbtoolsrc.in
PLIST_DIRSTRY=	share/bbtools

.include <bsd.port.mk>
