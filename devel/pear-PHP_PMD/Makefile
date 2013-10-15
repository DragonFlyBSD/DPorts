# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: devel/pear-PHP_PMD/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	PHP_PMD
PORTVERSION=	1.4.1
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phpmd.org/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	PHP Mess Detector

LICENSE=	BSD

BUILD_DEPENDS=	pear>=1.6.0:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.phpmd.org.reg:${PORTSDIR}/devel/pear-channel-phpmd
RUN_DEPENDS=	pear>=1.6.0:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.phpmd.org.reg:${PORTSDIR}/devel/pear-channel-phpmd

PEAR_CHANNEL=	phpmd
PEAR_AUTOINSTALL=	yes
USE_PHP=	dom simplexml

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
