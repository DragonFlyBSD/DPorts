# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: net/pear-File_Bittorrent2/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	File_Bittorrent2
DISTVERSION=	1.3.1
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Decode and Encode data in Bittorrent format

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
