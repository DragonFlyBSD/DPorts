# Created by: Chris St Denis (<chris@ctgameinfo.com>)
# $FreeBSD: dns/pear-File_DNS/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	File_DNS
PORTVERSION=	0.1.0
CATEGORIES=	dns devel pear

MAINTAINER=	chris@ctgameinfo.com
COMMENT=	PEAR class to read and write RFC1033-style DNS Zonefiles

BUILD_DEPENDS=	${PEARDIR}/File.php:${PORTSDIR}/sysutils/pear-File
RUN_DEPENDS=	${PEARDIR}/File.php:${PORTSDIR}/sysutils/pear-File

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
