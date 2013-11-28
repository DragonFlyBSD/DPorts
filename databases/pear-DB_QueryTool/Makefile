# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: databases/pear-DB_QueryTool/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	DB_QueryTool
PORTVERSION=	1.1.2
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR OO-interface for easily retrieving and modifying data in a DB

BUILD_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log
RUN_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
