# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: databases/pear-DB_Sqlite_Tools/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	DB_Sqlite_Tools
PORTVERSION=	0.1.7
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	an object oriented interface to backup Sqlite databases

BUILD_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log
RUN_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
