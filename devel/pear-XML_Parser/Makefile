# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: head/devel/pear-XML_Parser/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	XML_Parser
PORTVERSION=	1.3.4
CATEGORIES=	devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR XML parsing class based on PHP's bundled expat

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
