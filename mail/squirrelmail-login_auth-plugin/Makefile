# Created by: Stefan Bethke <stb@lassitu.de>
# $FreeBSD: mail/squirrelmail-login_auth-plugin/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=		login_auth
PORTVERSION=		3.0
PORTREVISION=	1
CATEGORIES=		mail www
MASTER_SITES=		http://www.squirrelmail.org/plugins/ \
			http://www.transit.hanse.de/mirror/www.squirrelmail.org/plugins/
DISTNAME=		${PORTNAME}-${PORTVERSION}-1.4.0

MAINTAINER=		stb@lassitu.de
COMMENT=		Automatically log in user based on HTTP authentication

SQUIRREL_PLUGIN_NAME=	${PORTNAME}

NO_STAGE=	yes

.include <bsd.port.pre.mk>
.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.post.mk>
