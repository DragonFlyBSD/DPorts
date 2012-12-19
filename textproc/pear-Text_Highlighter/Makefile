# Ports collection makefile for:  pear-File_Highlighter
# Date created:			28 Dec 2007
# Whom:				Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/textproc/pear-Text_Highlighter/Makefile,v 1.4 2012/11/17 06:02:15 svnexp Exp $
#

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
