# Created by: Thomas Abthorpe <thomas@goodking.ca>
# $FreeBSD: mail/squirrelmail-timeout_user-plugin/Makefile 321853 2013-06-27 06:48:43Z bapt $

PORTNAME=	timeout_user
PORTVERSION=	1.1.1
PORTREVISION=	2
DISTNAME=	${PORTNAME}-${PORTVERSION}-0.5
DIST_SUBDIR=	squirrelmail

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	Automatically logs a user out if they're idle for a set amount of time

LICENSE=	GPLv2

RUN_DEPENDS+=	${SQUIRRELDIR}/plugins/compatibility:${PORTSDIR}/mail/squirrelmail-compatibility-plugin

.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.mk>
