# New ports collection makefile for:	squirrelmail-timeout_user-plugin
# Date created:		2006-07-07
# Whom:			Thomas Abthorpe <thomas@goodking.ca>
#
# $FreeBSD: ports/mail/squirrelmail-timeout_user-plugin/Makefile,v 1.7 2012/11/17 05:59:16 svnexp Exp $
#

PORTNAME=	timeout_user
PORTVERSION=	1.1.1
PORTREVISION=	2
DISTNAME=	${PORTNAME}-${PORTVERSION}-0.5
DIST_SUBDIR=	squirrelmail

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	Automatically logs a user out if they're idle for a set amount of time

LICENSE=	GPLv2

RUN_DEPENDS+=	${SQUIRRELDIR}/plugins/compatibility:${PORTSDIR}/mail/squirrelmail-compatibility-plugin

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/mail/squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.post.mk>
