# Ports collection makefile for:  pear-HTML_Template_PHPLIB
# Date created:			  04 September 2003
# Whom:				  Alex Miller (<asm@asm.kiev.ua>)
#
# $FreeBSD: ports/devel/pear-HTML_Template_PHPLIB/Makefile,v 1.13 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	HTML_Template_PHPLIB
PORTVERSION=	1.5.2
CATEGORIES=	devel www pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PEAR template API ported from PHPLIB

LICENSE=	LGPL3

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

SCRIPTFILES=	html_template_phplibtool
FILES=		HTML/Template/PHPLIB.php HTML/Template/PHPLIB/Generator.php \
		HTML/Template/PHPLIB/Helper.php \
		HTML/Template/PHPLIB/Tool.php \
		HTML/Template/PHPLIB/Validator.php
DOCS=		README
EXAMPLES=	authors.php authors.tpl block.ihtml block.php broken.tpl ittest.php tpl1.ihtml tpl1.php
_DOCSDIR=	examples
TESTS=		AllTests.php HTML_Template_PHPLIBTest.php \
		HTML_Template_PHPLIB_GeneratorTest.php \
		HTML_Template_PHPLIB_HelperTest.php \
		HTML_Template_PHPLIB_ValidatorTest.php \
		helper.inc \
		templates/block.tpl templates/block2.tpl templates/block3.tpl \
		templates/simple.tpl templates/simple2.tpl

post-patch:
.for _FILE in ${SCRIPTFILES}
	${MV} ${WRKSRC}/bin/${_FILE} ${WRKSRC}/pear-${_FILE}
.endfor

do-install-tests-msg: .USE
	@${ECHO_MSG} "     (These tests require PEAR::Benchmark - see"
	@${ECHO_MSG} "     <http://pear.php.net/package-info.php?package=Benchmark>;;;)."
	@${ECHO_MSG} "     (These tests also require PEAR::PHPUnit - see"
	@${ECHO_MSG} "     <http://pear.php.net/package/PHPUnit>;;;)."

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
