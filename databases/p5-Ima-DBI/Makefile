# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: databases/p5-Ima-DBI/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Ima-DBI
PORTVERSION=	0.35
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PERRIN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Database connection caching and organization

BUILD_DEPENDS=	p5-DBIx-ContextualFetch>=0:${PORTSDIR}/databases/p5-DBIx-ContextualFetch \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Ima::DBI.3

.include <bsd.port.mk>
