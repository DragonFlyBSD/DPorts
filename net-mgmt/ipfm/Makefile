# Created by: Roman Shterenzon <roman@xpert.com>
# $FreeBSD: net-mgmt/ipfm/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ipfm
PORTVERSION=	0.11.5
CATEGORIES=	net-mgmt
MASTER_SITES=	http://robert.cheramy.net/ipfm/archive/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A bandwidth analysis tool

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var

MAN5=		ipfm.conf.5
MAN8=		ipfm.8

NO_STAGE=	yes
post-install:
	@${STRIP_CMD} ${PREFIX}/sbin/ipfm

.include <bsd.port.mk>
