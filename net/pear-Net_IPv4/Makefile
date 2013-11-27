# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: net/pear-Net_IPv4/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_IPv4
DISTVERSION=	1.3.4
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	IPv4 network calculations and validation

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
