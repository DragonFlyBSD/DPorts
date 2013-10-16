# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: mail/squirrelmail-websearch-plugin/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	websearch
PORTVERSION=	0.1.6
PORTREVISION=	1
DISTNAME=	${SQUIRREL_PLUGIN_NAME}-${PORTVERSION}
DIST_SUBDIR=	squirrelmail

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin for Websearch

LICENSE=	GPLv2

RUN_DEPENDS+=	${SQUIRRELDIR}/plugins/compatibility:${PORTSDIR}/mail/squirrelmail-compatibility-plugin

SQUIRREL_PLUGIN_NAME=	web_search

NO_STAGE=	yes
.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.mk>
