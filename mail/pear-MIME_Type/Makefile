# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: ports/mail/pear-MIME_Type/Makefile,v 1.13 2012/12/17 02:18:01 svnexp Exp $

PORTNAME=	MIME_Type
PORTVERSION=	1.3.1
CATEGORIES=	mail www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for dealing with MIME types

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

LATEST_LINK=	pear-${PORTNAME}
OPTIONS_DEFINE=	PEAR_SYSTEM_COMMAND
PEAR_SYSTEM_COMMAND_DESC=	PEAR::System_Command support

PEAR_AUTOINSTALL=yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPEAR_SYSTEM_COMMAND}
RUN_DEPENDS+=	${PEARDIR}/System/Command.php:${PORTSDIR}/devel/pear-System_Command
.endif

.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.mk>
