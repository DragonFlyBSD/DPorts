# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: databases/p5-Class-DBI-Plugin/Makefile 341764 2014-01-29 17:31:52Z az $

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

.include <bsd.port.mk>
