# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: devel/pear-HTML_Template_PHPLIB/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	HTML_Template_PHPLIB
PORTVERSION=	1.5.2
PORTREVISION=	1
CATEGORIES=	devel www pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PEAR template API ported from PHPLIB

LICENSE=	LGPL3

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

do-install-tests-msg: .USE
	@${ECHO_MSG} "     (These tests require PEAR::Benchmark - see"
	@${ECHO_MSG} "     <http://pear.php.net/package-info.php?package=Benchmark>;;;)."
	@${ECHO_MSG} "     (These tests also require PEAR::PHPUnit - see"
	@${ECHO_MSG} "     <http://pear.php.net/package/PHPUnit>;;;)."

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
