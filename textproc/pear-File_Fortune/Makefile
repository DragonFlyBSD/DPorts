# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: textproc/pear-File_Fortune/Makefile 318050 2013-05-13 09:52:31Z miwi $

PORTNAME=	File_Fortune
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	textproc pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An interface for reading from and writing to fortune files

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
