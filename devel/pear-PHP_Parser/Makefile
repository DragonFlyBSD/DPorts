# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-PHP_Parser/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	PHP_Parser
PORTVERSION=	0.2.2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PHP Grammar Parser

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
