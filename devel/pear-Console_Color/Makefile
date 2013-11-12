# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-Console_Color/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	Console_Color
PORTVERSION=	1.0.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR use ANSI console colors

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
