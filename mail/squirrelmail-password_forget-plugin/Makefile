# Created by: Neil Darlow <neil@darlow.co.uk>
# $FreeBSD: mail/squirrelmail-password_forget-plugin/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	password_forget
PORTVERSION=	2.2
CATEGORIES=	mail www
MASTER_SITES=	http://www.squirrelmail.org/plugins/
PKGNAMEPREFIX=	squirrelmail-
PKGNAMESUFFIX=	-plugin
DISTNAME=	${SQUIRREL_PLUGIN_NAME}-${PORTVERSION}-1.0.1
DIST_SUBDIR=	squirrelmail

MAINTAINER=	neil@darlow.co.uk
COMMENT=	Prevent reuse of login details by browsers at public terminals

RUN_DEPENDS=	${SQUIRRELDIR}/plugins/compatibility:${PORTSDIR}/mail/squirrelmail-compatibility-plugin

USES=		perl5
USE_PERL5=	run

NO_STAGE=	yes
.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.mk>
