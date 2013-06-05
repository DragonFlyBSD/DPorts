# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: net/pear-Net_MAC/Makefile 318026 2013-05-13 09:16:11Z miwi $

PORTNAME=	Net_MAC
PORTVERSION=	0.1.5
PORTREVISION=	1
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class that validates and formats MAC addresses

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
