# Created by: Michael Frey <frey@raum3.de>
# $FreeBSD: net/pear-Net_IDNA/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_IDNA
PORTVERSION=	0.8.1
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Pear Punycode encoding and decoding package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
