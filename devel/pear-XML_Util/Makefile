# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: devel/pear-XML_Util/Makefile 314197 2013-03-15 00:40:32Z miwi $

PORTNAME=	XML_Util
PORTVERSION=	1.2.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR XML utility class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
