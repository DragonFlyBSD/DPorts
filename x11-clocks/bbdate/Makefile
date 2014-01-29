# Created by: Chris Piazza <cpiazza@FreeBSD.org>
# $FreeBSD: x11-clocks/bbdate/Makefile 340722 2014-01-22 17:00:46Z mat $

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
