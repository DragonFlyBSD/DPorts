# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/pear-PHP_CodeSniffer/Makefile 339741 2014-01-15 03:49:13Z miwi $

PORTNAME=	PHP_CodeSniffer
PORTVERSION=	1.5.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP Script Tokenises and Sniffs PHP and JavaScript code

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
