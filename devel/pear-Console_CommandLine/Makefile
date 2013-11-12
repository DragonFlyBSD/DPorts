# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-Console_CommandLine/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	Console_CommandLine
PORTVERSION=	1.2.0
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A full featured command line options and arguments parser

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
