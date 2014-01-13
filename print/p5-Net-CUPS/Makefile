# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: print/p5-Net-CUPS/Makefile 338799 2014-01-05 16:55:04Z az $

PORTNAME=	Net-CUPS
PORTVERSION=	0.61
PORTREVISION=	1
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Interface to the CUPS API

BUILD_DEPENDS=	cups-config:${PORTSDIR}/print/cups-client
LIB_DEPENDS=	libcupsimage.so:${PORTSDIR}/print/cups-image

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
