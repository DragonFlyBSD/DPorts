# Created by: Piotr Rybicki <meritus@innervision.pl>
# $FreeBSD: math/pear-Math_BigInteger/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	Math_BigInteger
PORTVERSION=	1.0.0
CATEGORIES=	math pear

MAINTAINER=	meritus@innervision.pl
COMMENT=	Pure-PHP arbitrary precision integer arithmetic library

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	pcre
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
