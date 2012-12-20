# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: ports/textproc/pear-Text_Template/Makefile,v 1.5 2012/11/17 19:05:58 svnexp Exp $

PORTNAME=	Text_Template
PORTVERSION=	1.1.2
CATEGORIES=	textproc www pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple template engine

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.phpunit.de.reg:${PORTSDIR}/devel/pear-channel-phpunit
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/.channels/pear.phpunit.de.reg:${PORTSDIR}/devel/pear-channel-phpunit

PEAR_CHANNEL=	phpunit
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
