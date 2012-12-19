# Ports collection makefile for:  pear-MDB_QueryTool
# Date created:			  03 March 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/databases/pear-MDB_QueryTool/Makefile,v 1.11 2012/11/17 05:55:17 svnexp Exp $
#

PORTNAME=	MDB_QueryTool
PORTVERSION=	1.2.3
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR OO-interface for easily retrieving and modifying data in a DB

BUILD_DEPENDS=	${PEARDIR}/MDB.php:${PORTSDIR}/databases/pear-MDB \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log
RUN_DEPENDS:=	${PEARDIR}/MDB.php:${PORTSDIR}/databases/pear-MDB \
		${PEARDIR}/Log/null.php:${PORTSDIR}/sysutils/pear-Log

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
