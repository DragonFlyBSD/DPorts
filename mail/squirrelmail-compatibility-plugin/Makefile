# New ports collection makefile for:	squirrelmail-compatibility-plugin
# Date created:				3 Jul 2005
# Whom:					Alexander Wittig <alexander@wittig.name>
#
# $FreeBSD: ports/mail/squirrelmail-compatibility-plugin/Makefile,v 1.21 2012/11/17 05:59:15 svnexp Exp $

PORTNAME=	compatibility
PORTVERSION=	2.0.16
CATEGORIES=	mail www
MASTER_SITES=	http://www.squirrelmail.org/plugins/
PKGNAMEPREFIX=	squirrelmail-
PKGNAMESUFFIX=	-plugin
DISTNAME=	${PORTNAME}-${PORTVERSION}-1.0
DIST_SUBDIR=	squirrelmail

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	Required by many plugins for compatibility with SquirrelMail

USE_PERL5_RUN=	yes

CONFLICTS=	squirrelmail-compatibility-plugin-1.*

.include <bsd.port.pre.mk>
.include "../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.post.mk>
