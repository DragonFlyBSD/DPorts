# New ports collection makefile for:	databases/p5-Class-DBI-Plugin
# Date created:				01 April 2005
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: databases/p5-Class-DBI-Plugin/Makefile 324352 2013-08-07 13:20:32Z az $
#

PORTNAME=	Class-DBI-Plugin
PORTVERSION=	0.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Abstract base class for Class::DBI plugins

BUILD_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Class::DBI::Plugin.3

.include <bsd.port.mk>
