# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: net/pear-Net_URL2/Makefile 338215 2013-12-31 02:53:27Z sunpoet $

PORTNAME=	Net_URL2
PORTVERSION=	2.0.3
CATEGORIES=	net www pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PEAR Class for parsing and handling URL

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
