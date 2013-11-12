# Created by: Thierry Thomas (<thierry@FreeBSD.org>)
# $FreeBSD: devel/pear-VFS/Makefile 333263 2013-11-08 21:41:53Z antoine $

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
