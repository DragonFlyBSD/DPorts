# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-PHP_Parser/Makefile 314227 2013-03-15 02:26:16Z miwi $

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
