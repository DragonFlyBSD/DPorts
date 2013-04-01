# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: textproc/pear-Text_Highlighter/Makefile 314443 2013-03-17 14:14:19Z miwi $

PORTNAME=	Text_Highlighter
PORTVERSION=	0.7.3
CATEGORIES=	textproc pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Syntax highlighting

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
