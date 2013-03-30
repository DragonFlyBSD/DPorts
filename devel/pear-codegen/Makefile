# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: devel/pear-codegen/Makefile 314262 2013-03-15 06:45:07Z miwi $

PORTNAME=	codegen
PORTVERSION=	1.0.7
CATEGORIES=	devel pear
DISTNAME=	CodeGen-${PORTVERSION}

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Tool to create code generators that operate on XML descriptions

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
