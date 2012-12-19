# Ports collection makefile for:  pear-XML_Feed_Parser
# Date created:			  2007/05/01
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/textproc/pear-XML_Feed_Parser/Makefile,v 1.6 2012/11/17 06:02:15 svnexp Exp $
#

PORTNAME=	XML_Feed_Parser
PORTVERSION=	1.0.5
CATEGORIES=	textproc devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Providing a unified API for handling Atom/RSS

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	tidy dom
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
