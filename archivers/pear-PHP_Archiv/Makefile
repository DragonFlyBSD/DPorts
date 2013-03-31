# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: archivers/pear-PHP_Archiv/Makefile 314219 2013-03-15 01:33:44Z miwi $

PORTNAME=	PHP_Archive
PORTVERSION=	0.11.4
CATEGORIES=	archivers

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Create and Use PHP Archive files

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
