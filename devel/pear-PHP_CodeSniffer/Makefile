# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/devel/pear-PHP_CodeSniffer/Makefile,v 1.10 2013/02/04 09:09:39 svnexp Exp $

PORTNAME=	PHP_CodeSniffer
PORTVERSION=	1.4.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP Script Tokenises and Sniffs PHP and JavaScript code

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
