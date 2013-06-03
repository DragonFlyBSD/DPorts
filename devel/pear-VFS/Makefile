# Created by: Thierry Thomas (<thierry@FreeBSD.org>)
# $FreeBSD: devel/pear-VFS/Makefile 318048 2013-05-13 09:51:12Z miwi $

PORTNAME=	VFS
PORTVERSION=	0.3.0
CATEGORIES=	devel pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR Virtual File System API

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log

USE_PHP=	gettext
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
