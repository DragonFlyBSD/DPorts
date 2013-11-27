# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: textproc/pear-XML_Feed_Parser/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
