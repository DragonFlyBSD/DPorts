# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/pear-PHP_CodeSniffer/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	PHP_CodeSniffer
PORTVERSION=	1.4.5
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP Script Tokenises and Sniffs PHP and JavaScript code

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
