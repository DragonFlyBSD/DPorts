# New ports collection makefile for:		squirrelmail-login_notes-plugin
# Date created:		10 Feb 2006
# Whom:		Gerrit Beine <gerrit.beine@gmx.de>
#
# $FreeBSD: ports/mail/squirrelmail-login_notes-plugin/Makefile,v 1.8 2012/11/17 05:59:15 svnexp Exp $

PORTNAME=	login_notes
PORTVERSION=	1.2
DISTNAME=	${SQUIRREL_PLUGIN_NAME}-${PORTVERSION}-1.4.0
DIST_SUBDIR=	squirrelmail

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	Place notes on the login screen

LICENSE=	GPLv2

RUN_DEPENDS+=	${SQUIRRELDIR}/plugins/compatibility:${PORTSDIR}/mail/squirrelmail-compatibility-plugin

USE_PERL5_RUN=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/mail/squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.post.mk>
