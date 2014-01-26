# $FreeBSD: sysutils/pear-Horde_Vfs/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Vfs
PORTVERSION=	2.1.2
CATEGORIES=	sysutils www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Virtual File System API

USE_HORDE_RUN=	Horde_Exception \
		Horde_Translation \
		Horde_Util

OPTIONS_DEFINE=	FTP
FTP_DESC=	Depend on FTP PHP extension

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MFTP}
USE_PHP+=	ftp
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
