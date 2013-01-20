# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: ports/devel/pear-PHP_TokenStream/Makefile,v 1.2 2013/01/03 11:54:16 svnexp Exp $

PORTNAME=	PHP_TokenStream
PORTVERSION=	1.1.5
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Wrapper around PHP tokenizer extension

LICENSE=	BSD

BUILD_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.phpunit.de.reg:${PORTSDIR}/devel/pear-channel-phpunit
RUN_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.phpunit.de.reg:${PORTSDIR}/devel/pear-channel-phpunit

PEAR_CHANNEL=	phpunit
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
