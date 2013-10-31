# Created by: Roy Marples <roy@marples.name>
# $FreeBSD: net/dhcpcd/Makefile 331931 2013-10-29 06:13:15Z delphij $

PORTNAME=	dhcpcd
PORTVERSION=	5.5.6
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	http://roy.marples.name/downloads/dhcpcd/ \
		LOCAL/delphij

MAINTAINER=	roy@marples.name
COMMENT=	DHCP client

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_RC_SUBR=	dhcpcd

NO_STAGE=	yes

CONFIGURE_ARGS+= --mandir=${PREFIX}/man

MAN5=		dhcpcd.conf.5
MAN8=		dhcpcd.8 dhcpcd-run-hooks.8

.include <bsd.port.mk>
