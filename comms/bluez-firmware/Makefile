# New ports collection makefile for:	bluez-firmware
# Date created:				30 July 2007
# Whom:					dirkx@webweaving.org
#
# $FreeBSD: ports/comms/bluez-firmware/Makefile,v 1.3 2012/11/17 05:54:59 svnexp Exp $
#

PORTNAME=	bluez-firmware
PORTVERSION=	1.2
CATEGORIES=	comms kld
MASTER_SITES=	http://bluez.sourceforge.net/download/

MAINTAINER=	dirkx@webweaving.org
COMMENT=	Firmware for the D-Link BCM2033 bluetooth adaptor for use by bcmfw(1)

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--prefix=${PREFIX}

post-install:
	@${CAT} pkg-message

.include <bsd.port.mk>
