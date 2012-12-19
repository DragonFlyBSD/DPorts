# Ports collection makefile for:  pear-XML_RSS
# Date created:			  04 September 2003
# Whom:				  Alex Miller (<asm@asm.kiev.ua>)
#
# $FreeBSD: ports/devel/pear-XML_RSS/Makefile,v 1.11 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	XML_RSS
PORTVERSION=	1.0.2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR RSS parser

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser

FILES=		XML/RSS.php
TESTS=		test.rss XML_RSS_Infrastructure_Test.php \
		XML_RSS_Parsing_Test.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
