# Ports collection makefile for:  pear-MIME_Type
# Date created:			  18 April 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/mail/pear-MIME_Type/Makefile,v 1.12 2012/11/17 05:59:10 svnexp Exp $
#

PORTNAME=	MIME_Type
PORTVERSION=	1.3.1
CATEGORIES=	mail www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for dealing with MIME types

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

LATEST_LINK=	pear-${PORTNAME}
OPTIONS=	PEAR_SYSTEM_COMMAND "PEAR::System_Command support" off

PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>

.if defined(WITH_PEAR_SYSTEM_COMMAND)
RUN_DEPENDS+=	${PEARDIR}/System/Command.php:${PORTSDIR}/devel/pear-System_Command
.endif

.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
