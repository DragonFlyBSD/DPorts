# Created by: Roy Marples <roy@marples.name>
# $FreeBSD: net/dhcpcd/Makefile 340722 2014-01-22 17:00:46Z mat $

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
