# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: www/pear-Services_Blogging/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
