# Ports collection makefile for:  pear-XML_Tree
# Date created:			  04 September 2003
# Whom:				  Alex Miller (<asm@asm.kiev.ua>)
#
# $FreeBSD: ports/devel/pear-XML_Tree/Makefile,v 1.10 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	XML_Tree
PORTVERSION=	1.1
PORTREVISION=	2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for representing XML data in a tree structure

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	XML
FILES=		Tree.php Tree/Node.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
