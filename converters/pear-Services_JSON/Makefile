# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: converters/pear-Services_JSON/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Services_JSON
PORTVERSION=	1.0.3
CATEGORIES=	converters www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP implementation of json_encode/decode

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
