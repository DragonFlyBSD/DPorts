# Ports collection makefile for:  pear-XML_NITF
# Date created:			  18 March 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/devel/pear-XML_NITF/Makefile,v 1.7 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	XML_NITF
PORTVERSION=	1.1.1
CATEGORIES=	devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR NITF XML parser

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		XML/NITF.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
