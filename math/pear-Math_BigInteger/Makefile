# Created by: Piotr Rybicki <meritus@innervision.pl>
# $FreeBSD: math/pear-Math_BigInteger/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Math_BigInteger
PORTVERSION=	1.0.0
CATEGORIES=	math pear

MAINTAINER=	meritus@innervision.pl
COMMENT=	Pure-PHP arbitrary precision integer arithmetic library

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	pcre
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
