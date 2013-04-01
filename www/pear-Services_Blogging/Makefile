# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: www/pear-Services_Blogging/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	Services_Blogging
PORTVERSION=	0.2.4
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP interface to Blog

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/RPC.php:${PORTSDIR}/net/pear-XML_RPC
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/RPC.php:${PORTSDIR}/net/pear-XML_RPC

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
