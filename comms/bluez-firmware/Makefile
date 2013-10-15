# Created by: dirkx@webweaving.org
# $FreeBSD: comms/bluez-firmware/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

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
