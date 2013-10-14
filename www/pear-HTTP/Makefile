# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: www/pear-HTTP/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP
PORTVERSION=	1.4.1
CATEGORIES=	www devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR miscellaneous HTTP utilities

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
