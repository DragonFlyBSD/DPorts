# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: net/pear-Net_URL2/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_URL2
PORTVERSION=	2.0.0
CATEGORIES=	net www pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PEAR Class for parsing and handling URL

LICENSE=	BSD

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
